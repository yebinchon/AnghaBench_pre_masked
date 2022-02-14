
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float iza; int aa; } ;
typedef TYPE_1__ SuperEqualizerContext ;


 int FUNC_0 (int ) ;
 float FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static float FUNC_3(SuperEqualizerContext *VAR_0, float VAR_1, int VAR_2)
{
    return FUNC_1(VAR_0, FUNC_0(VAR_0->aa) * FUNC_2(1 - 4 * VAR_1 * VAR_1 / ((VAR_2 - 1) * (VAR_2 - 1)))) / VAR_0->iza;
}
