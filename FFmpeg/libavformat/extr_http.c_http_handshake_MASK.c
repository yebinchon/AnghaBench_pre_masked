
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int handshake_step; int is_connected_server; int reply_code; TYPE_1__* hd; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    HTTPContext *VAR_6 = VAR_2->priv_data;
    URLContext *VAR_7 = VAR_6->hd;
    switch (VAR_6->handshake_step) {
    case 130:
        FUNC_1(VAR_2, VAR_0, "Lower protocol\n");
        if ((VAR_3 = FUNC_2(VAR_7)) > 0)
            return 2 + VAR_3;
        if (VAR_3 < 0)
            return VAR_3;
        VAR_6->handshake_step = 129;
        VAR_6->is_connected_server = 1;
        return 2;
    case 129:
        FUNC_1(VAR_2, VAR_0, "Read headers\n");
        if ((VAR_4 = FUNC_4(VAR_2, &VAR_5)) < 0) {
            FUNC_3(VAR_2, VAR_4);
            return VAR_4;
        }
        VAR_6->handshake_step = 128;
        return 1;
    case 128:
        FUNC_1(VAR_2, VAR_0, "Reply code: %d\n", VAR_6->reply_code);
        if ((VAR_4 = FUNC_5(VAR_2, VAR_6->reply_code)) < 0)
            return VAR_4;
        VAR_6->handshake_step = 131;
        return 1;
    case 131:
        return 0;
    }

    return FUNC_0(VAR_1);
}
