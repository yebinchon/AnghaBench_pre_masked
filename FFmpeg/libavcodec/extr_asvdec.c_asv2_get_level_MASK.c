
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_2__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_2, VAR_1.table, VAR_0, 1);

    if (VAR_3 == 31)
        return (int8_t) FUNC_0(VAR_2, 8);
    else
        return VAR_3 - 31;
}
