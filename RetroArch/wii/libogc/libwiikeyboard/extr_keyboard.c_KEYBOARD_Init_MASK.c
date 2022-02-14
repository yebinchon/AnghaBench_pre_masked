
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef int s32 ;
typedef scalar_t__ keyPressCallback ;
struct TYPE_5__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_4__ {scalar_t__ layout; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_1__ VAR_27 ;
 int FUNC_10 (int) ;
 int ** VAR_28 ;
 int FUNC_11 (int,struct stat*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ FUNC_15 (int,char*,scalar_t__) ;
 int FUNC_16 (int ,int *,int ,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_17 (TYPE_1__*,int *,int *) ;

s32 FUNC_18(keyPressCallback VAR_31)
{
 int VAR_32;
 struct stat VAR_33;
 char VAR_34[64];
 size_t VAR_35;

 if (FUNC_7() != VAR_0)
  return -1;

 if (FUNC_6() != VAR_0) {
  return -2;
 }

 if (VAR_27.layout == VAR_9) {
  VAR_34[0] = 0;
  VAR_32 = FUNC_14("/wiikbd.map", VAR_11);

  if ((VAR_32 > 0) && !FUNC_11(VAR_32, &VAR_33)) {
   if ((VAR_33.st_size > 0) && (VAR_33.st_size < 64) &&
    (VAR_33.st_size == FUNC_15(VAR_32, VAR_34, VAR_33.st_size))) {
    VAR_34[63] = 0;
    for (VAR_35 = 0; VAR_35 < 64; ++VAR_35) {
     if ((VAR_34[VAR_35] != '-') && (FUNC_12((int)VAR_34[VAR_35]) == 0)) {
      VAR_34[VAR_35] = 0;
      break;
     }
    }
   }

   FUNC_10(VAR_32);
  }

  VAR_27.layout = FUNC_9(VAR_34);
 }

 if (VAR_27.layout == VAR_9) {
  switch (FUNC_0()) {
  case 134:
   VAR_27.layout = VAR_3;
   break;

  case 132:
   VAR_27.layout = VAR_7;
   break;

  case 135:
   VAR_27.layout = VAR_5;
   break;

  case 129:
   VAR_27.layout = VAR_4;
   break;

  case 133:
   VAR_27.layout = VAR_6;
   break;

  case 136:
   VAR_27.layout = VAR_8;
   break;

  case 130:
  case 128:
  case 131:
  default:
   VAR_27.layout = VAR_10;
   break;
  }
 }

 if (FUNC_17(&VAR_27, &VAR_25, &VAR_26) < 0) {
  VAR_27.layout = VAR_9;

  return -4;
 }

 FUNC_8(&VAR_23);

 if (!VAR_21) {

  VAR_20 = 0;

  FUNC_13(VAR_17, 0, VAR_2);

  s32 VAR_36 = FUNC_2(&VAR_18, VAR_19, ((void*)0),
         VAR_17, VAR_2,
         VAR_1);

  if (VAR_36) {
   FUNC_4();

   return -6;
  }

  if(VAR_31)
  {
   VAR_22.head = 0;
   VAR_22.tail = 0;

   VAR_36 = FUNC_2(&VAR_15, VAR_16, ((void*)0),
         VAR_14, VAR_2,
         VAR_1);
   if(VAR_36) {
    VAR_20 = 1;

    FUNC_3(VAR_18, ((void*)0));

    FUNC_4();
    FUNC_1();
    FUNC_5();
    VAR_21 = 0;
    return -6;
   }

   VAR_28[VAR_12] = &VAR_29;
   FUNC_16(VAR_30, ((void*)0) , VAR_13, 0);
   VAR_24 = VAR_31;
  }
  VAR_21 = 1;
 }
 return 0;
}
