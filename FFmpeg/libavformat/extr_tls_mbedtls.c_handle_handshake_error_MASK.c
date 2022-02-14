
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;


 int VAR_0 ;




 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(URLContext *VAR_1, int VAR_2)
{
    switch (VAR_2) {
    case 128:
        FUNC_0(VAR_1, VAR_0, "None of the common ciphersuites is usable. Was the local certificate correctly set?\n");
        break;
    case 129:
        FUNC_0(VAR_1, VAR_0, "A fatal alert message was received from the peer, has the peer a correct certificate?\n");
        break;
    case 130:
        FUNC_0(VAR_1, VAR_0, "No CA chain is set, but required to operate. Was the CA correctly set?\n");
        break;
    case 131:
        FUNC_0(VAR_1, VAR_0, "TLS handshake was aborted by peer.\n");
        break;
    default:
        FUNC_0(VAR_1, VAR_0, "mbedtls_ssl_handshake returned -0x%x\n", -VAR_2);
        break;
    }
}
