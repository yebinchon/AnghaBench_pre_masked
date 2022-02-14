
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sample_rate; scalar_t__ channels; scalar_t__ chan_config; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_2, MPEG4AudioConfig *VAR_3)
{
    if (FUNC_3(VAR_2) < 112)
        return VAR_0;

    if (FUNC_4(VAR_2, 32) != FUNC_0('A','L','S','\0'))
        return VAR_0;



    VAR_3->sample_rate = FUNC_4(VAR_2, 32);

    if (VAR_3->sample_rate <= 0) {
        FUNC_1(((void*)0), VAR_1, "Invalid sample rate %d\n", VAR_3->sample_rate);
        return VAR_0;
    }


    FUNC_5(VAR_2, 32);


    VAR_3->chan_config = 0;
    VAR_3->channels = FUNC_2(VAR_2, 16) + 1;

    return 0;
}
