
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_group {int dummy; } ;
struct cfq_data {struct cfq_group root_group; } ;



__attribute__((used)) static struct cfq_group *FUNC_0(struct cfq_data *VAR_0)
{
 return &VAR_0->root_group;
}
