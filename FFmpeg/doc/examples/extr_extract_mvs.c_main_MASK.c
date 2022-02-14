
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stream_index; int member_0; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int *,char*,int *,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;
 int VAR_2 ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_15(int VAR_9, char **VAR_10)
{
    int VAR_11 = 0;
    AVPacket VAR_12 = { 0 };

    if (VAR_9 != 2) {
        FUNC_12(VAR_5, "Usage: %s <video>\n", VAR_10[0]);
        FUNC_11(1);
    }
    VAR_4 = VAR_10[1];

    if (FUNC_9(&VAR_2, VAR_4, ((void*)0), ((void*)0)) < 0) {
        FUNC_12(VAR_5, "Could not open source file %s\n", VAR_4);
        FUNC_11(1);
    }

    if (FUNC_8(VAR_2, ((void*)0)) < 0) {
        FUNC_12(VAR_5, "Could not find stream information\n");
        FUNC_11(1);
    }

    FUNC_13(VAR_2, VAR_0);

    FUNC_1(VAR_2, 0, VAR_4, 0);

    if (!VAR_7) {
        FUNC_12(VAR_5, "Could not find video stream in the input, aborting\n");
        VAR_11 = 1;
        goto end;
    }

    VAR_3 = FUNC_2();
    if (!VAR_3) {
        FUNC_12(VAR_5, "Could not allocate frame\n");
        VAR_11 = FUNC_0(VAR_1);
        goto end;
    }

    FUNC_14("framenum,source,blockw,blockh,srcx,srcy,dstx,dsty,flags\n");


    while (FUNC_5(VAR_2, &VAR_12) >= 0) {
        if (VAR_12.stream_index == VAR_8)
            VAR_11 = FUNC_10(&VAR_12);
        FUNC_4(&VAR_12);
        if (VAR_11 < 0)
            break;
    }


    FUNC_10(((void*)0));

end:
    FUNC_6(&VAR_6);
    FUNC_7(&VAR_2);
    FUNC_3(&VAR_3);
    return VAR_11 < 0;
}
