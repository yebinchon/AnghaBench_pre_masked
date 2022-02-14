
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static bool FUNC_0(struct resource *VAR_0, struct resource *VAR_1)
{
 return VAR_0->start <= VAR_1->start && VAR_0->end >= VAR_1->end;
}
