
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mtd_ext_size; scalar_t__ key_present; } ;
typedef TYPE_1__ DBEContext ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(DBEContext *VAR_0)
{
    if (VAR_0->mtd_ext_size)
        return FUNC_0(VAR_0, VAR_0->key_present + VAR_0->mtd_ext_size + 1);
    return 0;
}
