
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int payload_count; int * payload; } ;
typedef TYPE_1__ H265RawSEI ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
    H265RawSEI *VAR_2 = (H265RawSEI*)VAR_1;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->payload_count; VAR_3++)
        FUNC_1(&VAR_2->payload[VAR_3]);
    FUNC_0(&VAR_1);
}
