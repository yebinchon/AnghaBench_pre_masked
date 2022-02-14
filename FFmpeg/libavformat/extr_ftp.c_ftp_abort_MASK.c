
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int conn_control; } ;
typedef TYPE_2__ FTPContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char const*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int const*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_1)
{
    static const char *VAR_2 = "ABOR\r\n";
    int VAR_3;
    static const int VAR_4[] = {225, 226, 0};
    FTPContext *VAR_5 = VAR_1->priv_data;
    if (FUNC_5(VAR_5, VAR_2, ((void*)0), ((void*)0)) < 0) {
        FUNC_2(VAR_5);
        if ((VAR_3 = FUNC_4(VAR_1)) < 0) {
            FUNC_0(VAR_1, VAR_0, "Reconnect failed.\n");
            return VAR_3;
        }
    } else {
        FUNC_3(VAR_5);
        if (FUNC_6(VAR_5, ((void*)0), VAR_4) < 225) {

            FUNC_1(&VAR_5->conn_control);
            if ((VAR_3 = FUNC_4(VAR_1)) < 0) {
                FUNC_0(VAR_1, VAR_0, "Reconnect failed.\n");
                return VAR_3;
            }
        }
    }

    return 0;
}
