
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_sha_type ;
__attribute__((used)) inline static size_t FUNC_0(esp_sha_type VAR_0) {
    switch(VAR_0) {
    case 132:
        return 160/8;
    case 131:
    case 130:
        return 256/8;
    case 129:
    case 128:
        return 512/8;
    default:
        return 0;
    }
}
