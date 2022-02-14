
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int * VAR_2 ;
 int FUNC_2 (int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = VAR_7 >> 3;
 int VAR_9 = 1 << (VAR_7 & 7);

 if ((VAR_5[VAR_6].status & VAR_1) == VAR_0)
  VAR_3[VAR_8] ^= VAR_9;

 VAR_4[VAR_8] &= ~VAR_9;
 FUNC_2(VAR_8);

 FUNC_1(VAR_9, FUNC_0(VAR_2[VAR_8]));
}
