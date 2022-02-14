
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; } ;
struct TYPE_2__ {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_trans_delay_msecs; int tg_pt_gp_id; TYPE_1__ tg_pt_gp_group; int tg_pt_gp_md_buf_len; } ;
struct se_port {int sep_tg_pt_md_mutex; scalar_t__ sep_tg_pt_secondary_write_md; int sep_tg_pt_secondary_stat; int sep_tg_pt_secondary_offline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct t10_alua_tg_pt_gp_member*,struct se_port*,unsigned char*,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,int ,int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(
 struct t10_alua_tg_pt_gp_member *VAR_5,
 struct se_port *VAR_6,
 int VAR_7,
 int VAR_8)
{
 struct t10_alua_tg_pt_gp *VAR_9;
 unsigned char *VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_10(&VAR_5->tg_pt_gp_mem_lock);
 VAR_9 = VAR_5->tg_pt_gp;
 if (!VAR_9) {
  FUNC_11(&VAR_5->tg_pt_gp_mem_lock);
  FUNC_9("Unable to complete secondary state"
    " transition\n");
  return -VAR_2;
 }
 VAR_12 = VAR_9->tg_pt_gp_trans_delay_msecs;




 if (VAR_8)
  FUNC_0(&VAR_6->sep_tg_pt_secondary_offline, 1);
 else
  FUNC_0(&VAR_6->sep_tg_pt_secondary_offline, 0);

 VAR_11 = VAR_9->tg_pt_gp_md_buf_len;
 VAR_6->sep_tg_pt_secondary_stat = (VAR_7) ?
   VAR_0 :
   VAR_1;

 FUNC_8("Successful %s ALUA transition TG PT Group: %s ID: %hu"
  " to secondary access state: %s\n", (VAR_7) ? "explict" :
  "implict", FUNC_1(&VAR_9->tg_pt_gp_group.cg_item),
  VAR_9->tg_pt_gp_id, (VAR_8) ? "OFFLINE" : "ONLINE");

 FUNC_11(&VAR_5->tg_pt_gp_mem_lock);




 if (VAR_12 != 0)
  FUNC_5(VAR_12);




 if (VAR_6->sep_tg_pt_secondary_write_md) {
  VAR_10 = FUNC_4(VAR_11, VAR_4);
  if (!VAR_10) {
   FUNC_9("Unable to allocate md_buf for"
    " secondary ALUA access metadata\n");
   return -VAR_3;
  }
  FUNC_6(&VAR_6->sep_tg_pt_md_mutex);
  FUNC_2(VAR_5, VAR_6,
    VAR_10, VAR_11);
  FUNC_7(&VAR_6->sep_tg_pt_md_mutex);

  FUNC_3(VAR_10);
 }

 return 0;
}
