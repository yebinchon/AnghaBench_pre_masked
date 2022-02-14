
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; TYPE_1__* regnode; } ;
struct TYPE_7__ {TYPE_2__ x; } ;
struct TYPE_5__ {size_t set; int mask; } ;
typedef TYPE_3__* Symbol ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(Symbol VAR_1) {
 FUNC_0(VAR_1 && VAR_1->x.regnode);
 VAR_0[VAR_1->x.regnode->set] |= VAR_1->x.regnode->mask;
 FUNC_1(FUNC_2("(freeing %s)\n", VAR_1->x.name, ((void*)0)));
}
