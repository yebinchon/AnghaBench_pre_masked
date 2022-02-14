
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shift; int gb; } ;
typedef TYPE_1__ WNV1Context ;
struct TYPE_5__ {int table; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int* VAR_2 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(WNV1Context *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_1(&VAR_3->gb, VAR_1.table, VAR_0, 1);

    if (VAR_5 == 15)
        return VAR_2[FUNC_0(&VAR_3->gb, 8 - VAR_3->shift)];
    else
        return VAR_4 + ((VAR_5 - 7U) << VAR_3->shift);
}
