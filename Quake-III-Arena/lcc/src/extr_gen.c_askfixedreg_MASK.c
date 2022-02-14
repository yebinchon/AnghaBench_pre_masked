
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int set; int mask; } ;
struct TYPE_6__ {TYPE_3__* regnode; } ;
struct TYPE_7__ {TYPE_1__ x; } ;
typedef TYPE_2__* Symbol ;
typedef TYPE_3__* Regnode ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static Symbol FUNC_0(Symbol VAR_2) {
 Regnode VAR_3 = VAR_2->x.regnode;
 int VAR_4 = VAR_3->set;

 if (VAR_3->mask&~VAR_0[VAR_4])
  return ((void*)0);
 else {
  VAR_0[VAR_4] &= ~VAR_3->mask;
  VAR_1[VAR_4] |= VAR_3->mask;
  return VAR_2;
 }
}
