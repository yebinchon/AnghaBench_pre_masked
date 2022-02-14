
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_14)
{
    const uint8_t *VAR_15 = VAR_14->buf;

    if ( (FUNC_0(VAR_15) == VAR_7 &&
         (FUNC_0(VAR_15+8) == VAR_2 ||
          FUNC_0(VAR_15+8) == VAR_1 ||
          FUNC_0(VAR_15+8) == VAR_10 ||
          FUNC_0(VAR_15+8) == VAR_11 ||
          FUNC_0(VAR_15+8) == VAR_3 ||
          FUNC_0(VAR_15+8) == VAR_5 ||
          FUNC_0(VAR_15+8) == VAR_9 ||
          FUNC_0(VAR_15+8) == VAR_12 ||
          FUNC_0(VAR_15+8) == VAR_4 ||
          FUNC_0(VAR_15+8) == VAR_13)) ||
         (FUNC_0(VAR_15) == VAR_8 && FUNC_0(VAR_15+12) == VAR_6))
        return VAR_0;
    return 0;
}
