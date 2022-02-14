
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream_copy; int finished; } ;
typedef TYPE_1__ OutputStream ;
typedef int OptionsContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *,int ,int) ;

__attribute__((used)) static OutputStream *FUNC_1(OptionsContext *VAR_1, AVFormatContext *VAR_2, int VAR_3)
{
    OutputStream *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
    VAR_4->stream_copy = 1;
    VAR_4->finished = 1;
    return VAR_4;
}
