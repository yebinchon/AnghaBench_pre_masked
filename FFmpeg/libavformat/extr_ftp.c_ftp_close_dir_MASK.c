
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int conn_data; int conn_control; int dir_buffer; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0)
{
    FTPContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(&VAR_1->dir_buffer);
    FUNC_1(&VAR_1->conn_control);
    FUNC_1(&VAR_1->conn_data);
    return 0;
}
