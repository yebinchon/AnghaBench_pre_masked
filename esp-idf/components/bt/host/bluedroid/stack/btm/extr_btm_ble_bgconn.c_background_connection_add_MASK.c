
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bt_bdaddr_t ;
struct TYPE_5__ {int address; } ;
typedef TYPE_1__ background_connection_t ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static BOOLEAN FUNC_5(bt_bdaddr_t *VAR_3)
{
    FUNC_0(VAR_3);
    FUNC_1();
    background_connection_t *VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (!VAR_4) {
        VAR_4 = FUNC_4(sizeof(background_connection_t));
        VAR_4->address = *VAR_3;
        FUNC_3(VAR_2, &(VAR_4->address), VAR_4);
        return VAR_1;
    }
    return VAR_0;
}
