
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zero_freq; } ;
struct TYPE_7__ {int range; int low; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ Model2 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(RangeCoder *VAR_2, Model2 *VAR_3)
{
    int VAR_4, VAR_5;

    VAR_5 = VAR_3->zero_freq * (VAR_2->range >> VAR_0);
    VAR_4 = (VAR_2->low >= VAR_5);
    if (VAR_4) {
        VAR_2->low -= VAR_5;
        VAR_2->range -= VAR_5;
    } else {
        VAR_2->range = VAR_5;
    }

    if (VAR_2->range < VAR_1)
        FUNC_1(VAR_2);

    FUNC_0(VAR_3, VAR_4);

    return VAR_4;
}
