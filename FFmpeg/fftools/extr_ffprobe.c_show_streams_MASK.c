
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_3__ {int nb_streams; int * streams; int * fmt_ctx; } ;
typedef TYPE_1__ InputFile ;
typedef int AVFormatContext ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *,int *,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(WriterContext *VAR_2, InputFile *VAR_3)
{
    AVFormatContext *VAR_4 = VAR_3->fmt_ctx;
    int VAR_5, VAR_6 = 0;

    FUNC_2(VAR_2, VAR_0);
    for (VAR_5 = 0; VAR_5 < VAR_3->nb_streams; VAR_5++)
        if (VAR_1[VAR_5]) {
            VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5, &VAR_3->streams[VAR_5], 0);
            if (VAR_6 < 0)
                break;
        }
    FUNC_1(VAR_2);

    return VAR_6;
}
