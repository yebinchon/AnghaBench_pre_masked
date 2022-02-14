
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range; int low; } ;
typedef TYPE_1__ RangeCoder ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(RangeCoder *VAR_1, int VAR_2)
{
    int VAR_3;

    VAR_1->range >>= VAR_2;
    VAR_3 = VAR_1->low / VAR_1->range;
    VAR_1->low -= VAR_1->range * VAR_3;

    if (VAR_1->range < VAR_0)
        FUNC_0(VAR_1);

    return VAR_3;
}
