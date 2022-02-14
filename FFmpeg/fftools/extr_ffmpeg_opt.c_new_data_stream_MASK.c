
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream_copy; } ;
typedef TYPE_1__ OutputStream ;
typedef int OptionsContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int *,int ,int) ;

__attribute__((used)) static OutputStream *FUNC_3(OptionsContext *VAR_2, AVFormatContext *VAR_3, int VAR_4)
{
    OutputStream *VAR_5;

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_4);
    if (!VAR_5->stream_copy) {
        FUNC_0(((void*)0), VAR_1, "Data stream encoding not supported yet (only streamcopy)\n");
        FUNC_1(1);
    }

    return VAR_5;
}
