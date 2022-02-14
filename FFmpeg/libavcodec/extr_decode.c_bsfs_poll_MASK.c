
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int nb_bsfs; int * bsfs; } ;
struct TYPE_6__ {TYPE_2__ filter; } ;
typedef TYPE_2__ DecodeFilterContext ;
typedef int AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, AVPacket *VAR_4)
{
    DecodeFilterContext *VAR_5 = &VAR_3->internal->filter;
    int VAR_6, VAR_7;


    VAR_6 = VAR_5->nb_bsfs - 1;
    while (VAR_6 >= 0) {

        VAR_7 = FUNC_1(VAR_5->bsfs[VAR_6], VAR_4);
        if (VAR_7 == FUNC_0(VAR_2)) {

            VAR_6--;
            continue;
        } else if (VAR_7 < 0 && VAR_7 != VAR_0) {
            return VAR_7;
        }



        if (VAR_6 == VAR_5->nb_bsfs - 1) {
            return VAR_7;
        } else {
            VAR_6++;
            VAR_7 = FUNC_2(VAR_5->bsfs[VAR_6], VAR_7 < 0 ? ((void*)0) : VAR_4);
            if (VAR_7 < 0) {
                FUNC_3(VAR_3, VAR_1,
                       "Error pre-processing a packet before decoding\n");
                FUNC_4(VAR_4);
                return VAR_7;
            }
        }
    }

    return FUNC_0(VAR_2);
}
