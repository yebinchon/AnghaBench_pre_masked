
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* regnode; TYPE_3__** wildcard; } ;
struct TYPE_10__ {TYPE_2__ x; } ;
struct TYPE_8__ {unsigned int mask; size_t set; } ;
typedef TYPE_3__* Symbol ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static Symbol FUNC_1(Symbol VAR_0, unsigned VAR_1[]) {
 int VAR_2;

 if (VAR_0->x.wildcard == ((void*)0))
  return FUNC_0(VAR_0);
 for (VAR_2 = 31; VAR_2 >= 0; VAR_2--) {
  Symbol VAR_3 = VAR_0->x.wildcard[VAR_2];
  if (VAR_3 != ((void*)0)
  && !(VAR_3->x.regnode->mask&~VAR_1[VAR_3->x.regnode->set])
  && FUNC_0(VAR_3))
   return VAR_3;
 }
 return ((void*)0);
}
