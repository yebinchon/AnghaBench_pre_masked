
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int dummy; } ;
struct dom_reader_state {int i; struct rmsgpack_dom_value** stack; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dom_reader_state *VAR_2, struct rmsgpack_dom_value *VAR_3)
{
 if ((VAR_2->i + 1) == VAR_1)
  return -VAR_0;
 VAR_2->i++;
 VAR_2->stack[VAR_2->i] = VAR_3;
 return 0;
}
