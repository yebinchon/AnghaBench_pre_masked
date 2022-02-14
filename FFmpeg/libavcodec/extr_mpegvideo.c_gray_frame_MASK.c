
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int* linesize; int width; scalar_t__* data; int format; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(AVFrame *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    FUNC_1(VAR_0->format, &VAR_2, &VAR_3);

    for(VAR_1=0; VAR_1<VAR_0->height; VAR_1++)
        FUNC_2(VAR_0->data[0] + VAR_0->linesize[0]*VAR_1, 0x80, VAR_0->width);
    for(VAR_1=0; VAR_1<FUNC_0(VAR_0->height, VAR_3); VAR_1++) {
        FUNC_2(VAR_0->data[1] + VAR_0->linesize[1]*VAR_1,
               0x80, FUNC_0(VAR_0->width, VAR_2));
        FUNC_2(VAR_0->data[2] + VAR_0->linesize[2]*VAR_1,
               0x80, FUNC_0(VAR_0->width, VAR_2));
    }
}
