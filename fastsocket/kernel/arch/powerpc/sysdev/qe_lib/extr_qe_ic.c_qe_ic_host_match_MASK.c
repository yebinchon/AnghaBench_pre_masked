
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_host {struct device_node* of_node; } ;
struct device_node {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct irq_host *VAR_0, struct device_node *VAR_1)
{

 return VAR_0->of_node == ((void*)0) || VAR_0->of_node == VAR_1;
}
