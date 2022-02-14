
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int flags; scalar_t__ start_time; int interrupt_callback; } ;
struct TYPE_18__ {int flags; int interrupt_callback; TYPE_2__* priv_data; } ;
struct TYPE_17__ {TYPE_7__* avf; scalar_t__ segment_time_metadata; TYPE_1__* files; TYPE_1__* cur_file; } ;
struct TYPE_16__ {scalar_t__ start_time; scalar_t__ duration; scalar_t__ file_start_time; scalar_t__ file_inpoint; scalar_t__ inpoint; int metadata; int url; } ;
typedef TYPE_1__ ConcatFile ;
typedef TYPE_2__ ConcatContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int ) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (TYPE_7__**) ;
 int FUNC_5 (TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_7__**,int ,int *,int *) ;
 int FUNC_7 (TYPE_7__*,int,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (TYPE_7__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_5, unsigned VAR_6)
{
    ConcatContext *VAR_7 = VAR_5->priv_data;
    ConcatFile *VAR_8 = &VAR_7->files[VAR_6];
    int VAR_9;

    if (VAR_7->avf)
        FUNC_4(&VAR_7->avf);

    VAR_7->avf = FUNC_3();
    if (!VAR_7->avf)
        return FUNC_0(VAR_3);

    VAR_7->avf->flags |= VAR_5->flags & ~VAR_0;
    VAR_7->avf->interrupt_callback = VAR_5->interrupt_callback;

    if ((VAR_9 = FUNC_8(VAR_7->avf, VAR_5)) < 0)
        return VAR_9;

    if ((VAR_9 = FUNC_6(&VAR_7->avf, VAR_8->url, ((void*)0), ((void*)0))) < 0 ||
        (VAR_9 = FUNC_5(VAR_7->avf, ((void*)0))) < 0) {
        FUNC_2(VAR_5, VAR_1, "Impossible to open '%s'\n", VAR_8->url);
        FUNC_4(&VAR_7->avf);
        return VAR_9;
    }
    VAR_7->cur_file = VAR_8;
    VAR_8->start_time = !VAR_6 ? 0 :
                       VAR_7->files[VAR_6 - 1].start_time +
                       VAR_7->files[VAR_6 - 1].duration;
    VAR_8->file_start_time = (VAR_7->avf->start_time == VAR_2) ? 0 : VAR_7->avf->start_time;
    VAR_8->file_inpoint = (VAR_8->inpoint == VAR_2) ? VAR_8->file_start_time : VAR_8->inpoint;
    VAR_8->duration = FUNC_9(VAR_8, VAR_7->avf);

    if (VAR_7->segment_time_metadata) {
        FUNC_1(&VAR_8->metadata, "lavf.concatdec.start_time", VAR_8->start_time, 0);
        if (VAR_8->duration != VAR_2)
            FUNC_1(&VAR_8->metadata, "lavf.concatdec.duration", VAR_8->duration, 0);
    }

    if ((VAR_9 = FUNC_10(VAR_5)) < 0)
        return VAR_9;
    if (VAR_8->inpoint != VAR_2) {
       if ((VAR_9 = FUNC_7(VAR_7->avf, -1, VAR_4, VAR_8->inpoint, VAR_8->inpoint, 0)) < 0)
           return VAR_9;
    }
    return 0;
}
