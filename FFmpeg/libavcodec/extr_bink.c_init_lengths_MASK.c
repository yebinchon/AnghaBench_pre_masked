
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bundle; } ;
struct TYPE_4__ {void* len; } ;
typedef TYPE_2__ BinkContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(BinkContext *VAR_9, int VAR_10, int VAR_11)
{
    VAR_10 = FUNC_0(VAR_10, 8);

    VAR_9->bundle[VAR_0].len = FUNC_1((VAR_10 >> 3) + 511) + 1;

    VAR_9->bundle[VAR_6].len = FUNC_1((VAR_10 >> 4) + 511) + 1;

    VAR_9->bundle[VAR_1].len = FUNC_1(VAR_11*64 + 511) + 1;

    VAR_9->bundle[VAR_3].len =
    VAR_9->bundle[VAR_2].len =
    VAR_9->bundle[VAR_7].len =
    VAR_9->bundle[VAR_8].len = FUNC_1((VAR_10 >> 3) + 511) + 1;

    VAR_9->bundle[VAR_4].len = FUNC_1((VAR_11 << 3) + 511) + 1;

    VAR_9->bundle[VAR_5].len = FUNC_1(VAR_11*48 + 511) + 1;
}
