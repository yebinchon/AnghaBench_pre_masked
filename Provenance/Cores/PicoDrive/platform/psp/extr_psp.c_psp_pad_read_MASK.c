
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int Buttons; int Lx; int Ly; } ;
typedef TYPE_1__ SceCtrlData ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

unsigned int FUNC_2(int VAR_5)
{
 unsigned int VAR_6;
 SceCtrlData VAR_7;
 if (VAR_5)
      FUNC_1(&VAR_7, 1);
 else FUNC_0(&VAR_7, 1);
 VAR_6 = VAR_7.Buttons;


 VAR_6 &= ~(VAR_4|VAR_1|VAR_2|VAR_3);
 if (VAR_7.Lx < 128 - VAR_0) VAR_6 |= VAR_2;
 if (VAR_7.Lx > 128 + VAR_0) VAR_6 |= VAR_3;
 if (VAR_7.Ly < 128 - VAR_0) VAR_6 |= VAR_4;
 if (VAR_7.Ly > 128 + VAR_0) VAR_6 |= VAR_1;

 return VAR_6;
}
