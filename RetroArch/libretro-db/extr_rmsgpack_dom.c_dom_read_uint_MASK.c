
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int uint_; } ;
struct rmsgpack_dom_value {TYPE_1__ val; int type; } ;
struct dom_reader_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dom_reader_state*) ;

__attribute__((used)) static int FUNC_1(uint64_t VAR_1, void *VAR_2)
{
   struct dom_reader_state *VAR_3 = (struct dom_reader_state *)VAR_2;
   struct rmsgpack_dom_value *VAR_4 =
      (struct rmsgpack_dom_value*)FUNC_0(VAR_3);

   VAR_4->type = VAR_0;
   VAR_4->val.uint_ = VAR_1;
   return 0;
}
