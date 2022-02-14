
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int height; int width; int format; } ;
struct TYPE_10__ {TYPE_1__** streams; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int **,int*,int ,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_3__*,int **,int*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVCodecParameters *VAR_2 = VAR_0->streams[0]->codecpar;
    uint8_t *VAR_3[4];
    int VAR_4[4];

    FUNC_0(VAR_3, VAR_4, VAR_1->data, VAR_2->format,
                         VAR_2->width, VAR_2->height, 1);
    return FUNC_1(VAR_0, VAR_3, VAR_4);
}
