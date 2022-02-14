
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct ssl_pm {TYPE_1__ ssl; } ;
struct TYPE_5__ {scalar_t__ ssl_pm; } ;
typedef TYPE_2__ SSL ;
typedef int OSSL_HANDSHAKE_STATE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

OSSL_HANDSHAKE_STATE FUNC_0(const SSL *VAR_15)
{
    OSSL_HANDSHAKE_STATE VAR_16;

    struct ssl_pm *VAR_17 = (struct ssl_pm *)VAR_15->ssl_pm;

    switch (VAR_17->ssl.state)
    {
        case 138:
            VAR_16 = VAR_3;
            break;
        case 132:
            VAR_16 = VAR_14;
            break;
        case 135:
            VAR_16 = VAR_8;
            break;
        case 131:
            VAR_16 = VAR_13;
            break;
        case 137:
            VAR_16 = VAR_5;
            break;
        case 140:
            VAR_16 = VAR_2;
            break;
        case 139:
            VAR_16 = VAR_4;
            break;
        case 134:
            VAR_16 = VAR_10;
            break;
        case 133:
            VAR_16 = VAR_11;
            break;
        case 141:
            VAR_16 = VAR_1;
            break;
        case 129:
            VAR_16 = VAR_7;
            break;
        case 128:
            VAR_16 = VAR_12;
            break;
        case 130:
            VAR_16 = VAR_9;
            break;
        case 136:
            VAR_16 = VAR_6;
            break;
        default :
            VAR_16 = VAR_0;
            break;
    }

    return VAR_16;
}
