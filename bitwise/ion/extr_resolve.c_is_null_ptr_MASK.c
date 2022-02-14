
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ull; } ;
struct TYPE_6__ {TYPE_1__ val; int type; scalar_t__ is_const; } ;
typedef TYPE_2__ Operand ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

bool FUNC_3(Operand VAR_1) {
    if (VAR_1.is_const && (FUNC_2(VAR_1.type) || FUNC_1(VAR_1.type))) {
        FUNC_0(&VAR_1, VAR_0);
        return VAR_1.val.ull == 0;
    } else {
        return 0;
    }
}
