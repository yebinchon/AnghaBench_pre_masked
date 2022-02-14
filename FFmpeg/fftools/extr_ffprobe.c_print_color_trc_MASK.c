
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVColorTransferCharacteristic { ____Placeholder_AVColorTransferCharacteristic } AVColorTransferCharacteristic ;
typedef int WriterContext ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(WriterContext *VAR_1, enum AVColorTransferCharacteristic VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3 || VAR_2 == VAR_0) {
        FUNC_2("color_transfer", "unknown");
    } else {
        FUNC_1("color_transfer", VAR_3);
    }
}
