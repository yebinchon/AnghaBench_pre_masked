
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CMDPMOD; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int Vdp1 ;


 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int,int,int *) ;

int FUNC_2(int VAR_0, int VAR_1, Vdp1* VAR_2, vdp1cmd_struct * VAR_3)
{
   if (VAR_3->CMDPMOD & 0x0400)
   {
      int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

      if (((VAR_3->CMDPMOD >> 9) & 0x3) == 0x3)
         VAR_4 = !VAR_4;

      return VAR_4 || FUNC_0(VAR_0, VAR_1, VAR_2);
   }
   else
   {
      return FUNC_0(VAR_0, VAR_1, VAR_2);
   }
}
