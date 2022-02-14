
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char* buff; int len; } ;
struct TYPE_4__ {TYPE_1__ string; } ;
struct rmsgpack_dom_value {TYPE_2__ val; int type; } ;
struct dom_reader_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dom_reader_state*) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, uint32_t VAR_2, void *VAR_3)
{
   struct dom_reader_state *VAR_4 = (struct dom_reader_state *)VAR_3;
   struct rmsgpack_dom_value *VAR_5 =
      (struct rmsgpack_dom_value*)FUNC_0(VAR_4);

   VAR_5->type = VAR_0;
   VAR_5->val.string.len = VAR_2;
   VAR_5->val.string.buff = VAR_1;
   return 0;
}
