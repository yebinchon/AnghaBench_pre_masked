
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBLE_ADDR_TYPE ;
struct TYPE_3__ {int * conn_addr; int conn_addr_type; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;

void FUNC_4 (BD_ADDR VAR_2, BD_ADDR VAR_3, tBLE_ADDR_TYPE *VAR_4)
{
    tACL_CONN *VAR_5 = FUNC_2(VAR_2, VAR_1);

    if (VAR_5 == ((void*)0)) {
        FUNC_1("No connection exist!");
        return;
    }
    FUNC_3(VAR_3, VAR_5->conn_addr, VAR_0);
    * VAR_4 = VAR_5->conn_addr_type;

    FUNC_0 ("BTM_ReadConnectionAddr address type: %d addr: 0x%02x",
                     VAR_5->conn_addr_type, VAR_5->conn_addr[0]);
}
