
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* keys; } ;
typedef TYPE_1__ mz_stream_pkcrypt ;



__attribute__((used)) static uint8_t FUNC_0(void *VAR_0)
{
    mz_stream_pkcrypt *VAR_1 = (mz_stream_pkcrypt *)VAR_0;

    unsigned VAR_2;



    VAR_2 = VAR_1->keys[2] | 2;
    return (uint8_t)(((VAR_2 * (VAR_2 ^ 1)) >> 8) & 0xff);
}
