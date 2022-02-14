
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int type; } ;
struct dom_reader_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dom_reader_state*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
   struct dom_reader_state *VAR_2 = (struct dom_reader_state *)VAR_1;
   struct rmsgpack_dom_value *VAR_3 =
      (struct rmsgpack_dom_value*)FUNC_0(VAR_2);
   VAR_3->type = VAR_0;
   return 0;
}
