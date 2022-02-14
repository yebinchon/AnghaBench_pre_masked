
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 != VAR_1) {

  VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_2);
  if ((VAR_8 & VAR_3) != VAR_4) {
   FUNC_1(VAR_6, VAR_5, VAR_6->net_dev,
      "PHY MMD %d not responding.\n", VAR_7);
   return -VAR_0;
  }
 }

 return 0;
}
