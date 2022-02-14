
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int second_last_frame; int avctx; int stream_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 char FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *,char,char) ;
 int FUNC_2 (int ,char*,char,char) ;

__attribute__((used)) static int FUNC_3(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    signed char VAR_2, VAR_3;


    VAR_2 = FUNC_0(&VAR_0->stream_ptr);
    VAR_3 = FUNC_0(&VAR_0->stream_ptr);

    FUNC_2(VAR_0->avctx, "motion bytes = %d, %d\n", VAR_2, VAR_3);
    return FUNC_1(VAR_0, VAR_0->second_last_frame, VAR_1, VAR_2, VAR_3);
}
