
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int intrinsic; } ;
struct TYPE_7__ {TYPE_1__ func; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_4__* type; } ;
typedef TYPE_2__ Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;

bool FUNC_2(Sym *VAR_1) {
    if (!VAR_1 || VAR_1->kind != VAR_0) {
        return 0;
    }
    FUNC_0(FUNC_1(VAR_1->type));
    return VAR_1->type->func.intrinsic;
}
