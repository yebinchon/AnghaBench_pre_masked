
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * pb; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {void* height; void* width; scalar_t__ codec_tag; int format; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5)
{
    AVIOContext *VAR_6 = VAR_5->pb;
    AVStream *VAR_7 = FUNC_1(VAR_5, 0);
    if (!VAR_7)
        return FUNC_0(VAR_3);

    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_id = VAR_2;
    FUNC_4(VAR_6, 3);

    VAR_7->codecpar->format = FUNC_5(VAR_4, FUNC_2(VAR_6));
    if (!VAR_7->codecpar->format)
        return VAR_0;

    VAR_7->codecpar->codec_tag = 0;
    VAR_7->codecpar->width = FUNC_3(VAR_6);
    VAR_7->codecpar->height = FUNC_3(VAR_6);
    return 0;
}
