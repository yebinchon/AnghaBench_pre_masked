
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_29__ {int * oformat; TYPE_8__* pb; TYPE_6__* priv_data; } ;
struct TYPE_28__ {scalar_t__ buf_ptr; } ;
struct TYPE_27__ {scalar_t__ index; TYPE_4__* priv_data; } ;
struct TYPE_23__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_21__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_22__ {TYPE_1__ rate; } ;
struct TYPE_26__ {int track_instance_count; TYPE_3__ time_base; TYPE_2__ tc; TYPE_7__* timecode_track; } ;
struct TYPE_25__ {scalar_t__ type; } ;
struct TYPE_24__ {scalar_t__ track_essence_element_key; } ;
typedef TYPE_4__ MXFStreamContext ;
typedef TYPE_5__ MXFPackage ;
typedef TYPE_6__ MXFContext ;
typedef TYPE_7__ AVStream ;
typedef TYPE_8__ AVIOContext ;
typedef TYPE_9__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_9__*,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_8__*,scalar_t__) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_8__*,int,int) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (TYPE_8__*,int ,int ) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_4, AVStream *VAR_5, MXFPackage *VAR_6)
{
    MXFContext *VAR_7 = VAR_4->priv_data;
    AVIOContext *VAR_8 = VAR_4->pb;
    MXFStreamContext *VAR_9 = VAR_5->priv_data;

    FUNC_6(VAR_8, 0x013b00);
    FUNC_0(VAR_4, "track key", VAR_8->buf_ptr - 16);
    FUNC_4(VAR_8, 80);


    FUNC_5(VAR_8, 16, 0x3C0A);
    FUNC_7(VAR_8, VAR_2, VAR_7->track_instance_count);
    FUNC_0(VAR_4, "track uid", VAR_8->buf_ptr - 16);


    FUNC_5(VAR_8, 4, 0x4801);
    FUNC_1(VAR_8, VAR_5->index+2);


    FUNC_5(VAR_8, 4, 0x4804);
    if (VAR_6->type == VAR_0)
        FUNC_1(VAR_8, 0);
    else
        FUNC_3(VAR_8, VAR_9->track_essence_element_key + 12, 4);


    FUNC_5(VAR_8, 8, 0x4B01);

    if (VAR_5 == VAR_7->timecode_track && VAR_4->oformat == &VAR_3) {
        FUNC_1(VAR_8, VAR_7->tc.rate.num);
        FUNC_1(VAR_8, VAR_7->tc.rate.den);
    } else {
        FUNC_1(VAR_8, VAR_7->time_base.den);
        FUNC_1(VAR_8, VAR_7->time_base.num);
    }


    FUNC_5(VAR_8, 8, 0x4B02);
    FUNC_2(VAR_8, 0);


    FUNC_5(VAR_8, 16, 0x4803);
    FUNC_7(VAR_8, VAR_1, VAR_7->track_instance_count);
}
