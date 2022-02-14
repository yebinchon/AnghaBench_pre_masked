
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_10(hb_value_t *VAR_1)
{
    hb_value_t *VAR_2;

    if ((VAR_2 = FUNC_0(VAR_1, "x264Preset")) != ((void*)0))
         FUNC_1(VAR_1, "VideoPreset", FUNC_2(VAR_2));
    if ((VAR_2 = FUNC_0(VAR_1, "x264Tune")) != ((void*)0))
         FUNC_1(VAR_1, "VideoTune", FUNC_2(VAR_2));
    if ((VAR_2 = FUNC_0(VAR_1, "h264Profile")) != ((void*)0))
         FUNC_1(VAR_1, "VideoProfile", FUNC_2(VAR_2));
    if ((VAR_2 = FUNC_0(VAR_1, "h264Level")) != ((void*)0))
         FUNC_1(VAR_1, "VideoLevel", FUNC_2(VAR_2));
    if ((VAR_2 = FUNC_0(VAR_1, "x264OptionExtra")) != ((void*)0))
        FUNC_1(VAR_1, "VideoOptionExtra", FUNC_2(VAR_2));



    if ((VAR_2 = FUNC_0(VAR_1, "VideoTune")) != ((void*)0))
    {
        const char *VAR_3;
        VAR_3 = FUNC_5(VAR_2);


        if (VAR_3 != ((void*)0) && !FUNC_9(VAR_3, "none", 4))
        {
            VAR_3 += 4;
            if (VAR_3[0] == ',')
            {
                VAR_3++;
            }
        }
        if (VAR_3 != ((void*)0))
        {
            FUNC_1(VAR_1, "VideoTune", FUNC_7(VAR_3));
        }
    }

    if (FUNC_4(FUNC_0(VAR_1, "VideoQualityType")) == 0)
    {

        FUNC_1(VAR_1, "VideoQualityType", FUNC_6(1));
    }

    if (FUNC_3(FUNC_0(VAR_1, "VideoFrameratePFR")))
    {
        FUNC_1(VAR_1, "VideoFramerateMode", FUNC_7("pfr"));
    }
    else if (FUNC_3(FUNC_0(VAR_1, "VideoFramerateCFR")))
    {
        FUNC_1(VAR_1, "VideoFramerateMode", FUNC_7("cfr"));
    }
    else if (FUNC_3(FUNC_0(VAR_1, "VideoFramerateVFR")))
    {
        FUNC_1(VAR_1, "VideoFramerateMode", FUNC_7("vfr"));
    }

    const char *VAR_4;
    int VAR_5;
    VAR_4 = FUNC_5(FUNC_0(VAR_1, "VideoEncoder"));
    VAR_5 = FUNC_8(VAR_4);
    if (VAR_5 & VAR_0)
    {
        if ((VAR_2 = FUNC_0(VAR_1, "lavcOption")) != ((void*)0))
            FUNC_1(VAR_1, "VideoOptionExtra", FUNC_2(VAR_2));
    }
}
