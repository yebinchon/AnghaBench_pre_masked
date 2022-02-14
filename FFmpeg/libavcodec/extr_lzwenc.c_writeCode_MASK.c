
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int pb; int (* put_bits ) (int *,int,int) ;} ;
typedef TYPE_1__ LZWEncodeState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(LZWEncodeState * VAR_0, int VAR_1)
{
    FUNC_0(0 <= VAR_1 && VAR_1 < 1 << VAR_0->bits);
    VAR_0->put_bits(&VAR_0->pb, VAR_0->bits, VAR_1);
}
