
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int caddr_t ;
struct TYPE_4__ {int tuner_fd; int video_fd; } ;
typedef TYPE_1__ VideoData ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_6)
{
    VideoData *VAR_7 = VAR_6->priv_data;
    int VAR_8;

    VAR_8 = VAR_3;
    FUNC_1(VAR_7->video_fd, VAR_2, &VAR_8);
    FUNC_0(VAR_7->video_fd);

    VAR_8 = VAR_0;
    FUNC_1(VAR_7->tuner_fd, VAR_1, &VAR_8);
    FUNC_0(VAR_7->tuner_fd);

    FUNC_2((caddr_t)VAR_4, VAR_5);

    return 0;
}
