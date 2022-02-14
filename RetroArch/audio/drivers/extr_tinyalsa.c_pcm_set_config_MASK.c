
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_sw_params {int period_step; int avail_min; int start_threshold; int stop_threshold; int xfer_align; int boundary; scalar_t__ silence_threshold; scalar_t__ silence_size; int tstamp_mode; int flags; } ;
struct snd_pcm_hw_params {int period_step; int avail_min; int start_threshold; int stop_threshold; int xfer_align; int boundary; scalar_t__ silence_threshold; scalar_t__ silence_size; int tstamp_mode; int flags; } ;
struct pcm_config {int channels; int rate; int period_size; int period_count; int start_threshold; int stop_threshold; scalar_t__ silence_threshold; int format; } ;
struct pcm {int flags; int noirq_frames_per_msec; int buffer_size; scalar_t__ mmap_buffer; int boundary; int fd; struct pcm_config config; } ;
typedef int sparams ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_1 (int ,int ,struct snd_pcm_sw_params*) ;
 int FUNC_2 (struct snd_pcm_sw_params*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int,int,int ,int ) ;
 void* FUNC_4 (struct snd_pcm_sw_params*,int ) ;
 int FUNC_5 (struct snd_pcm_sw_params*) ;
 int FUNC_6 (struct snd_pcm_sw_params*,int ,int) ;
 int FUNC_7 (struct snd_pcm_sw_params*,int ,int ) ;
 int FUNC_8 (struct snd_pcm_sw_params*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct pcm*,int) ;

__attribute__((used)) static int FUNC_12(struct pcm *VAR_29, const struct pcm_config *VAR_30)
{
    struct snd_pcm_sw_params VAR_31;
    struct snd_pcm_hw_params VAR_32;

    if (VAR_29 == ((void*)0))
        return -VAR_0;

    if (VAR_30)
        VAR_29->config = *VAR_30;
    else
    {
        VAR_30 = &VAR_29->config;
        VAR_29->config.channels = 2;
        VAR_29->config.rate = 48000;
        VAR_29->config.period_size = 1024;
        VAR_29->config.period_count = 4;
        VAR_29->config.format = VAR_6;
        VAR_29->config.start_threshold = VAR_30->period_count * VAR_30->period_size;
        VAR_29->config.stop_threshold = VAR_30->period_count * VAR_30->period_size;
        VAR_29->config.silence_threshold = 0;
    }

    FUNC_5(&VAR_32);
    FUNC_7(&VAR_32, VAR_17,
                   FUNC_9(VAR_30->format));
    FUNC_7(&VAR_32, VAR_23,
                   VAR_26);
    FUNC_8(&VAR_32, VAR_20, VAR_30->period_size);
    FUNC_6(&VAR_32, VAR_22,
                  FUNC_10(VAR_30->format));
    FUNC_6(&VAR_32, VAR_18,
                  FUNC_10(VAR_30->format) * VAR_30->channels);
    FUNC_6(&VAR_32, VAR_16,
                  VAR_30->channels);
    FUNC_6(&VAR_32, VAR_19, VAR_30->period_count);
    FUNC_6(&VAR_32, VAR_21, VAR_30->rate);

    if (VAR_29->flags & VAR_9)
    {
        if (!(VAR_29->flags & VAR_8))
        {
            FUNC_0("[TINYALSA]: noirq only currently supported with mmap().");
            return -VAR_1;
        }

        VAR_32.flags |= VAR_14;
        VAR_29->noirq_frames_per_msec = VAR_30->rate / 1000;
    }

    if (VAR_29->flags & VAR_8)
        FUNC_7(&VAR_32, VAR_15,
                   VAR_12);
    else
        FUNC_7(&VAR_32, VAR_15,
                   VAR_13);

    if (FUNC_1(VAR_29->fd, VAR_24, &VAR_32))
    {
        FUNC_0("[TINYALSA]: cannot set HW params.");
        return -VAR_28;
    }


    VAR_29->config.period_size = FUNC_4(&VAR_32, VAR_20);
    VAR_29->config.period_count = FUNC_4(&VAR_32, VAR_19);
    VAR_29->buffer_size = VAR_30->period_count * VAR_30->period_size;

    if (VAR_29->flags & VAR_8)
    {
        VAR_29->mmap_buffer = FUNC_3(((void*)0), FUNC_11(VAR_29, VAR_29->buffer_size),
                                VAR_10 | VAR_11, VAR_4 | VAR_5, VAR_29->fd, 0);
        if (VAR_29->mmap_buffer == VAR_3)
        {
            FUNC_0("[TINYALSA]: failed to mmap buffer %d bytes\n",
                 FUNC_11(VAR_29, VAR_29->buffer_size));
            return -VAR_28;
        }
    }

    FUNC_2(&VAR_31, 0, sizeof(VAR_31));
    VAR_31.tstamp_mode = VAR_27;
    VAR_31.period_step = 1;
    VAR_31.avail_min = 1;

    if (!VAR_30->start_threshold)
    {
        if (VAR_29->flags & VAR_7)
            VAR_29->config.start_threshold = VAR_31.start_threshold = 1;
        else
            VAR_29->config.start_threshold = VAR_31.start_threshold =
                VAR_30->period_count * VAR_30->period_size / 2;
    } else
        VAR_31.start_threshold = VAR_30->start_threshold;


    if (!VAR_30->stop_threshold)
    {
        if (VAR_29->flags & VAR_7)
            VAR_29->config.stop_threshold = VAR_31.stop_threshold =
                VAR_30->period_count * VAR_30->period_size * 10;
        else
            VAR_29->config.stop_threshold = VAR_31.stop_threshold =
                VAR_30->period_count * VAR_30->period_size;
    }
    else
        VAR_31.stop_threshold = VAR_30->stop_threshold;

    VAR_31.xfer_align = VAR_30->period_size / 2;
    VAR_31.silence_size = 0;
    VAR_31.silence_threshold = VAR_30->silence_threshold;
    VAR_29->boundary = VAR_31.boundary = VAR_29->buffer_size;

    while (VAR_29->boundary * 2 <= VAR_2 - VAR_29->buffer_size)
        VAR_29->boundary *= 2;

    if (FUNC_1(VAR_29->fd, VAR_25, &VAR_31))
    {
        FUNC_0("[TINYALSA]: Cannot set HW params.\n");
        return -VAR_28;
    }

    return 0;
}
