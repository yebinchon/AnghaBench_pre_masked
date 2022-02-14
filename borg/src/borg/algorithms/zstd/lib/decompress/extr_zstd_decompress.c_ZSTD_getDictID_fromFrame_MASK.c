
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dictID; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ZSTD_frameHeader ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,void const*,size_t) ;
 scalar_t__ FUNC_1 (size_t const) ;

unsigned FUNC_2(const void* VAR_1, size_t VAR_2)
{
    ZSTD_frameHeader VAR_3 = { 0, 0, 0, VAR_0, 0, 0, 0 };
    size_t const VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2);
    if (FUNC_1(VAR_4)) return 0;
    return VAR_3.dictID;
}
