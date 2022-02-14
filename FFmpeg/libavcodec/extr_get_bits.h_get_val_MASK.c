
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {unsigned int cache; unsigned int bits_left; } ;
typedef TYPE_1__ GetBitContext ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline uint64_t FUNC_2(GetBitContext *VAR_0, unsigned VAR_1, int VAR_2)
{
    uint64_t VAR_3;
    FUNC_1(VAR_1>0 && VAR_1<=63);
    if (VAR_2) {
        VAR_3 = VAR_0->cache & ((FUNC_0(1) << VAR_1) - 1);
        VAR_0->cache >>= VAR_1;
    } else {
        VAR_3 = VAR_0->cache >> (64 - VAR_1);
        VAR_0->cache <<= VAR_1;
    }
    VAR_0->bits_left -= VAR_1;
    return VAR_3;
}
