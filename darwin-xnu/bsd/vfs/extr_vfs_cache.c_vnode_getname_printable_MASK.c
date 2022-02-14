
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int dev_name ;
struct TYPE_4__ {int v_type; int v_rdev; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char,int,int) ;
 int FUNC_5 (char*) ;
 char const* VAR_0 ;
 char* FUNC_6 (char*,int ,int ,int ) ;
 char* FUNC_7 (TYPE_1__*) ;

const char *
FUNC_8(vnode_t VAR_1)
{
 const char *VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 != ((void*)0))
  return VAR_2;

 switch (VAR_1->v_type) {
  case 128:
  case 129:
   {




   char VAR_3[64];
   (void) FUNC_4(VAR_3, sizeof(VAR_3),
     "%c(%u, %u)", 128 == VAR_1->v_type ? 'c':'b',
     FUNC_2(VAR_1->v_rdev), FUNC_3(VAR_1->v_rdev));






   FUNC_0();
   VAR_2 = FUNC_6(VAR_3, FUNC_5(VAR_3), 0, 0);
   FUNC_1();
   return VAR_2;
   }
  default:
   return VAR_0;
 }
}
