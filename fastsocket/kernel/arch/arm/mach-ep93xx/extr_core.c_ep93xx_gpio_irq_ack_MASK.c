
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
 TYPE_1__* VAR_4 ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_5)
{
 int VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = VAR_6 >> 3;
 int VAR_8 = 1 << (VAR_6 & 7);

 if ((VAR_4[VAR_5].status & VAR_1) == VAR_0) {
  VAR_3[VAR_7] ^= VAR_8;
  FUNC_2(VAR_7);
 }

 FUNC_1(VAR_8, FUNC_0(VAR_2[VAR_7]));
}
