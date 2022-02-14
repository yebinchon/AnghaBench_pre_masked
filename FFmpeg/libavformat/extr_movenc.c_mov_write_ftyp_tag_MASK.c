
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {char* major_brand; int mode; int flags; } ;
struct TYPE_7__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_15, AVFormatContext *VAR_16)
{
    MOVMuxContext *VAR_17 = VAR_16->priv_data;
    int64_t VAR_18 = FUNC_0(VAR_15);
    int VAR_19 = 0, VAR_20 = 0;
    int VAR_21 = 0x200;
    int VAR_22;

    for (VAR_22 = 0; VAR_22 < VAR_16->nb_streams; VAR_22++) {
        AVStream *VAR_23 = VAR_16->streams[VAR_22];
        if (FUNC_3(VAR_23))
            continue;
        if (VAR_23->codecpar->codec_type == VAR_0)
            VAR_20 = 1;
        if (VAR_23->codecpar->codec_id == VAR_1)
            VAR_19 = 1;
    }

    FUNC_1(VAR_15, 0);
    FUNC_2(VAR_15, "ftyp");

    if (VAR_17->major_brand && FUNC_4(VAR_17->major_brand) >= 4)
        FUNC_2(VAR_15, VAR_17->major_brand);
    else if (VAR_17->mode == VAR_8) {
        FUNC_2(VAR_15, VAR_19 ? "3gp6" : "3gp4");
        VAR_21 = VAR_19 ? 0x100 : 0x200;
    } else if (VAR_17->mode & VAR_7) {
        FUNC_2(VAR_15, VAR_19 ? "3g2b" : "3g2a");
        VAR_21 = VAR_19 ? 0x20000 : 0x10000;
    } else if (VAR_17->mode == VAR_14)
        FUNC_2(VAR_15, "MSNV");
    else if (VAR_17->mode == VAR_13 && VAR_17->flags & VAR_3)
        FUNC_2(VAR_15, "iso5");
    else if (VAR_17->mode == VAR_13 && VAR_17->flags & VAR_6)
        FUNC_2(VAR_15, "iso4");
    else if (VAR_17->mode == VAR_13)
        FUNC_2(VAR_15, "isom");
    else if (VAR_17->mode == VAR_10)
        FUNC_2(VAR_15, VAR_20 ? "M4V ":"M4A ");
    else if (VAR_17->mode == VAR_11)
        FUNC_2(VAR_15, "isml");
    else if (VAR_17->mode == VAR_9)
        FUNC_2(VAR_15, "f4v ");
    else
        FUNC_2(VAR_15, "qt  ");

    FUNC_1(VAR_15, VAR_21);

    if (VAR_17->mode == VAR_12)
        FUNC_2(VAR_15, "qt  ");
    else if (VAR_17->mode == VAR_11) {
        FUNC_2(VAR_15, "piff");
    } else if (!(VAR_17->flags & VAR_3)) {
        FUNC_2(VAR_15, "isom");
        FUNC_2(VAR_15, "iso2");
        if (VAR_19)
            FUNC_2(VAR_15, "avc1");
    }



    if (VAR_17->flags & VAR_4 && VAR_17->mode != VAR_11)
        FUNC_2(VAR_15, "iso6");

    if (VAR_17->mode == VAR_8)
        FUNC_2(VAR_15, VAR_19 ? "3gp6":"3gp4");
    else if (VAR_17->mode & VAR_7)
        FUNC_2(VAR_15, VAR_19 ? "3g2b":"3g2a");
    else if (VAR_17->mode == VAR_14)
        FUNC_2(VAR_15, "MSNV");
    else if (VAR_17->mode == VAR_13)
        FUNC_2(VAR_15, "mp41");

    if (VAR_17->flags & VAR_2 && VAR_17->flags & VAR_5)
        FUNC_2(VAR_15, "dash");

    return FUNC_5(VAR_15, VAR_18);
}
