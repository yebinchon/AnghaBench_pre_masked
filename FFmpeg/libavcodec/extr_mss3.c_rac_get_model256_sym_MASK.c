
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* secondary; unsigned int* freqs; } ;
struct TYPE_7__ {unsigned int range; unsigned int low; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ Model256 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(RangeCoder *VAR_3, Model256 *VAR_4)
{
    int VAR_5;
    int VAR_6, VAR_7;
    int VAR_8;
    unsigned VAR_9, VAR_10, VAR_11;

    VAR_10 = VAR_3->range;
    VAR_3->range >>= VAR_1;

    VAR_11 = VAR_3->low / VAR_3->range;
    VAR_8 = VAR_11 >> VAR_0;
    VAR_5 = VAR_4->secondary[VAR_8];

    VAR_7 = VAR_6 = VAR_4->secondary[VAR_8 + 1] + 1;
    while (VAR_7 > VAR_5 + 1) {
        VAR_8 = (VAR_7 + VAR_5) >> 1;
        if (VAR_4->freqs[VAR_8] <= VAR_11) {
            VAR_7 = VAR_6;
            VAR_5 = VAR_8;
        } else {
            VAR_7 = (VAR_7 + VAR_5) >> 1;
            VAR_6 = VAR_8;
        }
    }
    VAR_9 = VAR_4->freqs[VAR_5] * VAR_3->range;
    if (VAR_5 != 255)
        VAR_10 = VAR_4->freqs[VAR_5 + 1] * VAR_3->range;

    VAR_3->low -= VAR_9;
    VAR_3->range = VAR_10 - VAR_9;
    if (VAR_3->range < VAR_2)
        FUNC_1(VAR_3);

    FUNC_0(VAR_4, VAR_5);

    return VAR_5;
}
