
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 != 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == -VAR_0) {



  FUNC_0(VAR_2, VAR_1, VAR_2->net_dev,
     "bashing QT2025C microcontroller\n");
  FUNC_1(VAR_2);
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
  VAR_3 = FUNC_2(VAR_2);
 }

 return VAR_3;
}
