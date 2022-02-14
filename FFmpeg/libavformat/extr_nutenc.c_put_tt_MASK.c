
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int * time_base; int time_base_count; } ;
typedef TYPE_1__ NUTContext ;
typedef int AVRational ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(NUTContext *VAR_0, AVRational *VAR_1, AVIOContext *VAR_2, uint64_t VAR_3)
{
    VAR_3 *= VAR_0->time_base_count;
    VAR_3 += VAR_1 - VAR_0->time_base;
    FUNC_0(VAR_2, VAR_3);
}
