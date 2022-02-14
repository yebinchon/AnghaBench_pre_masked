
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stride; int pixel_ptr; int stream_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned char,int) ;

__attribute__((used)) static int FUNC_2(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2;
    unsigned char VAR_3;


    VAR_3 = FUNC_0(&VAR_0->stream_ptr);

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        FUNC_1(VAR_0->pixel_ptr, VAR_3, 8);
        VAR_0->pixel_ptr += VAR_0->stride;
    }


    return 0;
}
