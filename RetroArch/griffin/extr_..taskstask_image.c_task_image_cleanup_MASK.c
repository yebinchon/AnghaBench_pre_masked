
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nbio_image_handle {int * cb; int * handle; int type; } ;
struct TYPE_3__ {int * handle; int * data; int * path; } ;
typedef TYPE_1__ nbio_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(nbio_handle_t *VAR_0)
{
   struct nbio_image_handle *VAR_1 = (struct nbio_image_handle*)VAR_0->data;

   if (VAR_1)
   {
      FUNC_1(VAR_1->handle, VAR_1->type);

      VAR_1->handle = ((void*)0);
      VAR_1->cb = ((void*)0);
   }
   if (!FUNC_3(VAR_0->path))
      FUNC_0(VAR_0->path);
   if (VAR_0->data)
      FUNC_0(VAR_0->data);
   FUNC_2(VAR_0->handle);
   VAR_0->path = ((void*)0);
   VAR_0->data = ((void*)0);
   VAR_0->handle = ((void*)0);
}
