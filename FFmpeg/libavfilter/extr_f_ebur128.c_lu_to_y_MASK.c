
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double h; } ;
struct TYPE_5__ {int meter; double scale_range; TYPE_1__ graph; } ;
typedef TYPE_2__ EBUR128Context ;


 double FUNC_0 (double,int ,double) ;

__attribute__((used)) static inline int FUNC_1(const EBUR128Context *VAR_0, double VAR_1)
{
    VAR_1 += 2 * VAR_0->meter;
    VAR_1 = FUNC_0(VAR_1, 0, VAR_0->scale_range);
    VAR_1 = VAR_0->scale_range - VAR_1;
    return VAR_1 * VAR_0->graph.h / VAR_0->scale_range;
}
