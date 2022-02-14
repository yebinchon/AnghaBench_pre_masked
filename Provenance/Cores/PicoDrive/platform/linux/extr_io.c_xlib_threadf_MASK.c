
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sem_t ;
typedef int XTextProperty ;
struct TYPE_10__ {int keycode; } ;
struct TYPE_9__ {unsigned int width; unsigned int height; } ;
struct TYPE_11__ {int type; TYPE_2__ xkey; TYPE_1__ xconfigure; } ;
typedef TYPE_3__ XEvent ;
typedef int Window ;
struct TYPE_12__ {scalar_t__ class; } ;
typedef TYPE_4__ Visual ;
typedef int Display ;


 int FUNC_0 (int *,int) ;


 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *,int) ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,unsigned int,unsigned int,int,int,int,int ,int ) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,TYPE_3__*) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int *,int ,int *) ;
 int FUNC_21 (char**,int,int *) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*,char*,int,char*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_26 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_27 (int *,TYPE_4__*) ;
 int * VAR_10 ;
 int FUNC_28 () ;
 int VAR_11 ;

__attribute__((used)) static void *FUNC_29(void *VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 sem_t *VAR_17 = VAR_12;
 XTextProperty VAR_18;
 Window VAR_19;
 XEvent VAR_20;
 Display *VAR_21;
 Visual *VAR_22;
 int VAR_23;

 FUNC_15();

 VAR_10 = VAR_21 = FUNC_18(((void*)0));
 if (VAR_21 == ((void*)0))
 {
  FUNC_22(VAR_8, "cannot connect to X server %s\n",
    FUNC_14(((void*)0)));
  FUNC_26(VAR_17);
  return ((void*)0);
 }

 VAR_22 = FUNC_2(VAR_21, 0);
 if (VAR_22->class != VAR_4)
 {
  FUNC_22(VAR_8, "cannot handle non true color visual\n");
  FUNC_12(VAR_21);
  FUNC_26(VAR_17);
  return ((void*)0);
 }

 FUNC_25("X vendor: %s, rel: %d, display: %s, protocol ver: %d.%d\n", FUNC_9(VAR_21),
  FUNC_10(VAR_21), FUNC_4(VAR_21), FUNC_7(VAR_21),
  FUNC_6(VAR_21));

 VAR_23 = FUNC_1(VAR_21);

 FUNC_27(VAR_21, VAR_22);
 FUNC_26(VAR_17);

 VAR_15 = FUNC_5(VAR_21, VAR_23);
 VAR_16 = FUNC_3(VAR_21, VAR_23);

 VAR_11 = VAR_19 = FUNC_13(VAR_21,
   FUNC_8(VAR_21, VAR_23),
   VAR_15 / 2 - VAR_7 / 2,
   VAR_16 / 2 - VAR_6 / 2,
   VAR_7 + 2, VAR_6 + 2, 1,
   FUNC_0(VAR_21, VAR_23),
   FUNC_0(VAR_21, VAR_23));

 FUNC_21((char **)&VAR_9, 1, &VAR_18);
 FUNC_20(VAR_21, VAR_19, &VAR_18);

 FUNC_19(VAR_21, VAR_19, VAR_0 |
   VAR_1 | VAR_2 |
   VAR_3);

 FUNC_16(VAR_21, VAR_19);

 while (1)
 {
  FUNC_17(VAR_21, &VAR_20);
  switch (VAR_20.type)
  {
   case 130:
    while (FUNC_11(VAR_21, 130, &VAR_20))
     ;
    FUNC_28();
    break;

   case 131:
    VAR_13 = VAR_20.xconfigure.width;
    VAR_14 = VAR_20.xconfigure.height;
    if (VAR_7 != VAR_13 - 2 || VAR_6 != VAR_14 - 2) {
     VAR_7 = VAR_13 - 2;
     VAR_6 = VAR_14 - 2;
     VAR_5 = 1;
    }
    break;

   case 132:
    break;

   case 129:
    FUNC_23(VAR_20.xkey.keycode);
    break;

   case 128:
    FUNC_24(VAR_20.xkey.keycode);
    break;

   default:
    break;
  }
 }
}
