
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ offset; int range; } ;
typedef TYPE_1__ ProbRange ;
typedef int BigInt ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(BigInt *VAR_0, const ProbRange *VAR_1)
{
    uint8_t VAR_2;

    FUNC_1(VAR_0, VAR_1->range, &VAR_2);
    FUNC_2(VAR_0, 0);
    FUNC_0(VAR_0, VAR_2 + VAR_1->offset);
}
