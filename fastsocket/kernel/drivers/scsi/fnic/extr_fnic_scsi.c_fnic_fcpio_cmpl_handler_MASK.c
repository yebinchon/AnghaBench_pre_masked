
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_dev {int dummy; } ;
struct fnic {TYPE_1__* lport; } ;
struct TYPE_4__ {int type; } ;
struct fcpio_fw_req {TYPE_2__ hdr; } ;
struct TYPE_3__ {int host; } ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct fnic*,unsigned int,struct fcpio_fw_req*) ;
 int FUNC_2 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_3 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_4 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_5 (struct fnic*,struct fcpio_fw_req*) ;
 struct fnic* FUNC_6 (struct vnic_dev*) ;

__attribute__((used)) static int FUNC_7(struct vnic_dev *VAR_1,
       unsigned int VAR_2,
       struct fcpio_fw_req *VAR_3)
{
 struct fnic *VAR_4 = FUNC_6(VAR_1);

 switch (VAR_3->hdr.type) {
 case 133:
  FUNC_1(VAR_4, VAR_2, VAR_3);
  break;

 case 130:
  FUNC_4(VAR_4, VAR_3);
  break;

 case 129:
  FUNC_5(VAR_4, VAR_3);
  break;

 case 131:
 case 132:
  FUNC_2(VAR_4, VAR_3);
  break;

 case 128:
  FUNC_3(VAR_4, VAR_3);
  break;

 default:
  FUNC_0(VAR_0, VAR_4->lport->host,
         "firmware completion type %d\n",
         VAR_3->hdr.type);
  break;
 }

 return 0;
}
