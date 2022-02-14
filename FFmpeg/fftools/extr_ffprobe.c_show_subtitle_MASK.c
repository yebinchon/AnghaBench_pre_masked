
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_3__ {int num_rects; int end_display_time; int start_display_time; int format; int pts; } ;
typedef TYPE_1__ AVSubtitle ;
typedef int AVStream ;
typedef int AVFormatContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (char*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(WriterContext *VAR_4, AVSubtitle *VAR_5, AVStream *VAR_6,
                          AVFormatContext *VAR_7)
{
    AVBPrint VAR_8;

    FUNC_1(&VAR_8, 1, VAR_0);

    FUNC_8(VAR_4, VAR_2);

    FUNC_4 ("media_type", "subtitle");
    FUNC_6 ("pts", VAR_5->pts);
    FUNC_5("pts_time", VAR_5->pts, &VAR_1);
    FUNC_3 ("format", VAR_5->format);
    FUNC_3 ("start_display_time", VAR_5->start_display_time);
    FUNC_3 ("end_display_time", VAR_5->end_display_time);
    FUNC_3 ("num_rects", VAR_5->num_rects);

    FUNC_7(VAR_4);

    FUNC_0(&VAR_8, ((void*)0));
    FUNC_2(VAR_3);
}
