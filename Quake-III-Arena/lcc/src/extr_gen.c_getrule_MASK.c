
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* _rule ) (int ,int) ;} ;
struct TYPE_11__ {TYPE_1__ x; } ;
struct TYPE_9__ {int state; } ;
struct TYPE_10__ {int op; TYPE_2__ x; } ;
typedef TYPE_3__* Node ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,TYPE_3__*,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(Node VAR_3, int VAR_4) {
 int VAR_5;

 FUNC_0(VAR_3);
 VAR_5 = (*VAR_0->x._rule)(VAR_3->x.state, VAR_4);
 if (!VAR_5) {
  FUNC_1(VAR_2, "(%x->op=%s at %w is corrupt.)\n", VAR_3, FUNC_2(VAR_3->op), &VAR_1);
  FUNC_0(0);
 }
 return VAR_5;
}
