
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int dummy; } ;
struct dom_reader_state {size_t i; struct rmsgpack_dom_value** stack; } ;



__attribute__((used)) static struct rmsgpack_dom_value *FUNC_0(struct dom_reader_state *VAR_0)
{
 struct rmsgpack_dom_value *VAR_1 = VAR_0->stack[VAR_0->i];
 VAR_0->i--;
 return VAR_1;
}
