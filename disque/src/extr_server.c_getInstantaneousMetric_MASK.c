
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* inst_metric; } ;
struct TYPE_3__ {scalar_t__* samples; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

long long FUNC_0(int VAR_2) {
    int VAR_3;
    long long VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        VAR_4 += VAR_1.inst_metric[VAR_2].samples[VAR_3];
    return VAR_4 / VAR_0;
}
