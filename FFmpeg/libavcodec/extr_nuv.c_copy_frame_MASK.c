
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int format; int linesize; int data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ,int ,int const**,int*,int ,int,int) ;
 int FUNC_1 (int **,int*,int const*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    uint8_t *VAR_4[4];
    int VAR_5[4];
    FUNC_1(VAR_4, VAR_5, VAR_1,
                         VAR_0->format, VAR_2, VAR_3, 1);
    FUNC_0(VAR_0->data, VAR_0->linesize, (const uint8_t **)VAR_4, VAR_5,
                  VAR_0->format, VAR_2, VAR_3);
}
