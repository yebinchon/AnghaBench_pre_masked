
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_9__ {int type; } ;
typedef TYPE_1__ RTMPPacket ;
typedef int RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_2, RTMPContext *VAR_3, RTMPPacket *VAR_4)
{
    int VAR_5;





    switch (VAR_4->type) {
    case 136:
        FUNC_0(VAR_2, VAR_0, "received bytes read report\n");
        break;
    case 135:
        if ((VAR_5 = FUNC_2(VAR_2, VAR_4)) < 0)
            return VAR_5;
        break;
    case 130:
        if ((VAR_5 = FUNC_5(VAR_2, VAR_4)) < 0)
            return VAR_5;
        break;
    case 131:
        if ((VAR_5 = FUNC_4(VAR_2, VAR_4)) < 0)
            return VAR_5;
        break;
    case 128:
        if ((VAR_5 = FUNC_6(VAR_2, VAR_4)) < 0)
            return VAR_5;
        break;
    case 134:
        if ((VAR_5 = FUNC_3(VAR_2, VAR_4)) < 0)
            return VAR_5;
        break;
    case 129:
    case 137:
    case 133:
    case 132:

        break;
    default:
        FUNC_0(VAR_2, VAR_1, "Unknown packet type received 0x%02X\n", VAR_4->type);
        break;
    }
    return 0;
}
