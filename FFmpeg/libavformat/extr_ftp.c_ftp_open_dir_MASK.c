
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ conn_data; scalar_t__ conn_control; scalar_t__* dir_buffer; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_3)
{
    FTPContext *VAR_4 = VAR_3->priv_data;
    int VAR_5;

    if ((VAR_5 = FUNC_3(VAR_3, VAR_3->filename)) < 0)
        goto fail;
    if ((VAR_5 = FUNC_6(VAR_4)) < 0)
        goto fail;
    if ((VAR_5 = FUNC_4(VAR_3)) < 0)
        goto fail;
    if ((VAR_5 = FUNC_5(VAR_4)) < 0)
        goto fail;
    VAR_4->dir_buffer = FUNC_1(VAR_0);
    if (!VAR_4->dir_buffer) {
        VAR_5 = FUNC_0(VAR_1);
        goto fail;
    }
    VAR_4->dir_buffer[0] = 0;
    if (VAR_4->conn_data && VAR_4->state == VAR_2)
        return 0;
  fail:
    FUNC_2(&VAR_4->conn_control);
    FUNC_2(&VAR_4->conn_data);
    return VAR_5;
}
