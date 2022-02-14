
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int extradata; } ;
struct TYPE_14__ {TYPE_1__* internal; int pb; } ;
struct TYPE_13__ {TYPE_4__* codecpar; } ;
struct TYPE_12__ {int data_offset; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_8)
{
    AVStream *VAR_9 = FUNC_2(VAR_8, ((void*)0));
    int VAR_10, VAR_11;

    if (!VAR_9) {
        return FUNC_0(VAR_6);
    }

    if (FUNC_3(VAR_8->pb) != VAR_4) {
        FUNC_1(VAR_8, VAR_5, "not a .c2 file\n");
        return VAR_0;
    }

    VAR_10 = FUNC_7(VAR_9->codecpar, VAR_2);
    if (VAR_10) {
        return VAR_10;
    }

    VAR_10 = FUNC_8(VAR_8->pb, VAR_9->codecpar->extradata, VAR_2);
    if (VAR_10 < 0) {
        return VAR_10;
    }

    VAR_11 = FUNC_4(VAR_9->codecpar->extradata);
    if ((VAR_11 >> 8) != VAR_7) {
        FUNC_5(VAR_8, "Major version %i", VAR_11 >> 8);
        return VAR_1;
    }

    VAR_8->internal->data_offset = VAR_3;

    return FUNC_6(VAR_8, VAR_9);
}
