
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stride; int pixel_ptr; int stream_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        FUNC_0(&VAR_0->stream_ptr, VAR_0->pixel_ptr, 8);
        VAR_0->pixel_ptr += VAR_0->stride;
    }


    return 0;
}
