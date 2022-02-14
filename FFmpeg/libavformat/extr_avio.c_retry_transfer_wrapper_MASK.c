
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int flags; scalar_t__ rw_timeout; int interrupt_callback; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(URLContext *VAR_6, uint8_t *VAR_7,
                                         int VAR_8, int VAR_9,
                                         int (*VAR_10)(URLContext *VAR_11,
                                                              uint8_t *VAR_12,
                                                              int VAR_13))
{
    int VAR_14, VAR_15;
    int VAR_16 = 5;
    int64_t VAR_17 = 0;

    VAR_15 = 0;
    while (VAR_15 < VAR_9) {
        if (FUNC_4(&VAR_6->interrupt_callback))
            return VAR_1;
        VAR_14 = VAR_10(VAR_6, VAR_7 + VAR_15, VAR_8 - VAR_15);
        if (VAR_14 == FUNC_0(VAR_4))
            continue;
        if (VAR_6->flags & VAR_2)
            return VAR_14;
        if (VAR_14 == FUNC_0(VAR_3)) {
            VAR_14 = 0;
            if (VAR_16) {
                VAR_16--;
            } else {
                if (VAR_6->rw_timeout) {
                    if (!VAR_17)
                        VAR_17 = FUNC_2();
                    else if (FUNC_2() > VAR_17 + VAR_6->rw_timeout)
                        return FUNC_0(VAR_5);
                }
                FUNC_3(1000);
            }
        } else if (VAR_14 == VAR_0)
            return (VAR_15 > 0) ? VAR_15 : VAR_0;
        else if (VAR_14 < 0)
            return VAR_14;
        if (VAR_14) {
            VAR_16 = FUNC_1(VAR_16, 2);
            VAR_17 = 0;
        }
        VAR_15 += VAR_14;
    }
    return VAR_15;
}
