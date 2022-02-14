
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int status; TYPE_1__* ccw_device; int erp_counter; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct zfcp_adapter*,int ) ;
 int FUNC_5 (struct zfcp_adapter*,char*,int *) ;
 int FUNC_6 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_7(struct zfcp_adapter *VAR_3,
        int VAR_4)
{
 switch (VAR_4) {
 case 128 :
  FUNC_2(&VAR_3->erp_counter, 0);
  FUNC_6(VAR_3);
  break;

 case 129 :
  FUNC_0(&VAR_3->erp_counter);
  if (FUNC_1(&VAR_3->erp_counter) > VAR_1) {
   FUNC_3(&VAR_3->ccw_device->dev,
    "ERP cannot recover an error "
    "on the FCP device\n");
   FUNC_5(VAR_3, "erasck1", ((void*)0));
  }
  break;
 }

 if (FUNC_1(&VAR_3->status) & VAR_2) {
  FUNC_4(VAR_3, 0);
  VAR_4 = VAR_0;
 }
 return VAR_4;
}
