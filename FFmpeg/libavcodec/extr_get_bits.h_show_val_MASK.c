
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int cache; } ;
typedef TYPE_1__ GetBitContext ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned FUNC_1(const GetBitContext *VAR_0, unsigned VAR_1)
{



    return VAR_0->cache >> (64 - VAR_1);

}
