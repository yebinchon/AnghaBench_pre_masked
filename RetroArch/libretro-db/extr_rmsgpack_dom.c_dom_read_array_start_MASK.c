
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {unsigned int len; struct rmsgpack_dom_value* items; } ;
struct TYPE_4__ {TYPE_1__ array; } ;
struct rmsgpack_dom_value {TYPE_2__ val; int type; } ;
struct dom_reader_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 struct rmsgpack_dom_value* FUNC_1 (struct dom_reader_state*) ;
 scalar_t__ FUNC_2 (struct dom_reader_state*,struct rmsgpack_dom_value*) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_2, void *VAR_3)
{
 unsigned VAR_4;
 struct dom_reader_state *VAR_5 = (struct dom_reader_state *)VAR_3;
 struct rmsgpack_dom_value *VAR_6 = FUNC_1(VAR_5);
 struct rmsgpack_dom_value *VAR_7 = ((void*)0);

 VAR_6->type = VAR_1;
 VAR_6->val.array.len = VAR_2;
 VAR_6->val.array.items = ((void*)0);

 VAR_7 = (struct rmsgpack_dom_value *)FUNC_0(VAR_2, sizeof(*VAR_7));

 if (!VAR_7)
  return -VAR_0;

 VAR_6->val.array.items = VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   {
      if (FUNC_2(VAR_5, &VAR_7[VAR_4]) < 0)
         return -VAR_0;
   }

 return 0;
}
