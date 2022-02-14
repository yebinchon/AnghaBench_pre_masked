
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int metadata; int avg_frame_rate; } ;
typedef int AVTimecode ;
typedef TYPE_1__ AVStream ;
typedef int AVRational ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,int ,int,int ,int *) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVStream *VAR_2,
                                             uint32_t VAR_3, int VAR_4)
{
    AVTimecode VAR_5;
    char VAR_6[VAR_0];
    AVRational VAR_7 = VAR_2->avg_frame_rate;
    int VAR_8 = FUNC_1(&VAR_5, VAR_7, VAR_4, 0, VAR_1);
    if (VAR_8 < 0)
        return VAR_8;
    FUNC_0(&VAR_2->metadata, "timecode",
                FUNC_2(&VAR_5, VAR_6, VAR_3), 0);
    return 0;
}
