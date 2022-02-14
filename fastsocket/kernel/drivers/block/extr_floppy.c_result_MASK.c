
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; } ;


 int FUNC_0 (char*,int ,int,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_13;
 int VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if ((VAR_14 = FUNC_3()) < 0)
   break;
  VAR_14 &= VAR_4 | VAR_6 | VAR_3 | VAR_5;
  if ((VAR_14 & ~VAR_3) == VAR_6) {




   return VAR_13;
  }
  if (VAR_14 == (VAR_4 | VAR_6 | VAR_3))
   VAR_10[VAR_13] = FUNC_1(VAR_1);
  else
   break;
 }
 if (!VAR_8) {
  FUNC_0
      ("get result error. Fdc=%d Last status=%x Read bytes=%d\n",
       VAR_7, VAR_14, VAR_13);
  FUNC_2();
 }
 VAR_0->reset = 1;
 return -1;
}
