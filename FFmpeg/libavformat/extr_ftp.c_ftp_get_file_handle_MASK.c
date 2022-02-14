
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ conn_data; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1)
{
    FTPContext *VAR_2 = VAR_1->priv_data;

    FUNC_1(VAR_1, "ftp protocol get_file_handle\n");

    if (VAR_2->conn_data)
        return FUNC_2(VAR_2->conn_data);

    return FUNC_0(VAR_0);
}
