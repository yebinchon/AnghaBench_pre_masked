
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ s8 ;
typedef int s32 ;
struct TYPE_2__ {int w; int memmsk; int status; int branch; scalar_t__ pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (double) ;
 int FUNC_2 (char) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
  s32 VAR_5;
  int VAR_6 = (VAR_4.w>>8) & 0xF;
  FUNC_1(('B'<<16) + VAR_3[VAR_6]);

  if(VAR_4.w&255)
    {
      FUNC_1('.S');
      VAR_5 = (s32)(s8)VAR_4.w;
      VAR_5 += (s32)VAR_4.pc;
    }

  else VAR_5 = FUNC_3();
  FUNC_2(' ');

  FUNC_0(VAR_5&VAR_4.memmsk);

  VAR_4.status = VAR_2 | VAR_0 | (-(VAR_6!=0) & VAR_1 );
  VAR_4.branch = VAR_5;
}
