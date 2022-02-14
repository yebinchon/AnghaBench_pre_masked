
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_frames; int time_base; } ;
struct TYPE_6__ {scalar_t__ codec_type; int flags; double width; double height; int time_base; } ;
struct TYPE_5__ {float quality; int file_index; int index; double* error; int data_size; int pict_type; TYPE_4__* st; TYPE_2__* enc_ctx; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__,char*,int,...) ;
 int FUNC_6 (char*) ;
 double FUNC_7 (double) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(OutputStream *VAR_6, int VAR_7)
{
    AVCodecContext *VAR_8;
    int VAR_9;
    double VAR_10, VAR_11, VAR_12;


    if (!VAR_3) {
        VAR_3 = FUNC_4(VAR_4, "w");
        if (!VAR_3) {
            FUNC_6("fopen");
            FUNC_3(1);
        }
    }

    VAR_8 = VAR_6->enc_ctx;
    if (VAR_8->codec_type == VAR_0) {
        VAR_9 = VAR_6->st->nb_frames;
        if (VAR_5 <= 1) {
            FUNC_5(VAR_3, "frame= %5d q= %2.1f ", VAR_9,
                    VAR_6->quality / (float)VAR_2);
        } else {
            FUNC_5(VAR_3, "out= %2d st= %2d frame= %5d q= %2.1f ", VAR_6->file_index, VAR_6->index, VAR_9,
                    VAR_6->quality / (float)VAR_2);
        }

        if (VAR_6->error[0]>=0 && (VAR_8->flags & VAR_1))
            FUNC_5(VAR_3, "PSNR= %6.2d ", FUNC_7(VAR_6->error[0] / (VAR_8->width * VAR_8->height * 255.0 * 255.0)));

        FUNC_5(VAR_3,"f_size= %6d ", VAR_7);

        VAR_10 = FUNC_2(VAR_6->st) * FUNC_1(VAR_6->st->time_base);
        if (VAR_10 < 0.01)
            VAR_10 = 0.01;

        VAR_11 = (VAR_7 * 8) / FUNC_1(VAR_8->time_base) / 1000.0;
        VAR_12 = (double)(VAR_6->data_size * 8) / VAR_10 / 1000.0;
        FUNC_5(VAR_3, "s_size= %8.0dkB time= %0.3f br= %7.1fkbits/s avg_br= %7.1fkbits/s ",
               (double)VAR_6->data_size / 1024, VAR_10, VAR_11, VAR_12);
        FUNC_5(VAR_3, "type= %c\n", FUNC_0(VAR_6->pict_type));
    }
}
