
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int is_destroyed; scalar_t__ name; } ;
typedef void KHRN_POINTER_MAP_T ;
typedef TYPE_1__ EGL_CONTEXT_T ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(KHRN_POINTER_MAP_T *VAR_0, uint32_t VAR_1, void *VAR_2, void *VAR_3)
{
   EGL_CONTEXT_T *VAR_4 = (EGL_CONTEXT_T *)VAR_2;

   FUNC_0(VAR_0);
   FUNC_0(VAR_3);
   FUNC_1(VAR_1);

   FUNC_3( VAR_4 != ((void*)0) );
   FUNC_3((uintptr_t)VAR_1 == (uintptr_t)VAR_4->name);

   FUNC_3(!VAR_4->is_destroyed);

   VAR_4->is_destroyed = 1;
   FUNC_2(VAR_4);
}
