
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_1__ KXLDSect ;


 int FUNC_0 (TYPE_1__ const*) ;

u_long
FUNC_1(const KXLDSect *VAR_0)
{
    u_long VAR_1 = 0;

    FUNC_0(VAR_0);

    if (VAR_0->data) {
        VAR_1 = (u_long) VAR_0->size;
    }

    return VAR_1;
}
