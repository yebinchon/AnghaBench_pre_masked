
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {int (* io_open ) (TYPE_2__*,int *,char const*,int,int **) ;int avio_flags; int format_probesize; TYPE_5__* iformat; int pb; int flags; } ;
struct TYPE_10__ {char const* member_0; int member_2; int * member_1; } ;
typedef TYPE_1__ AVProbeData ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int ,TYPE_5__**,char const*,TYPE_2__*,int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_2__*,int *,char const*,int,int **) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5, const char *VAR_6,
                      AVDictionary **VAR_7)
{
    int VAR_8;
    AVProbeData VAR_9 = { VAR_6, ((void*)0), 0 };
    int VAR_10 = VAR_3;

    if (VAR_5->pb) {
        VAR_5->flags |= VAR_0;
        if (!VAR_5->iformat)
            return FUNC_1(VAR_5->pb, &VAR_5->iformat, VAR_6,
                                         VAR_5, 0, VAR_5->format_probesize);
        else if (VAR_5->iformat->flags & VAR_1)
            FUNC_0(VAR_5, VAR_4, "Custom AVIOContext makes no sense and "
                                      "will be ignored with AVFMT_NOFILE format.\n");
        return 0;
    }

    if ((VAR_5->iformat && VAR_5->iformat->flags & VAR_1) ||
        (!VAR_5->iformat && (VAR_5->iformat = FUNC_2(&VAR_9, 0, &VAR_10))))
        return VAR_10;

    if ((VAR_8 = VAR_5->io_open(VAR_5, &VAR_5->pb, VAR_6, VAR_2 | VAR_5->avio_flags, VAR_7)) < 0)
        return VAR_8;

    if (VAR_5->iformat)
        return 0;
    return FUNC_1(VAR_5->pb, &VAR_5->iformat, VAR_6,
                                 VAR_5, 0, VAR_5->format_probesize);
}
