
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int * oformat; TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_17__ {scalar_t__ buf_ptr; } ;
struct TYPE_16__ {int essence_container_count; int timestamp; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 long long FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12(AVFormatContext *VAR_6)
{
    MXFContext *VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;

    FUNC_9(VAR_8, 0x012f00);
    FUNC_1(VAR_6, "preface key", VAR_8->buf_ptr - 16);
    FUNC_6(VAR_8, 138 + 16LL * FUNC_0(VAR_7->essence_container_count));


    FUNC_8(VAR_8, 16, 0x3C0A);
    FUNC_11(VAR_8, VAR_2, 0);
    FUNC_1(VAR_6, "preface uid", VAR_8->buf_ptr - 16);


    FUNC_8(VAR_8, 8, 0x3B02);
    FUNC_4(VAR_8, VAR_7->timestamp);


    FUNC_8(VAR_8, 2, 0x3B05);
    FUNC_2(VAR_8, 259);


    FUNC_8(VAR_8, 4, 0x3B07);
    FUNC_3(VAR_8, 1);


    FUNC_8(VAR_8, 16 + 8, 0x3B06);
    FUNC_10(VAR_8, 1);
    FUNC_11(VAR_8, VAR_1, 0);


    FUNC_8(VAR_8, 16, 0x3B03);
    FUNC_11(VAR_8, VAR_0, 0);


    FUNC_8(VAR_8, 16, 0x3B09);
    if (VAR_6->oformat == &VAR_3)
        FUNC_5(VAR_8, VAR_5, 16);
    else
        FUNC_5(VAR_8, VAR_4, 16);


    FUNC_8(VAR_8, 8 + 16LL * FUNC_0(VAR_7->essence_container_count), 0x3B0A);
    FUNC_7(VAR_6);


    FUNC_8(VAR_8, 8, 0x3B0B);
    FUNC_4(VAR_8, 0);
}
