
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int dummy; } ;
struct dom_reader_state {struct rmsgpack_dom_value** stack; scalar_t__ i; } ;
typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (struct rmsgpack_dom_value*) ;
 int FUNC_1 (int *,int *,struct dom_reader_state*) ;

int FUNC_2(RFILE *VAR_1, struct rmsgpack_dom_value *VAR_2)
{
   struct dom_reader_state VAR_3;
   int VAR_4 = 0;

   VAR_3.i = 0;
   VAR_3.stack[0] = VAR_2;

   VAR_4 = FUNC_1(VAR_1, &VAR_0, &VAR_3);

   if (VAR_4 < 0)
      FUNC_0(VAR_2);

   return VAR_4;
}
