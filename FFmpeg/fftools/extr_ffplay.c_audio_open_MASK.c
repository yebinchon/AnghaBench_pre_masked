
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct AudioParams {int freq; int channels; scalar_t__ frame_size; scalar_t__ bytes_per_sec; int fmt; int channel_layout; } ;
typedef int int64_t ;
struct TYPE_4__ {int channels; int freq; int size; int format; void* userdata; int callback; int samples; scalar_t__ silence; } ;
typedef TYPE_1__ SDL_AudioSpec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,TYPE_1__*,TYPE_1__*,int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ,char*,...) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int *,int,int,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(void *VAR_11, int64_t VAR_12, int VAR_13, int VAR_14, struct AudioParams *VAR_15)
{
    SDL_AudioSpec VAR_16, VAR_17;
    const char *VAR_18;
    static const int VAR_19[] = {0, 0, 1, 6, 2, 6, 4, 6};
    static const int VAR_20[] = {0, 44100, 48000, 96000, 192000};
    int VAR_21 = FUNC_2(VAR_20) - 1;

    VAR_18 = FUNC_5("SDL_AUDIO_CHANNELS");
    if (VAR_18) {
        VAR_13 = FUNC_6(VAR_18);
        VAR_12 = FUNC_8(VAR_13);
    }
    if (!VAR_12 || VAR_13 != FUNC_7(VAR_12)) {
        VAR_12 = FUNC_8(VAR_13);
        VAR_12 &= ~VAR_1;
    }
    VAR_13 = FUNC_7(VAR_12);
    VAR_16.channels = VAR_13;
    VAR_16.freq = VAR_14;
    if (VAR_16.freq <= 0 || VAR_16.channels <= 0) {
        FUNC_9(((void*)0), VAR_2, "Invalid sample rate or channel count!\n");
        return -1;
    }
    while (VAR_21 && VAR_20[VAR_21] >= VAR_16.freq)
        VAR_21--;
    VAR_16.format = VAR_0;
    VAR_16.silence = 0;
    VAR_16.samples = FUNC_0(VAR_8, 2 << FUNC_10(VAR_16.freq / VAR_7));
    VAR_16.callback = VAR_10;
    VAR_16.userdata = VAR_11;
    while (!(VAR_9 = FUNC_4(((void*)0), 0, &VAR_16, &VAR_17, VAR_6 | VAR_5))) {
        FUNC_9(((void*)0), VAR_3, "SDL_OpenAudio (%d channels, %d Hz): %s\n",
               VAR_16.channels, VAR_16.freq, FUNC_3());
        VAR_16.channels = VAR_19[FUNC_1(7, VAR_16.channels)];
        if (!VAR_16.channels) {
            VAR_16.freq = VAR_20[VAR_21--];
            VAR_16.channels = VAR_13;
            if (!VAR_16.freq) {
                FUNC_9(((void*)0), VAR_2,
                       "No more combinations to try, audio open failed\n");
                return -1;
            }
        }
        VAR_12 = FUNC_8(VAR_16.channels);
    }
    if (VAR_17.format != VAR_0) {
        FUNC_9(((void*)0), VAR_2,
               "SDL advised audio format %d is not supported!\n", VAR_17.format);
        return -1;
    }
    if (VAR_17.channels != VAR_16.channels) {
        VAR_12 = FUNC_8(VAR_17.channels);
        if (!VAR_12) {
            FUNC_9(((void*)0), VAR_2,
                   "SDL advised channel count %d is not supported!\n", VAR_17.channels);
            return -1;
        }
    }

    VAR_15->fmt = VAR_4;
    VAR_15->freq = VAR_17.freq;
    VAR_15->channel_layout = VAR_12;
    VAR_15->channels = VAR_17.channels;
    VAR_15->frame_size = FUNC_11(((void*)0), VAR_15->channels, 1, VAR_15->fmt, 1);
    VAR_15->bytes_per_sec = FUNC_11(((void*)0), VAR_15->channels, VAR_15->freq, VAR_15->fmt, 1);
    if (VAR_15->bytes_per_sec <= 0 || VAR_15->frame_size <= 0) {
        FUNC_9(((void*)0), VAR_2, "av_samples_get_buffer_size failed\n");
        return -1;
    }
    return VAR_17.size;
}
