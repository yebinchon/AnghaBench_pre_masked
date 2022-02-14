
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

long int FUNC_0( void ) {
    unsigned int VAR_1 = VAR_0;
    unsigned long int VAR_2;

    VAR_1 *= 1103515245;
    VAR_1 += 12345;
    VAR_2 = ( unsigned int ) ( VAR_1 / 65536 ) % 2048;

    VAR_1 *= 1103515245;
    VAR_1 += 12345;
    VAR_2 <<= 10;
    VAR_2 ^= ( unsigned int ) ( VAR_1 / 65536 ) % 1024;

    VAR_1 *= 1103515245;
    VAR_1 += 12345;
    VAR_2 <<= 10;
    VAR_2 ^= ( unsigned int ) ( VAR_1 / 65536 ) % 1024;

    VAR_0 = VAR_1;

    return VAR_2;
}
