
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ThreadFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(AVCodecContext *VAR_1, ThreadFrame *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 < 0)
        FUNC_0(VAR_1, VAR_0, "thread_get_buffer() failed\n");
    return VAR_4;
}
