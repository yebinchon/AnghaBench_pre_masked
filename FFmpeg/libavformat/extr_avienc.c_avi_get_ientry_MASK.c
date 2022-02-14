
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** cluster; } ;
typedef TYPE_1__ AVIIndex ;
typedef int AVIIentry ;


 int VAR_0 ;

__attribute__((used)) static inline AVIIentry *FUNC_0(const AVIIndex *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_2 / VAR_0;
    int VAR_4 = VAR_2 % VAR_0;
    return &VAR_1->cluster[VAR_3][VAR_4];
}
