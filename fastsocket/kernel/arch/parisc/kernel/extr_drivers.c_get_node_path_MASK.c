
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hardware_path {int* bc; int mod; } ;
struct device {struct device* parent; int * bus; } ;
struct TYPE_4__ {int hw_path; } ;
struct TYPE_3__ {unsigned int devfn; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int**,int,int) ;
 int VAR_0 ;
 struct device VAR_1 ;
 TYPE_2__* FUNC_4 (struct device*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2, struct hardware_path *VAR_3)
{
 int VAR_4 = 5;
 FUNC_3(&VAR_3->bc, -1, 6);

 if (FUNC_2(VAR_2)) {
  unsigned int VAR_5 = FUNC_5(VAR_2)->devfn;
  VAR_3->mod = FUNC_0(VAR_5);
  VAR_3->bc[VAR_4--] = FUNC_1(VAR_5);
  VAR_2 = VAR_2->parent;
 }

 while (VAR_2 != &VAR_1) {
  if (FUNC_2(VAR_2)) {
   unsigned int VAR_6 = FUNC_5(VAR_2)->devfn;
   VAR_3->bc[VAR_4--] = FUNC_1(VAR_6) | (FUNC_0(VAR_6)<< 5);
  } else if (VAR_2->bus == &VAR_0) {
   VAR_3->bc[VAR_4--] = FUNC_4(VAR_2)->hw_path;
  }
  VAR_2 = VAR_2->parent;
 }
}
