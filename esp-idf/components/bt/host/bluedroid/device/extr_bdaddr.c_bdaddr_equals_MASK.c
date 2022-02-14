
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bt_bdaddr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,int const*,int) ;

bool FUNC_2(const bt_bdaddr_t *VAR_0, const bt_bdaddr_t *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    return FUNC_1(VAR_0, VAR_1, sizeof(bt_bdaddr_t)) == 0;
}
