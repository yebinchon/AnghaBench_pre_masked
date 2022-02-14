
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int sample_fmt; int channels; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int *,int ,int,int ,int ) ;
 int ** FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int **) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(uint8_t ***VAR_2,
                                  AVCodecContext *VAR_3,
                                  int VAR_4)
{
    int VAR_5;





    if (!(*VAR_2 = FUNC_4(VAR_3->channels,
                                            sizeof(**VAR_2)))) {
        FUNC_5(VAR_1, "Could not allocate converted input sample pointers\n");
        return FUNC_0(VAR_0);
    }



    if ((VAR_5 = FUNC_3(*VAR_2, ((void*)0),
                                  VAR_3->channels,
                                  VAR_4,
                                  VAR_3->sample_fmt, 0)) < 0) {
        FUNC_5(VAR_1,
                "Could not allocate converted input samples (error '%s')\n",
                FUNC_1(VAR_5));
        FUNC_2(&(*VAR_2)[0]);
        FUNC_6(*VAR_2);
        return VAR_5;
    }
    return 0;
}
