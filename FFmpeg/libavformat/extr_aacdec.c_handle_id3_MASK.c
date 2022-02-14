
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int event_flags; int metadata; int pb; } ;
struct TYPE_7__ {scalar_t__ size; int data; } ;
typedef int ID3v2ExtraMeta ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **,int **) ;
 int FUNC_6 (int *,int **,int ,int **) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,scalar_t__,int ,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    AVDictionary *VAR_4 = ((void*)0);
    AVIOContext VAR_5;
    ID3v2ExtraMeta *VAR_6 = ((void*)0);
    int VAR_7;

    VAR_7 = FUNC_0(VAR_2->pb, VAR_3, FUNC_7(VAR_3->data) - VAR_3->size);
    if (VAR_7 < 0) {
        FUNC_3(VAR_3);
        return VAR_7;
    }

    FUNC_8(&VAR_5, VAR_3->data, VAR_3->size, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(&VAR_5, &VAR_4, VAR_1, &VAR_6);
    if ((VAR_7 = FUNC_5(&VAR_4, &VAR_6)) < 0)
        goto error;

    if (VAR_4) {
        if ((VAR_7 = FUNC_1(&VAR_2->metadata, VAR_4, 0)) < 0)
            goto error;
        VAR_2->event_flags |= VAR_0;
    }

error:
    FUNC_3(VAR_3);
    FUNC_4(&VAR_6);
    FUNC_2(&VAR_4);

    return VAR_7;
}
