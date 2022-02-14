
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const hb_value_t ;
typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int) ;
 void* FUNC_5 (int const*,char*) ;
 int FUNC_6 (char*,char*) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const*) ;
 char* FUNC_11 (int const*) ;
 char* FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (char const*,char*) ;

__attribute__((used)) static int FUNC_15(const hb_dict_t *VAR_1)
{
    hb_value_array_t * VAR_2 = FUNC_5(VAR_1, "AudioList");
    int VAR_3 = FUNC_9(VAR_2);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        hb_value_t *VAR_5 = FUNC_8(VAR_2, VAR_4);
        hb_value_t *VAR_6;
        int VAR_7, VAR_8, VAR_9;
        VAR_6 = FUNC_5(VAR_5, "AudioEncoder");
        if (FUNC_13(VAR_6) == VAR_0)
        {
            VAR_7 = FUNC_2(FUNC_11(VAR_6));
        }
        else
        {
            VAR_7 = FUNC_10(VAR_6);
        }
        if (FUNC_1(VAR_7) == ((void*)0))
        {
            char *VAR_10 = FUNC_12(VAR_6);
            FUNC_6("Invalid audio encoder (%s)", VAR_10);
            FUNC_0(VAR_10);
            return -1;
        }

        VAR_6 = FUNC_5(VAR_5, "AudioMixdown");
        if (FUNC_13(VAR_6) == VAR_0)
        {
            VAR_8 = FUNC_2(FUNC_11(VAR_6));
        }
        else
        {
            VAR_8 = FUNC_10(VAR_6);
        }
        if (FUNC_7(VAR_8) == ((void*)0))
        {
            char *VAR_11 = FUNC_12(VAR_6);
            FUNC_6("Invalid audio mixdown (%s)", VAR_11);
            FUNC_0(VAR_11);
            return -1;
        }

        VAR_6 = FUNC_5(VAR_5, "AudioSamplerate");
        if (FUNC_13(VAR_6) == VAR_0)
        {
            const char *VAR_12 = FUNC_11(VAR_6);
            if (!FUNC_14(VAR_12, "source") ||
                !FUNC_14(VAR_12, "auto") ||
                !FUNC_14(VAR_12, "same as source"))
            {
                VAR_9 = 0;
            }
            else
            {
                VAR_9 = FUNC_3(VAR_12);
            }
        }
        else
        {
            VAR_9 = FUNC_10(VAR_6);
        }
        if (VAR_9 != 0 && FUNC_4(VAR_9) == ((void*)0))
        {
            char *VAR_13 = FUNC_12(VAR_6);
            FUNC_6("Invalid audio samplerate (%s)", VAR_13);
            FUNC_0(VAR_13);
            return -1;
        }
    }
    return 0;
}
