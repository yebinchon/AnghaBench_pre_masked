
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ range; } ;
typedef TYPE_1__ ProbRange ;
typedef int BigInt ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(BigInt *VAR_0, const ProbRange *VAR_1)
{
    uint8_t VAR_2;
    int VAR_3;


    FUNC_1(VAR_0, 0, &VAR_2);

    VAR_3 = 0;
    while (VAR_2 < VAR_1->offset || VAR_2 >= VAR_1->range + VAR_1->offset) {
        VAR_1++;
        VAR_3++;
    }
    FUNC_2(VAR_0, VAR_1->range);
    FUNC_0(VAR_0, VAR_2 - VAR_1->offset);
    return VAR_3;
}
