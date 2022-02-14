
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_flow_context_t {unsigned long flow_id; } ;
struct sep_device {struct sep_flow_context_t* flows; } ;


 int VAR_0 ;

__attribute__((used)) static struct sep_flow_context_t *FUNC_0(struct sep_device *VAR_1,
    unsigned long VAR_2)
{
 int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->flows[VAR_3].flow_id == VAR_2)
   return &VAR_1->flows[VAR_3];
 }
 return ((void*)0);
}
