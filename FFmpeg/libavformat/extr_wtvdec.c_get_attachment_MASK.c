
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mime ;
typedef scalar_t__ int64_t ;
typedef int description ;
struct TYPE_7__ {int flags; int stream_index; } ;
struct TYPE_6__ {int id; int disposition; TYPE_4__ attached_pic; int index; TYPE_1__* codecpar; int metadata; } ;
struct TYPE_5__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int *,TYPE_4__*,unsigned int) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_6, AVIOContext *VAR_7, int VAR_8)
{
    char VAR_9[1024];
    char VAR_10[1024];
    unsigned int VAR_11;
    AVStream *VAR_12;
    int VAR_13;
    int64_t VAR_14 = FUNC_7(VAR_7);

    FUNC_3(VAR_7, VAR_4, VAR_9, sizeof(VAR_9));
    if (FUNC_8(VAR_9, "image/jpeg"))
        goto done;

    FUNC_4(VAR_7);
    FUNC_3(VAR_7, VAR_4, VAR_10, sizeof(VAR_10));
    VAR_11 = FUNC_5(VAR_7);
    if (!VAR_11)
        goto done;

    VAR_12 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_12)
        goto done;
    FUNC_0(&VAR_12->metadata, "title", VAR_10, 0);
    VAR_12->codecpar->codec_type = VAR_0;
    VAR_12->codecpar->codec_id = VAR_1;
    VAR_12->id = -1;
    VAR_13 = FUNC_1(VAR_7, &VAR_12->attached_pic, VAR_11);
    if (VAR_13 < 0)
        goto done;
    VAR_12->attached_pic.stream_index = VAR_12->index;
    VAR_12->attached_pic.flags |= VAR_3;
    VAR_12->disposition |= VAR_2;
done:
    FUNC_6(VAR_7, VAR_14 + VAR_8, VAR_5);
}
