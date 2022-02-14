
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int * pb; } ;
struct TYPE_6__ {int size; int data; scalar_t__ duration; scalar_t__ pts; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    int VAR_5, VAR_6;
    uint8_t *VAR_7, *VAR_8;

    FUNC_1(VAR_4, "\n");

    VAR_7 = FUNC_0(VAR_3, VAR_0,
                                 &VAR_5);

    if (VAR_7 && VAR_5 > 0)
        FUNC_1(VAR_4, "%.*s\n", VAR_5, VAR_7);

    FUNC_3(VAR_4, VAR_3->pts);
    FUNC_1(VAR_4, " --> ");
    FUNC_3(VAR_4, VAR_3->pts + VAR_3->duration);

    VAR_8 = FUNC_0(VAR_3, VAR_1,
                                       &VAR_6);

    if (VAR_8 && VAR_6 > 0)
        FUNC_1(VAR_4, " %.*s", VAR_6, VAR_8);

    FUNC_1(VAR_4, "\n");

    FUNC_2(VAR_4, VAR_3->data, VAR_3->size);
    FUNC_1(VAR_4, "\n");

    return 0;
}
