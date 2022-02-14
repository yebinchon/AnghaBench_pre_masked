
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ type; scalar_t__* pixmap_server_handle; scalar_t__ pixmap; scalar_t__ name; } ;
struct TYPE_5__ {scalar_t__* pixmap_server_handle; scalar_t__ pixmap; int is_dup; TYPE_1__* process; } ;
struct TYPE_4__ {int surfaces; } ;
typedef TYPE_2__ PIXMAP_CHECK_DATA_T ;
typedef int KHRN_POINTER_MAP_T ;
typedef TYPE_3__ EGL_SURFACE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(KHRN_POINTER_MAP_T *VAR_1, uint32_t VAR_2, void *VAR_3, void *VAR_4)
{
   PIXMAP_CHECK_DATA_T *VAR_5 = (PIXMAP_CHECK_DATA_T *)VAR_4;
   EGL_SURFACE_T *VAR_6 = (EGL_SURFACE_T *)VAR_3;

   FUNC_0(VAR_1);
   FUNC_0(VAR_2);

   FUNC_1(VAR_1 == &VAR_5->process->surfaces);
   FUNC_1(VAR_6 != ((void*)0));
   FUNC_1((uintptr_t)VAR_2 == (uintptr_t)VAR_6->name);

   if ((VAR_6->type == VAR_0) && ((VAR_5->pixmap_server_handle[0] || (VAR_5->pixmap_server_handle[1] != (uint32_t)-1)) ?

      ((VAR_6->pixmap_server_handle[0] == VAR_5->pixmap_server_handle[0]) &&
      (VAR_6->pixmap_server_handle[1] == VAR_5->pixmap_server_handle[1])) :

      (!VAR_6->pixmap_server_handle[0] && (VAR_6->pixmap_server_handle[1] == (uint32_t)-1) &&
      (VAR_6->pixmap == VAR_5->pixmap)))) {
      VAR_5->is_dup = 1;
   }
}
