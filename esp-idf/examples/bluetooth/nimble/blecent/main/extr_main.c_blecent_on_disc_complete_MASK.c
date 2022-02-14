
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int conn_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peer const*) ;

__attribute__((used)) static void
FUNC_3(const struct peer *VAR_2, int VAR_3, void *VAR_4)
{

    if (VAR_3 != 0) {

        FUNC_0(VAR_1, "Error: Service discovery failed; status=%d "
                    "conn_handle=%d\n", VAR_3, VAR_2->conn_handle);
        FUNC_1(VAR_2->conn_handle, VAR_0);
        return;
    }





    FUNC_0(VAR_1, "Service discovery complete; status=%d "
                "conn_handle=%d\n", VAR_3, VAR_2->conn_handle);




    FUNC_2(VAR_2);
}
