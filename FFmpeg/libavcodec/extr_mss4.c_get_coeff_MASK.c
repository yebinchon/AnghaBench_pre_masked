
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_0, VLC *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0, VAR_1->table, VAR_1->bits, 2);

    return FUNC_0(VAR_0, VAR_2);
}
