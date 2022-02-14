
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {long* keys; } ;
typedef TYPE_1__ mz_stream_pkcrypt ;


 int FUNC_0 (void*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1)
{
    mz_stream_pkcrypt *VAR_2 = (mz_stream_pkcrypt *)VAR_0;

    VAR_2->keys[0] = 305419896L;
    VAR_2->keys[1] = 591751049L;
    VAR_2->keys[2] = 878082192L;

    while (*VAR_1 != 0)
    {
        FUNC_0(VAR_0, (uint8_t)*VAR_1);
        VAR_1 += 1;
    }
}
