
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int bdstr_t ;
typedef int bdstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static bt_status_t FUNC_2(bt_bdaddr_t *VAR_3, int* VAR_4)
{
    bdstr_t VAR_5;
    FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));
    int VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_4);
    return VAR_6 ? VAR_2 : VAR_1;
}
