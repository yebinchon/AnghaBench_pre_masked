
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {int status; scalar_t__ wwpn; TYPE_2__* adapter; int erp_counter; } ;
struct TYPE_4__ {TYPE_1__* ccw_device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned long long) ;
 int FUNC_4 (struct zfcp_port*,int ) ;
 int FUNC_5 (struct zfcp_port*,char*,int *) ;
 int FUNC_6 (struct zfcp_port*) ;

__attribute__((used)) static int FUNC_7(struct zfcp_port *VAR_4, int VAR_5)
{
 switch (VAR_5) {
 case 128 :
  FUNC_2(&VAR_4->erp_counter, 0);
  FUNC_6(VAR_4);
  break;

 case 129 :
  if (FUNC_1(&VAR_4->status) & VAR_3) {
   FUNC_4(VAR_4, 0);
   VAR_5 = VAR_0;
  }
  FUNC_0(&VAR_4->erp_counter);
  if (FUNC_1(&VAR_4->erp_counter) > VAR_1) {
   FUNC_3(&VAR_4->adapter->ccw_device->dev,
    "ERP failed for remote port 0x%016Lx\n",
    (unsigned long long)VAR_4->wwpn);
   FUNC_5(VAR_4, "erpsck1", ((void*)0));
  }
  break;
 }

 if (FUNC_1(&VAR_4->status) & VAR_2) {
  FUNC_4(VAR_4, 0);
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
