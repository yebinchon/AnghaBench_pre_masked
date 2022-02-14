
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int valid; scalar_t__ max_points; scalar_t__ num_points; int * tags; int * points; int memory; } ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Memory ;


 int VAR_0 ;

__attribute__((used)) static void
  FUNC_0( FT_StrokeBorder VAR_1,
                         FT_Memory VAR_2 )
  {
    VAR_1->memory = VAR_2;
    VAR_1->points = ((void*)0);
    VAR_1->tags = ((void*)0);

    VAR_1->num_points = 0;
    VAR_1->max_points = 0;
    VAR_1->start = -1;
    VAR_1->valid = VAR_0;
  }
