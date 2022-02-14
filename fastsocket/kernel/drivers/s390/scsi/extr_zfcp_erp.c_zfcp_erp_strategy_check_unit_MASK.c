
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_unit {int status; TYPE_3__* port; scalar_t__ fcp_lun; int erp_counter; } ;
struct TYPE_6__ {scalar_t__ wwpn; TYPE_2__* adapter; } ;
struct TYPE_5__ {TYPE_1__* ccw_device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (struct zfcp_unit*,int ) ;
 int FUNC_5 (struct zfcp_unit*,char*,int *) ;
 int FUNC_6 (struct zfcp_unit*) ;

__attribute__((used)) static int FUNC_7(struct zfcp_unit *VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 128 :
  FUNC_2(&VAR_3->erp_counter, 0);
  FUNC_6(VAR_3);
  break;
 case 129 :
  FUNC_0(&VAR_3->erp_counter);
  if (FUNC_1(&VAR_3->erp_counter) > VAR_1) {
   FUNC_3(&VAR_3->port->adapter->ccw_device->dev,
    "ERP failed for unit 0x%016Lx on "
    "port 0x%016Lx\n",
    (unsigned long long)VAR_3->fcp_lun,
    (unsigned long long)VAR_3->port->wwpn);
   FUNC_5(VAR_3, "erusck1", ((void*)0));
  }
  break;
 }

 if (FUNC_1(&VAR_3->status) & VAR_2) {
  FUNC_4(VAR_3, 0);
  VAR_4 = VAR_0;
 }
 return VAR_4;
}
