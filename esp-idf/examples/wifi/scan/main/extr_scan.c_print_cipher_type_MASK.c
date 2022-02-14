
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;







__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2)
{
    switch (VAR_1) {
    case 132:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_NONE");
        break;
    case 128:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_WEP40");
        break;
    case 129:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_WEP104");
        break;
    case 131:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_TKIP");
        break;
    case 133:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_CCMP");
        break;
    case 130:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_TKIP_CCMP");
        break;
    default:
        FUNC_0(VAR_0, "Pairwise Cipher \tWIFI_CIPHER_TYPE_UNKNOWN");
        break;
    }

    switch (VAR_2) {
    case 132:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_NONE");
        break;
    case 128:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_WEP40");
        break;
    case 129:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_WEP104");
        break;
    case 131:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_TKIP");
        break;
    case 133:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_CCMP");
        break;
    case 130:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_TKIP_CCMP");
        break;
    default:
        FUNC_0(VAR_0, "Group Cipher \tWIFI_CIPHER_TYPE_UNKNOWN");
        break;
    }
}
