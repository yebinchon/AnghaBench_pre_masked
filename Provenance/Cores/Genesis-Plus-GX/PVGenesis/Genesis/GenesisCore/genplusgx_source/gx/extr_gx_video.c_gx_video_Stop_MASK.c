
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int screen_w; } ;
struct TYPE_5__ {int viWidth; int viXOrigin; } ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 TYPE_3__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int * VAR_7 ;
 int * VAR_8 ;
 TYPE_1__* VAR_9 ;

void FUNC_12(void)
{

  FUNC_4 ();


  if (VAR_8) FUNC_5(VAR_8);
  if (VAR_7) FUNC_5(VAR_7);
  VAR_8 = ((void*)0);
  VAR_7 = ((void*)0);


  FUNC_11(&VAR_6[0]);
  FUNC_11(&VAR_6[1]);


  FUNC_11(&VAR_4[0][0]);
  FUNC_11(&VAR_4[0][1]);
  FUNC_11(&VAR_4[1][0]);
  FUNC_11(&VAR_4[1][1]);


  FUNC_9(1);
  FUNC_8(VAR_9, VAR_1);


  FUNC_6((GXColor)VAR_0);
  FUNC_7(0xff);


  FUNC_2(((void*)0));






  VAR_9->viWidth = VAR_5.screen_w;
  VAR_9->viXOrigin = (VAR_3 - VAR_9->viWidth)/2;
  FUNC_0(VAR_9);


  FUNC_10();
}
