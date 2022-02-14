
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int,int) ;

void FUNC_1(struct efx_nic *VAR_1,
         int VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 VAR_3 &= ~VAR_0;
 while (VAR_3) {
  if (VAR_3 & 1)
   FUNC_0(VAR_1, VAR_2, VAR_4);
  VAR_3 = (VAR_3 >> 1);
  VAR_4++;
 }
}
