
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int start_ts; } ;
typedef TYPE_1__ Interval ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const Interval *VAR_2 = VAR_0;
    const Interval *VAR_3 = VAR_1;
    return 2 * FUNC_0(VAR_2->start_ts, VAR_3->start_ts) + FUNC_0(VAR_2->index, VAR_3->index);
}
