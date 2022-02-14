
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;

 int VAR_0 ;


__attribute__((used)) static void FUNC_1(int VAR_1)
{
    const char *VAR_2 = " is not bootable";
    switch (VAR_1) {
    case 129:
        FUNC_0(VAR_0, "Factory app partition%s", VAR_2);
        break;
    case 128:
        FUNC_0(VAR_0, "Factory test app partition%s", VAR_2);
        break;
    default:
        FUNC_0(VAR_0, "OTA app partition slot %d%s", VAR_1, VAR_2);
        break;
    }
}
