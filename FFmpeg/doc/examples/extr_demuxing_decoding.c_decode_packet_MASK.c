
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int time_base; } ;
struct TYPE_11__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; int coded_picture_number; size_t nb_samples; int * extended_data; int pts; int linesize; scalar_t__ data; } ;
struct TYPE_10__ {int size; scalar_t__ stream_index; } ;


 int FUNC_0 (int,int) ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (scalar_t__) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int const**,int ,scalar_t__,scalar_t__,scalar_t__) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_5__*,TYPE_2__*,int*,TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_2__*,int*,TYPE_1__*) ;
 int FUNC_9 (int ,char*,char*,...) ;
 TYPE_2__* VAR_4 ;
 int FUNC_10 (int ,int,size_t,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_11 (char*,char*,int ,size_t,...) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_12(int *VAR_18, int VAR_19)
{
    int VAR_20 = 0;
    int VAR_21 = VAR_7.size;

    *VAR_18 = 0;

    if (VAR_7.stream_index == VAR_16) {

        VAR_20 = FUNC_8(VAR_10, VAR_4, VAR_18, &VAR_7);
        if (VAR_20 < 0) {
            FUNC_9(VAR_9, "Error decoding video frame (%s)\n", FUNC_1(VAR_20));
            return VAR_20;
        }

        if (*VAR_18) {

            if (VAR_4->width != VAR_17 || VAR_4->height != VAR_5 ||
                VAR_4->format != VAR_6) {


                FUNC_9(VAR_9, "Error: Width, height and pixel format have to be "
                        "constant in a rawvideo file, but the width, height or "
                        "pixel format of the input video changed:\n"
                        "old: width = %s, height = %ld, format = %s\n"
                        "new: width = %ld, height = %ld, format = %s\n",
                        VAR_17, VAR_5, FUNC_4(VAR_6),
                        VAR_4->width, VAR_4->height,
                        FUNC_4(VAR_4->format));
                return -1;
            }

            FUNC_11("video_frame%s n:%d coded_n:%d\n",
                   VAR_19 ? "(cached)" : "",
                   VAR_15++, VAR_4->coded_picture_number);



            FUNC_5(VAR_12, VAR_14,
                          (const uint8_t **)(VAR_4->data), VAR_4->linesize,
                          VAR_6, VAR_17, VAR_5);


            FUNC_10(VAR_12[0], 1, VAR_11, VAR_13);
        }
    } else if (VAR_7.stream_index == VAR_3) {

        VAR_20 = FUNC_7(VAR_0, VAR_4, VAR_18, &VAR_7);
        if (VAR_20 < 0) {
            FUNC_9(VAR_9, "Error decoding audio frame (%s)\n", FUNC_1(VAR_20));
            return VAR_20;
        }




        VAR_21 = FUNC_0(VAR_20, VAR_7.size);

        if (*VAR_18) {
            size_t VAR_22 = VAR_4->nb_samples * FUNC_3(VAR_4->format);
            FUNC_11("audio_frame%s n:%d nb_samples:%d pts:%s\n",
                   VAR_19 ? "(cached)" : "",
                   VAR_2++, VAR_4->nb_samples,
                   FUNC_6(VAR_4->pts, &VAR_0->time_base));
            FUNC_10(VAR_4->extended_data[0], 1, VAR_22, VAR_1);
        }
    }



    if (*VAR_18 && VAR_8)
        FUNC_2(VAR_4);

    return VAR_21;
}
