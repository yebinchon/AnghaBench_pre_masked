
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int font; } ;
typedef TYPE_1__ d3dfonts_t ;
struct TYPE_5__ {int right; int left; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,void*,unsigned int,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_1, const char* VAR_2,
      unsigned VAR_3, float VAR_4)
{
   RECT VAR_5 = {0,0,0,0};
   d3dfonts_t *VAR_6 = (d3dfonts_t*)VAR_1;

   if (!VAR_6 || !VAR_2)
      return 0;

   FUNC_0(VAR_6->font, ((void*)0), (void*)VAR_2,
         VAR_3? VAR_3 : -1, &VAR_5, VAR_0, 0);

   return VAR_5.right - VAR_5.left;
}
