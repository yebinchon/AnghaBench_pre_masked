
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef enum MXFMetadataSetType { ____Placeholder_MXFMetadataSetType } MXFMetadataSetType ;
struct TYPE_14__ {TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_13__ {scalar_t__ buf_ptr; } ;
struct TYPE_12__ {int track_instance_count; int * timecode_track; } ;
typedef int MXFPackage ;
typedef TYPE_1__ MXFContext ;
typedef int AVStream ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_3, AVStream *VAR_4, MXFPackage *VAR_5)
{
    MXFContext *VAR_6 = VAR_3->priv_data;
    AVIOContext *VAR_7 = VAR_3->pb;
    enum MXFMetadataSetType VAR_8;

    FUNC_4(VAR_7, 0x010f00);
    FUNC_0(VAR_3, "sequence key", VAR_7->buf_ptr - 16);
    FUNC_1(VAR_7, 80);

    FUNC_3(VAR_7, 16, 0x3C0A);
    FUNC_6(VAR_7, VAR_0, VAR_6->track_instance_count);

    FUNC_0(VAR_3, "sequence uid", VAR_7->buf_ptr - 16);
    FUNC_2(VAR_3, VAR_4);


    FUNC_3(VAR_7, 16 + 8, 0x1001);
    FUNC_5(VAR_7, 1);
    if (VAR_4 == VAR_6->timecode_track)
        VAR_8 = VAR_2;
    else
        VAR_8 = VAR_1;

    FUNC_6(VAR_7, VAR_8, VAR_6->track_instance_count);
}
