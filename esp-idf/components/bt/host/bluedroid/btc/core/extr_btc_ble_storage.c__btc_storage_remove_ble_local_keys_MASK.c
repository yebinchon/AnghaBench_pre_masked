
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bt_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bt_status_t FUNC_3(void)
{
    int VAR_7 = 1;

    if (FUNC_1(VAR_4, VAR_3)) {
        VAR_7 &= FUNC_2(VAR_4, VAR_3);
    }
    if (FUNC_1(VAR_4, VAR_2)) {
        VAR_7 &= FUNC_2(VAR_4, VAR_2);
    }
    if (FUNC_1(VAR_4, VAR_0)) {
        VAR_7 &= FUNC_2(VAR_4, VAR_0);
    }
    if (FUNC_1(VAR_4, VAR_1)) {
        VAR_7 &= FUNC_2(VAR_4, VAR_1);
    }
    FUNC_0();

    return VAR_7 ? VAR_6 : VAR_5;
}
