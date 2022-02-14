
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int irq; } ;
struct resource {int end; int start; int * parent; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sm501_devdata *VAR_1,
        struct resource *VAR_2)
{
 VAR_2->flags = VAR_0;
 VAR_2->parent = ((void*)0);
 VAR_2->start = VAR_2->end = VAR_1->irq;
}
