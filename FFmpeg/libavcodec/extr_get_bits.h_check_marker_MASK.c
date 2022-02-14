
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size_in_bits; } ;
typedef TYPE_1__ GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,scalar_t__,int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_3(void *VAR_1, GetBitContext *VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2);
    if (!VAR_4)
        FUNC_0(VAR_1, VAR_0, "Marker bit missing at %d of %d %s\n",
               FUNC_2(VAR_2) - 1, VAR_2->size_in_bits, VAR_3);

    return VAR_4;
}
