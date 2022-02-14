
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;




 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

const char *FUNC_3(const SSL *VAR_0)
{
    const char *VAR_1 = "UNKWN ";

    FUNC_0(VAR_0);

    if (FUNC_2(VAR_0))
        VAR_1 = "SSLERR";
    else
    {
        switch (FUNC_1(VAR_0))
        {
            case 158:
                VAR_1 = "before SSL initialization";
                break;
            case 143:
                VAR_1 = "SSL negotiation finished successfully";
                break;
            case 146:
                VAR_1 = "SSLv3/TLS write client hello";
                break;
            case 150:
                VAR_1 = "SSLv3/TLS read server hello";
                break;
            case 157:
                VAR_1 = "SSLv3/TLS read server certificate";
                break;
            case 153:
                VAR_1 = "SSLv3/TLS read server key exchange";
                break;
            case 156:
                VAR_1 = "SSLv3/TLS read server certificate request";
                break;
            case 152:
                VAR_1 = "SSLv3/TLS read server session ticket";
                break;
            case 151:
                VAR_1 = "SSLv3/TLS read server done";
                break;
            case 149:
                VAR_1 = "SSLv3/TLS write client certificate";
                break;
            case 144:
                VAR_1 = "SSLv3/TLS write client key exchange";
                break;
            case 148:
                VAR_1 = "SSLv3/TLS write certificate verify";
                break;
            case 147:
            case 134:
                VAR_1 = "SSLv3/TLS write change cipher spec";
                break;
            case 145:
            case 133:
                VAR_1 = "SSLv3/TLS write finished";
                break;
            case 155:
            case 140:
                VAR_1 = "SSLv3/TLS read change cipher spec";
                break;
            case 154:
            case 138:
                VAR_1 = "SSLv3/TLS read finished";
                break;
            case 139:
                VAR_1 = "SSLv3/TLS read client hello";
                break;
            case 132:
                VAR_1 = "SSLv3/TLS write hello request";
                break;
            case 128:
                VAR_1 = "SSLv3/TLS write server hello";
                break;
            case 136:
                VAR_1 = "SSLv3/TLS write certificate";
                break;
            case 131:
                VAR_1 = "SSLv3/TLS write key exchange";
                break;
            case 135:
                VAR_1 = "SSLv3/TLS write certificate request";
                break;
            case 130:
                VAR_1 = "SSLv3/TLS write session ticket";
                break;
            case 129:
                VAR_1 = "SSLv3/TLS write server done";
                break;
            case 142:
                VAR_1 = "SSLv3/TLS read client certificate";
                break;
            case 137:
                VAR_1 = "SSLv3/TLS read client key exchange";
                break;
            case 141:
                VAR_1 = "SSLv3/TLS read certificate verify";
                break;
            case 160:
                VAR_1 = "DTLS1 read hello verify request";
                break;
            case 159:
                VAR_1 = "DTLS1 write hello verify request";
                break;
            default:
                break;
        }
    }

    return VAR_1;
}
