
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct gameport_driver {int dummy; } ;
struct gameport {int dummy; } ;
struct adi_port {TYPE_1__* adi; struct gameport* gameport; } ;
struct TYPE_5__ {scalar_t__ ret; scalar_t__ length; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,struct adi_port*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct gameport*) ;
 int FUNC_4 (TYPE_1__*,struct adi_port*,int) ;
 int FUNC_5 (struct adi_port*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct adi_port*) ;
 int FUNC_7 (struct adi_port*) ;
 int FUNC_8 (struct gameport*) ;
 int FUNC_9 (struct gameport*,struct gameport_driver*,int ) ;
 int FUNC_10 (struct gameport*,struct adi_port*) ;
 int FUNC_11 (struct gameport*,int ) ;
 int FUNC_12 (struct gameport*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct adi_port*) ;
 struct adi_port* FUNC_17 (int,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct gameport *VAR_8, struct gameport_driver *VAR_9)
{
 struct adi_port *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_17(sizeof(struct adi_port), VAR_6);
 if (!VAR_10)
  return -VAR_4;

 VAR_10->gameport = VAR_8;

 FUNC_10(VAR_8, VAR_10);

 VAR_12 = FUNC_9(VAR_8, VAR_9, VAR_5);
 if (VAR_12)
  goto fail1;

 FUNC_3(VAR_8);
 FUNC_7(VAR_10);

 if (VAR_10->adi[0].ret >= VAR_2)
  FUNC_5(VAR_10, FUNC_0(VAR_10->adi, 10));

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  FUNC_1(VAR_10->adi + VAR_11, VAR_10);

  if (!VAR_10->adi[VAR_11].length)
   continue;

  VAR_12 = FUNC_4(VAR_10->adi + VAR_11, VAR_10, VAR_11);
  if (VAR_12)
   goto fail2;
 }

 if (!VAR_10->adi[0].length && !VAR_10->adi[1].length) {
  VAR_12 = -VAR_3;
  goto fail2;
 }

 FUNC_11(VAR_8, VAR_7);
 FUNC_12(VAR_8, 20);

 FUNC_18(VAR_1);
 if (FUNC_6(VAR_10)) {
  FUNC_18(VAR_0);
  FUNC_6(VAR_10);
 }

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
  if (VAR_10->adi[VAR_11].length > 0) {
   FUNC_2(VAR_10->adi + VAR_11);
   VAR_12 = FUNC_14(VAR_10->adi[VAR_11].dev);
   if (VAR_12)
    goto fail3;
  }

 return 0;

 fail3: while (--VAR_11 >= 0) {
  if (VAR_10->adi[VAR_11].length > 0) {
   FUNC_15(VAR_10->adi[VAR_11].dev);
   VAR_10->adi[VAR_11].dev = ((void*)0);
  }
 }
 fail2: for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
  if (VAR_10->adi[VAR_11].dev)
   FUNC_13(VAR_10->adi[VAR_11].dev);
 FUNC_8(VAR_8);
 fail1: FUNC_10(VAR_8, ((void*)0));
 FUNC_16(VAR_10);
 return VAR_12;
}
