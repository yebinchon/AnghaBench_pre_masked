
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int timeline_start_pos; int thumbnail; int st_pairs; int sp_pairs; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_11__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_8)
{
    WtvContext *VAR_9 = VAR_8->priv_data;
    AVIOContext *VAR_10 = VAR_8->pb;
    int VAR_11;
    int64_t VAR_12;
    int64_t VAR_13, VAR_14;

    if (FUNC_6(VAR_8, VAR_6, VAR_9->timeline_start_pos) < 0)
        return -1;

    VAR_13 = FUNC_4(VAR_10);
    FUNC_9(VAR_8);
    if (FUNC_6(VAR_8, VAR_7, VAR_13) < 0)
        return -1;

    VAR_13 = FUNC_4(VAR_10);
    FUNC_8(VAR_8);
    if (FUNC_6(VAR_8, VAR_3, VAR_13) < 0)
        return -1;

    VAR_13 = FUNC_4(VAR_10);
    FUNC_11(VAR_8);
    if (FUNC_6(VAR_8, VAR_5, VAR_13) < 0)
        return -1;

    VAR_13 = FUNC_4(VAR_10);
    FUNC_10(VAR_8);
    if (FUNC_6(VAR_8, VAR_4, VAR_13) < 0)
        return -1;


    VAR_12 = FUNC_4(VAR_10);
    VAR_11 = FUNC_7(VAR_8, VAR_12);

    VAR_14 = FUNC_4(VAR_10);

    FUNC_3(VAR_10, 0x30, VAR_1);
    FUNC_5(VAR_10, VAR_11);
    FUNC_3(VAR_10, 4, VAR_0);
    FUNC_5(VAR_10, VAR_12 >> VAR_2);
    FUNC_3(VAR_10, 0x5c, VAR_1);
    FUNC_5(VAR_10, VAR_14 >> VAR_2);

    FUNC_2(VAR_10);

    FUNC_0(VAR_9->sp_pairs);
    FUNC_0(VAR_9->st_pairs);
    FUNC_1(&VAR_9->thumbnail);
    return 0;
}
