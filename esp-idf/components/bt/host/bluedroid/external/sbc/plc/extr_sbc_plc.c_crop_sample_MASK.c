
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static int16_t FUNC_0(float VAR_0){
    float VAR_1 = VAR_0;
    if (VAR_1 > 32767.0) VAR_1= 32767.0;
    if (VAR_1 < -32768.0) VAR_1=-32768.0;
    return (int16_t) VAR_1;
}
