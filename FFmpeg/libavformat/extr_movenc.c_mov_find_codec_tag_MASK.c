
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* oformat; int url; } ;
struct TYPE_12__ {scalar_t__ mode; TYPE_2__* par; int st; } ;
struct TYPE_11__ {int codec_id; int codec_tag; } ;
struct TYPE_10__ {int codec_tag; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 unsigned int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_6(AVFormatContext *VAR_4, MOVTrack *VAR_5)
{
    if (FUNC_3(VAR_5->st))
        return FUNC_2(VAR_3, VAR_5->par->codec_id);

    if (VAR_5->mode == VAR_1)
        if (!FUNC_1(VAR_4->url, "m4a") &&
            !FUNC_1(VAR_4->url, "m4v") &&
            !FUNC_1(VAR_4->url, "m4b"))
            FUNC_0(VAR_4, VAR_0, "Warning, extension is not .m4a nor .m4v "
                   "Quicktime/Ipod might not play the file\n");

    if (VAR_5->mode == VAR_2) {
        return FUNC_4(VAR_4, VAR_5);
    } else
        return FUNC_5(VAR_4->oformat->codec_tag, VAR_5->par->codec_tag,
                                  VAR_5->par->codec_id);
}
