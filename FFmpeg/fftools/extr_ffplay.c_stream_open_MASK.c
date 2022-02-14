
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int serial; } ;
struct TYPE_10__ {int serial; } ;
struct TYPE_9__ {int audio_clock_serial; int audio_volume; int read_tid; int av_sync_type; scalar_t__ muted; TYPE_5__ extclk; TYPE_4__ audioq; TYPE_5__ audclk; TYPE_4__ videoq; TYPE_5__ vidclk; int continue_read_thread; TYPE_4__ subtitleq; int sampq; int subpq; int pictq; scalar_t__ xleft; scalar_t__ ytop; int * iformat; int filename; } ;
typedef TYPE_1__ VideoState ;
typedef int AVInputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *,TYPE_4__*,int ,int) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static VideoState *FUNC_11(const char *VAR_9, AVInputFormat *VAR_10)
{
    VideoState *VAR_11;

    VAR_11 = FUNC_5(sizeof(VideoState));
    if (!VAR_11)
        return ((void*)0);
    VAR_11->filename = FUNC_6(VAR_9);
    if (!VAR_11->filename)
        goto fail;
    VAR_11->iformat = VAR_10;
    VAR_11->ytop = 0;
    VAR_11->xleft = 0;


    if (FUNC_7(&VAR_11->pictq, &VAR_11->videoq, VAR_5, 1) < 0)
        goto fail;
    if (FUNC_7(&VAR_11->subpq, &VAR_11->subtitleq, VAR_4, 0) < 0)
        goto fail;
    if (FUNC_7(&VAR_11->sampq, &VAR_11->audioq, VAR_2, 1) < 0)
        goto fail;

    if (FUNC_9(&VAR_11->videoq) < 0 ||
        FUNC_9(&VAR_11->audioq) < 0 ||
        FUNC_9(&VAR_11->subtitleq) < 0)
        goto fail;

    if (!(VAR_11->continue_read_thread = FUNC_0())) {
        FUNC_4(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_2());
        goto fail;
    }

    FUNC_8(&VAR_11->vidclk, &VAR_11->videoq.serial);
    FUNC_8(&VAR_11->audclk, &VAR_11->audioq.serial);
    FUNC_8(&VAR_11->extclk, &VAR_11->extclk.serial);
    VAR_11->audio_clock_serial = -1;
    if (VAR_8 < 0)
        FUNC_4(((void*)0), VAR_1, "-volume=%d < 0, setting to 0\n", VAR_8);
    if (VAR_8 > 100)
        FUNC_4(((void*)0), VAR_1, "-volume=%d > 100, setting to 100\n", VAR_8);
    VAR_8 = FUNC_3(VAR_8, 0, 100);
    VAR_8 = FUNC_3(VAR_3 * VAR_8 / 100, 0, VAR_3);
    VAR_11->audio_volume = VAR_8;
    VAR_11->muted = 0;
    VAR_11->av_sync_type = VAR_6;
    VAR_11->read_tid = FUNC_1(VAR_7, "read_thread", VAR_11);
    if (!VAR_11->read_tid) {
        FUNC_4(((void*)0), VAR_0, "SDL_CreateThread(): %s\n", FUNC_2());
fail:
        FUNC_10(VAR_11);
        return ((void*)0);
    }
    return VAR_11;
}
