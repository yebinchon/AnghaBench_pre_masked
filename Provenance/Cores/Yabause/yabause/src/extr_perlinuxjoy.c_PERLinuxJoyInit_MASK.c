
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int perlinuxjoy_struct ;
struct TYPE_4__ {int gl_pathc; int * gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(void)
{
   int VAR_2;
   int VAR_3;
   glob_t VAR_4;

   FUNC_1("/dev/input/js*", 0, ((void*)0), &VAR_4);

   VAR_0 = VAR_4.gl_pathc;
   VAR_1 = FUNC_3(sizeof(perlinuxjoy_struct) * VAR_0);

   for(VAR_2 = 0;VAR_2 < VAR_4.gl_pathc;VAR_2++)
      FUNC_0(VAR_1 + VAR_2, VAR_4.gl_pathv[VAR_2]);

   FUNC_2(&VAR_4);

   return 0;
}
