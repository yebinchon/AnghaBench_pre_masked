
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long flags; scalar_t__ start; int end; struct resource* parent; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static void FUNC_0(struct resource *VAR_4, unsigned int VAR_5)
{
 struct resource *VAR_6;
 const unsigned long VAR_7 = VAR_1 | VAR_3
       | VAR_2 | VAR_0;

 for (VAR_6 = VAR_4; VAR_6 < VAR_4 + VAR_5; VAR_6++) {
  const struct resource * const VAR_8 = VAR_6->parent;
  if (VAR_8) {
   VAR_6->start += VAR_8->start;
   VAR_6->end += VAR_8->start;
   VAR_6->flags = VAR_8->flags & VAR_7;
  }
 }
}
