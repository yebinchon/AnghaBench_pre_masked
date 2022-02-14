
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int channels; int channel_layout; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_4, AVStream *VAR_5, int VAR_6)
{
    if (VAR_6 <= 0) {
        FUNC_0(VAR_4, VAR_3, "Channel count %d invalid.\n", VAR_6);
        return VAR_0;
    }
    VAR_5->codecpar->channels = VAR_6;
    VAR_5->codecpar->channel_layout = (VAR_5->codecpar->channels == 1) ? VAR_1
                                                                 : VAR_2;
    return 0;
}
