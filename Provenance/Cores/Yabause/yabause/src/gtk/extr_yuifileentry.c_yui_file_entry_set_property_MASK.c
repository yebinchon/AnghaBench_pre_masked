
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int guint ;
struct TYPE_2__ {void* key; void* group; void* keyfile; } ;
typedef int GValue ;
typedef int GParamSpec ;
typedef int GObject ;





 TYPE_1__* FUNC_0 (int *) ;
 void* FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(GObject * VAR_0, guint VAR_1,
  const GValue * VAR_2, GParamSpec * VAR_3) {
 switch(VAR_1) {
  case 128:
   FUNC_0(VAR_0)->keyfile = FUNC_1(VAR_2);
   break;
  case 130:
   FUNC_0(VAR_0)->group = FUNC_1(VAR_2);
   break;
  case 129:
   FUNC_0(VAR_0)->key = FUNC_1(VAR_2);
   break;
 }
}
