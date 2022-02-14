
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_id; } ;
struct t10_alua_lu_gp_member {int lu_gp_mem_lock; struct t10_alua_lu_gp* lu_gp; } ;
struct t10_alua_lu_gp {int lu_gp_id; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_port {int sep_rtpi; struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; struct se_portal_group* sep_tpg; } ;
struct se_lun {struct se_port* lun_sep; } ;
struct TYPE_4__ {unsigned char* model; unsigned char* unit_serial; } ;
struct se_device {int dev_flags; struct t10_alua_lu_gp_member* dev_alua_lu_gp_mem; TYPE_2__ t10_wwn; } ;
struct se_cmd {struct se_lun* se_lun; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {int (* get_fabric_proto_ident ) (struct se_portal_group*) ;unsigned char* (* tpg_get_wwn ) (struct se_portal_group*) ;int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (struct se_device*,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (unsigned char*,char*,unsigned char*,...) ;
 size_t FUNC_5 (unsigned char*) ;
 int FUNC_6 (struct se_portal_group*) ;
 int FUNC_7 (struct se_portal_group*) ;
 unsigned char* FUNC_8 (struct se_portal_group*) ;
 int FUNC_9 (struct se_portal_group*) ;
 int FUNC_10 (struct se_portal_group*) ;
 unsigned char* FUNC_11 (struct se_portal_group*) ;
 char* FUNC_12 (struct se_portal_group*) ;

sense_reason_t
FUNC_13(struct se_cmd *VAR_1, unsigned char *VAR_2)
{
 struct se_device *VAR_3 = VAR_1->se_dev;
 struct se_lun *VAR_4 = VAR_1->se_lun;
 struct se_port *VAR_5 = ((void*)0);
 struct se_portal_group *VAR_6 = ((void*)0);
 struct t10_alua_lu_gp_member *VAR_7;
 struct t10_alua_tg_pt_gp *VAR_8;
 struct t10_alua_tg_pt_gp_member *VAR_9;
 unsigned char *VAR_10 = &VAR_3->t10_wwn.model[0];
 u32 VAR_11;
 u32 VAR_12, VAR_13 = 0;
 u16 VAR_14 = 0, VAR_15;

 VAR_13 = 4;
 if (!(VAR_3->dev_flags & VAR_0))
  goto check_t10_vend_desc;


 VAR_2[VAR_13++] = 0x1;


 VAR_2[VAR_13] = 0x00;


 VAR_2[VAR_13++] |= 0x3;
 VAR_13++;


 VAR_2[VAR_13++] = 0x10;




 VAR_2[VAR_13++] = (0x6 << 4);




 VAR_2[VAR_13++] = 0x01;
 VAR_2[VAR_13++] = 0x40;
 VAR_2[VAR_13] = (0x5 << 4);






 FUNC_1(VAR_3, &VAR_2[VAR_13]);

 VAR_14 = 20;
 VAR_13 = (VAR_14 + 4);

check_t10_vend_desc:



 VAR_15 = 8;
 VAR_11 = 4;
 VAR_11 += 8;
 VAR_11 += FUNC_5(VAR_10);
 VAR_11++;

 if (VAR_3->dev_flags & VAR_0) {
  VAR_12 = FUNC_5(&VAR_3->t10_wwn.unit_serial[0]);
  VAR_12++;

  VAR_15 += FUNC_4(&VAR_2[VAR_13+12], "%s:%s", VAR_10,
    &VAR_3->t10_wwn.unit_serial[0]);
 }
 VAR_2[VAR_13] = 0x2;
 VAR_2[VAR_13+1] = 0x1;
 VAR_2[VAR_13+2] = 0x0;
 FUNC_0(&VAR_2[VAR_13+4], "LIO-ORG", 8);

 VAR_15++;

 VAR_2[VAR_13+3] = VAR_15;

 VAR_14 += (VAR_15 + 4);
 VAR_13 += (VAR_15 + 4);



 VAR_5 = VAR_4->lun_sep;
 if (VAR_5) {
  struct t10_alua_lu_gp *VAR_16;
  u32 VAR_17, VAR_18;
  u16 VAR_19 = 0;
  u16 VAR_20 = 0;
  u16 VAR_21;

  VAR_6 = VAR_5->sep_tpg;







  VAR_2[VAR_13] =
   (VAR_6->se_tpg_tfo->get_fabric_proto_ident(VAR_6) << 4);
  VAR_2[VAR_13++] |= 0x1;
  VAR_2[VAR_13] = 0x80;

  VAR_2[VAR_13] |= 0x10;

  VAR_2[VAR_13++] |= 0x4;
  VAR_13++;
  VAR_2[VAR_13++] = 4;


  VAR_13 += 2;
  VAR_2[VAR_13++] = ((VAR_5->sep_rtpi >> 8) & 0xff);
  VAR_2[VAR_13++] = (VAR_5->sep_rtpi & 0xff);
  VAR_14 += 8;







  VAR_9 = VAR_5->sep_alua_tg_pt_gp_mem;
  if (!VAR_9)
   goto check_lu_gp;

  FUNC_2(&VAR_9->tg_pt_gp_mem_lock);
  VAR_8 = VAR_9->tg_pt_gp;
  if (!VAR_8) {
   FUNC_3(&VAR_9->tg_pt_gp_mem_lock);
   goto check_lu_gp;
  }
  VAR_20 = VAR_8->tg_pt_gp_id;
  FUNC_3(&VAR_9->tg_pt_gp_mem_lock);

  VAR_2[VAR_13] =
   (VAR_6->se_tpg_tfo->get_fabric_proto_ident(VAR_6) << 4);
  VAR_2[VAR_13++] |= 0x1;
  VAR_2[VAR_13] = 0x80;

  VAR_2[VAR_13] |= 0x10;

  VAR_2[VAR_13++] |= 0x5;
  VAR_13++;
  VAR_2[VAR_13++] = 4;
  VAR_13 += 2;
  VAR_2[VAR_13++] = ((VAR_20 >> 8) & 0xff);
  VAR_2[VAR_13++] = (VAR_20 & 0xff);
  VAR_14 += 8;




check_lu_gp:
  VAR_7 = VAR_3->dev_alua_lu_gp_mem;
  if (!VAR_7)
   goto check_scsi_name;

  FUNC_2(&VAR_7->lu_gp_mem_lock);
  VAR_16 = VAR_7->lu_gp;
  if (!VAR_16) {
   FUNC_3(&VAR_7->lu_gp_mem_lock);
   goto check_scsi_name;
  }
  VAR_19 = VAR_16->lu_gp_id;
  FUNC_3(&VAR_7->lu_gp_mem_lock);

  VAR_2[VAR_13++] |= 0x1;

  VAR_2[VAR_13++] |= 0x6;
  VAR_13++;
  VAR_2[VAR_13++] = 4;
  VAR_13 += 2;
  VAR_2[VAR_13++] = ((VAR_19 >> 8) & 0xff);
  VAR_2[VAR_13++] = (VAR_19 & 0xff);
  VAR_14 += 8;







check_scsi_name:
  VAR_18 = FUNC_5(VAR_6->se_tpg_tfo->tpg_get_wwn(VAR_6));

  VAR_18 += 10;

  VAR_17 = ((-VAR_18) & 3);
  if (VAR_17 != 0)
   VAR_18 += VAR_17;

  VAR_18 += 4;

  VAR_2[VAR_13] =
   (VAR_6->se_tpg_tfo->get_fabric_proto_ident(VAR_6) << 4);
  VAR_2[VAR_13++] |= 0x3;
  VAR_2[VAR_13] = 0x80;

  VAR_2[VAR_13] |= 0x10;

  VAR_2[VAR_13++] |= 0x8;
  VAR_13 += 2;






  VAR_21 = VAR_6->se_tpg_tfo->tpg_get_tag(VAR_6);
  VAR_18 = FUNC_4(&VAR_2[VAR_13], "%s,t,0x%04x",
     VAR_6->se_tpg_tfo->tpg_get_wwn(VAR_6), VAR_21);
  VAR_18 += 1 ;
  if (VAR_17)
   VAR_18 += VAR_17;

  VAR_2[VAR_13-1] = VAR_18;
  VAR_13 += VAR_18;

  VAR_14 += (VAR_18 + 4);
 }
 VAR_2[2] = ((VAR_14 >> 8) & 0xff);
 VAR_2[3] = (VAR_14 & 0xff);
 return 0;
}
