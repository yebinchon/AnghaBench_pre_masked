
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* program; char const* file; int test; scalar_t__ warning_count; scalar_t__ error_count; int * end_ptr; int info_ptr; int * png_ptr; } ;
typedef TYPE_1__ display ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(display *VAR_1, const char *VAR_2)
{
   FUNC_0(VAR_1, 0, sizeof *VAR_1);
   VAR_1->png_ptr = ((void*)0);
   VAR_1->info_ptr = *(VAR_1->end_ptr = ((void*)0));
   VAR_1->error_count = VAR_1->warning_count = 0;
   VAR_1->program = VAR_2;
   VAR_1->file = VAR_2;
   VAR_1->test = VAR_0;
}
