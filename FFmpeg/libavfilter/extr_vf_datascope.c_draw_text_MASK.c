
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {int height; int width; int linesize; int data; } ;
typedef int FFDrawContext ;
typedef int FFDrawColor ;
typedef TYPE_1__ AVFrame ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int ,int ,scalar_t__,int,int,int,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(FFDrawContext *VAR_1, AVFrame *VAR_2, FFDrawColor *VAR_3,
                      int VAR_4, int VAR_5, const uint8_t *VAR_6, int VAR_7)
{
    int VAR_8 = VAR_4;

    for (; *VAR_6; VAR_6++) {
        if (*VAR_6 == '\n') {
            VAR_8 = VAR_4;
            VAR_5 += 8;
            continue;
        }
        FUNC_0(VAR_1, VAR_3, VAR_2->data, VAR_2->linesize,
                      VAR_2->width, VAR_2->height,
                      VAR_0 + *VAR_6 * 8, 1, 8, 8, 0, 0, VAR_8, VAR_5);
        if (VAR_7) {
            VAR_8 = VAR_4;
            VAR_5 += 8;
        } else {
            VAR_8 += 8;
        }
    }
}
