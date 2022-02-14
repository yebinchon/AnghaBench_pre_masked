
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int flags; int * oformat; TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__ buf_ptr; } ;
struct TYPE_13__ {int timestamp; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int,char const*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(AVFormatContext *VAR_4)
{
    MXFContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    const char *VAR_7 = "FFmpeg";
    const char *VAR_8 = VAR_4->oformat != &VAR_3 ? "OP1a Muxer" : "OPAtom Muxer";
    const char *VAR_9;
    int VAR_10;

    FUNC_7(VAR_6, 0x013000);
    FUNC_1(VAR_4, "identification key", VAR_6->buf_ptr - 16);

    VAR_9 = VAR_4->flags & VAR_0 ?
        "0.0.0" : FUNC_0(VAR_2);
    VAR_10 = 100 +FUNC_4(VAR_7) +
                  FUNC_4(VAR_8) +
                  FUNC_4(VAR_9);
    FUNC_3(VAR_6, VAR_10);


    FUNC_5(VAR_6, 16, 0x3C0A);
    FUNC_8(VAR_6, VAR_1, 0);
    FUNC_1(VAR_4, "identification uid", VAR_6->buf_ptr - 16);


    FUNC_5(VAR_6, 16, 0x3C09);
    FUNC_8(VAR_6, VAR_1, 1);
    FUNC_6(VAR_6, 0x3C01, VAR_7);
    FUNC_6(VAR_6, 0x3C02, VAR_8);

    FUNC_5(VAR_6, 10, 0x3C03);
    FUNC_9(VAR_4);

    FUNC_6(VAR_6, 0x3C04, VAR_9);


    FUNC_5(VAR_6, 16, 0x3C05);
    FUNC_8(VAR_6, VAR_1, 2);


    FUNC_5(VAR_6, 8, 0x3C06);
    FUNC_2(VAR_6, VAR_5->timestamp);

    FUNC_5(VAR_6, 10, 0x3C07);
    FUNC_9(VAR_4);
}
