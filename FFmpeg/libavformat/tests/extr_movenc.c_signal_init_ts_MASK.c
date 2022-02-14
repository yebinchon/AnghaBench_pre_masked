
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream_index; scalar_t__ pts; scalar_t__ dts; int * data; scalar_t__ size; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    AVPacket VAR_3;
    FUNC_0(&VAR_3);
    VAR_3.size = 0;
    VAR_3.data = ((void*)0);

    VAR_3.stream_index = 0;
    VAR_3.dts = VAR_2;
    VAR_3.pts = 0;
    FUNC_1(VAR_1, &VAR_3);

    VAR_3.stream_index = 1;
    VAR_3.dts = VAR_3.pts = VAR_0;
    FUNC_1(VAR_1, &VAR_3);
}
