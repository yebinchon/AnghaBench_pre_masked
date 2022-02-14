
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int flags; int start; } ;
struct TYPE_7__ {TYPE_1__ tc; int timecode_base; int track_instance_count; } ;
typedef int MXFPackage ;
typedef TYPE_2__ MXFContext ;
typedef int AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_2, AVStream *VAR_3, MXFPackage *VAR_4)
{
    MXFContext *VAR_5 = VAR_2->priv_data;
    AVIOContext *VAR_6 = VAR_2->pb;

    FUNC_6(VAR_6, 0x011400);
    FUNC_3(VAR_6, 75);


    FUNC_5(VAR_6, 16, 0x3C0A);
    FUNC_7(VAR_6, VAR_1, VAR_5->track_instance_count);

    FUNC_4(VAR_2, VAR_3);


    FUNC_5(VAR_6, 8, 0x1501);
    FUNC_2(VAR_6, VAR_5->tc.start);


    FUNC_5(VAR_6, 2, 0x1502);
    FUNC_1(VAR_6, VAR_5->timecode_base);


    FUNC_5(VAR_6, 1, 0x1503);
    FUNC_0(VAR_6, !!(VAR_5->tc.flags & VAR_0));
}
