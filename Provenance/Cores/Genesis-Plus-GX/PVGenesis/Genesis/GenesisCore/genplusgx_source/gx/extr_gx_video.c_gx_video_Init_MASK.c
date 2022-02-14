
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {void* viTVMode; } ;
struct TYPE_11__ {void* viTVMode; } ;
struct TYPE_10__ {void* viTVMode; } ;
struct TYPE_9__ {int viTVMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;

 void* FUNC_11 (int,int ) ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_12 (int *,int,int,int,int,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 void* FUNC_16 (int,int) ;
 void* VAR_14 ;
 void* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int ** VAR_17 ;

void FUNC_17(void)
{




  FUNC_7();





  VAR_16 = FUNC_6(((void*)0));


  switch (VAR_16->viTVMode >> 2)
  {
    case 128:
      VAR_7.viTVMode = VAR_12;
      VAR_6.viTVMode = VAR_13;
      VAR_8.viTVMode = VAR_13;
      break;

    default:
      VAR_7.viTVMode = FUNC_11(VAR_16->viTVMode >> 2, VAR_11);
      VAR_6.viTVMode = FUNC_11(VAR_16->viTVMode >> 2, VAR_10);
      VAR_8.viTVMode = FUNC_11(VAR_16->viTVMode >> 2, VAR_10);
      break;
  }


  FUNC_4 (VAR_16);


  VAR_17[0] = (u32 *) FUNC_1((u32 *) FUNC_2(&VAR_5));
  VAR_17[1] = (u32 *) FUNC_1((u32 *) FUNC_2(&VAR_5));


  FUNC_12(VAR_17[0], 20, 64, 640, 574, 574 * 2);


  FUNC_3(VAR_16, VAR_17[0], VAR_0);
  FUNC_3(VAR_16, VAR_17[1], VAR_0);


  FUNC_9(VAR_17[0]);


  FUNC_8(VAR_1);


  FUNC_5();


  FUNC_10();
  FUNC_10();


  FUNC_15();
  FUNC_14(1);
  FUNC_13(VAR_16, VAR_2);


  FUNC_0();


  VAR_15 = FUNC_16(32, VAR_4);
  VAR_14 = FUNC_16(32, VAR_3*VAR_9*4);
}
