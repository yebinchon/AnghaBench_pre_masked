
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_session {struct se_portal_group* se_tpg; } ;
struct se_portal_group {int se_tpg_tfo; } ;
struct se_cmd {int work; TYPE_1__* se_tmr_req; } ;
typedef int gfp_t ;
struct TYPE_2__ {unsigned int ref_task_tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_2 (struct se_cmd*,void*,unsigned char,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct se_session*,struct se_cmd*,int) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*,int ,struct se_session*,int ,int ,int ,unsigned char*) ;
 int FUNC_8 (struct se_cmd*,int ) ;

int FUNC_9(struct se_cmd *VAR_6, struct se_session *VAR_7,
  unsigned char *VAR_8, u32 VAR_9,
  void *VAR_10, unsigned char VAR_11,
  gfp_t VAR_12, unsigned int VAR_13, int VAR_14)
{
 struct se_portal_group *VAR_15;
 int VAR_16;

 VAR_15 = VAR_7->se_tpg;
 FUNC_0(!VAR_15);

 FUNC_7(VAR_6, VAR_15->se_tpg_tfo, VAR_7,
         0, VAR_0, VAR_2, VAR_8);




 VAR_16 = FUNC_2(VAR_6, VAR_10, VAR_11, VAR_12);
 if (VAR_16 < 0)
  return -VAR_1;

 if (VAR_11 == VAR_4)
  VAR_6->se_tmr_req->ref_task_tag = VAR_13;


 VAR_16 = FUNC_5(VAR_7, VAR_6, (VAR_14 & VAR_3));
 if (VAR_16) {
  FUNC_3(VAR_6->se_tmr_req);
  return VAR_16;
 }

 VAR_16 = FUNC_8(VAR_6, VAR_9);
 if (VAR_16) {




  FUNC_1(&VAR_6->work, VAR_5);
  FUNC_4(&VAR_6->work);
  return 0;
 }
 FUNC_6(VAR_6);
 return 0;
}
