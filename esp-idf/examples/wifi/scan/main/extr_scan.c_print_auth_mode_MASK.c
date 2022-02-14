
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;







__attribute__((used)) static void FUNC_1(int VAR_1)
{
    switch (VAR_1) {
    case 133:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_OPEN");
        break;
    case 132:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_WEP");
        break;
    case 129:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_WPA_PSK");
        break;
    case 130:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_WPA2_PSK");
        break;
    case 128:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_WPA_WPA2_PSK");
        break;
    case 131:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_WPA2_ENTERPRISE");
        break;
    default:
        FUNC_0(VAR_0, "Authmode \tWIFI_AUTH_UNKNOWN");
        break;
    }
}
