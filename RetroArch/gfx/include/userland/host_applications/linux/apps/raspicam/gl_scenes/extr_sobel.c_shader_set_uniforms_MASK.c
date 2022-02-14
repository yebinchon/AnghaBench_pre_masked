
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * attribute_locations; int * uniform_locations; int program; } ;
typedef TYPE_1__ RASPITEXUTIL_SHADER_PROGRAM_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,double,double) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(RASPITEXUTIL_SHADER_PROGRAM_T *VAR_0,
      int VAR_1, int VAR_2)
{
   FUNC_0(FUNC_4(VAR_0->program));
   FUNC_0(FUNC_2(VAR_0->uniform_locations[0], 0));


   FUNC_0(FUNC_3(VAR_0->uniform_locations[1],
            1.0 / (float) VAR_1, 1.0 / (float) VAR_2));


   FUNC_0(FUNC_1(VAR_0->attribute_locations[0]));
   return 0;
}
