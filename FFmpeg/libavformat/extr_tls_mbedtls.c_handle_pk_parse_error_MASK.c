
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
    case 130:
        FUNC_0(VAR_1, VAR_0, "Read of key file failed. Is it actually there, are the access permissions correct?\n");
        break;
    case 128:
        FUNC_0(VAR_1, VAR_0, "A password for the private key is missing.\n");
        break;
    case 129:
        FUNC_0(VAR_1, VAR_0, "The given password for the private key is wrong.\n");
        break;
    default:
        FUNC_0(VAR_1, VAR_0, "mbedtls_pk_parse_key returned -0x%x\n", -VAR_2);
        break;
    }
}
