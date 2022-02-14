
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_valid; char* path; int * data; scalar_t__ height; scalar_t__ width; scalar_t__ max_height; scalar_t__ max_width; } ;
typedef TYPE_1__ thumbnail_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(thumbnail_t *VAR_0)
{
   if (!VAR_0)
      return;

   VAR_0->max_width = 0;
   VAR_0->max_height = 0;
   VAR_0->width = 0;
   VAR_0->height = 0;
   VAR_0->is_valid = 0;
   VAR_0->path[0] = '\0';

   if (VAR_0->data)
      FUNC_0(VAR_0->data);
   VAR_0->data = ((void*)0);
}
