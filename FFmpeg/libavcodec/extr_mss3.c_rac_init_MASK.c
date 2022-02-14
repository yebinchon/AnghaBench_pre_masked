
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int low; int range; scalar_t__ got_error; int const* src; int const* src_end; } ;
typedef TYPE_1__ RangeCoder ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(RangeCoder *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    VAR_0->src = VAR_1;
    VAR_0->src_end = VAR_1 + VAR_2;
    VAR_0->low = 0;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2, 4); VAR_3++)
        VAR_0->low = (VAR_0->low << 8) | *VAR_0->src++;
    VAR_0->range = 0xFFFFFFFF;
    VAR_0->got_error = 0;
}
