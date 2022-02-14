
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ nb_chapters; } ;
struct TYPE_12__ {int mode; int flags; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_2__*,char*,char*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,char*,char*) ;
 int FUNC_11 (TYPE_2__*,int *,char*,char*,int ) ;

__attribute__((used)) static int FUNC_12(AVIOContext *VAR_4, MOVMuxContext *VAR_5,
                              AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7;
    int VAR_8, VAR_9;
    uint8_t *VAR_10;

    VAR_8 = FUNC_2(&VAR_7);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_5->mode & VAR_2) {
        FUNC_6(VAR_7, VAR_6, "perf", "artist");
        FUNC_6(VAR_7, VAR_6, "titl", "title");
        FUNC_6(VAR_7, VAR_6, "auth", "author");
        FUNC_6(VAR_7, VAR_6, "gnre", "genre");
        FUNC_6(VAR_7, VAR_6, "dscp", "comment");
        FUNC_6(VAR_7, VAR_6, "albm", "album");
        FUNC_6(VAR_7, VAR_6, "cprt", "copyright");
        FUNC_6(VAR_7, VAR_6, "yrrc", "date");
        FUNC_8(VAR_6, VAR_7);
    } else if (VAR_5->mode == VAR_3 && !(VAR_5->flags & VAR_1)) {
        FUNC_11(VAR_6, VAR_7, "\251ART", "artist", 0);
        FUNC_11(VAR_6, VAR_7, "\251nam", "title", 0);
        FUNC_11(VAR_6, VAR_7, "\251aut", "author", 0);
        FUNC_11(VAR_6, VAR_7, "\251alb", "album", 0);
        FUNC_11(VAR_6, VAR_7, "\251day", "date", 0);
        FUNC_11(VAR_6, VAR_7, "\251swr", "encoder", 0);

        FUNC_11(VAR_6, VAR_7, "\251des", "comment", 0);

        FUNC_11(VAR_6, VAR_7, "\251cmt", "comment", 0);
        FUNC_11(VAR_6, VAR_7, "\251gen", "genre", 0);
        FUNC_11(VAR_6, VAR_7, "\251cpy", "copyright", 0);
        FUNC_11(VAR_6, VAR_7, "\251mak", "make", 0);
        FUNC_11(VAR_6, VAR_7, "\251mod", "model", 0);
        FUNC_11(VAR_6, VAR_7, "\251xyz", "location", 0);
        FUNC_11(VAR_6, VAR_7, "\251key", "keywords", 0);
        FUNC_10(VAR_6, VAR_7, "XMP_", "xmp");
    } else {

        FUNC_9(VAR_7, VAR_5, VAR_6);
        FUNC_8(VAR_6, VAR_7);
    }

    if (VAR_6->nb_chapters && !(VAR_5->flags & VAR_0))
        FUNC_7(VAR_7, VAR_6);

    if ((VAR_9 = FUNC_1(VAR_7, &VAR_10)) > 0) {
        FUNC_3(VAR_4, VAR_9 + 8);
        FUNC_5(VAR_4, "udta");
        FUNC_4(VAR_4, VAR_10, VAR_9);
    }
    FUNC_0(VAR_10);

    return 0;
}
