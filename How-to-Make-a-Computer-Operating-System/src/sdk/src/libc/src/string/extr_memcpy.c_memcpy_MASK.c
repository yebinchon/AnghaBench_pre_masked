
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void* FUNC_0( void* VAR_0, const void* VAR_1, size_t VAR_2 ) {
    char* VAR_3;
    char* VAR_4;

    VAR_3 = ( char* )VAR_0;
    VAR_4 = ( char* )VAR_1;

    while ( VAR_2-- ) {
        *VAR_3++ = *VAR_4++;
    }

    return VAR_0;
}
