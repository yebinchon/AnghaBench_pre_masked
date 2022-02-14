
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int const*,char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char const*,char*,int) ;

__attribute__((used)) static hb_value_t* FUNC_16(const hb_dict_t * VAR_1, int *VAR_2)
{
    int VAR_3 = 0;
    hb_value_array_t *VAR_4, *VAR_5;

    if (VAR_2 != ((void*)0))
        *VAR_2 = 0;
    VAR_5 = FUNC_3(VAR_1, "AudioCopyMask");
    VAR_4 = FUNC_8();
    if (VAR_5 != ((void*)0))
    {
        int VAR_6, VAR_7;
        VAR_6 = FUNC_9(VAR_5);
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        {
            int VAR_8;
            hb_value_t *VAR_9;
            VAR_9 = FUNC_7(VAR_5, VAR_7);
            if (FUNC_14(VAR_9) == VAR_0)
            {
                char *VAR_10 = ((void*)0);
                const char * VAR_11 = FUNC_12(VAR_9);

                if (FUNC_15(VAR_11, "copy:", 5))
                {
                    VAR_11 = VAR_10 = FUNC_5("copy:%s", VAR_11);
                }
                VAR_8 = FUNC_1(VAR_11);
                if (VAR_8 == 0)
                {
                    FUNC_4("Invalid audio codec in autopassthru copy mask (%s)", VAR_11);
                    FUNC_4("Codec name is invalid or can not be copied");
                    FUNC_0(VAR_10);
                    FUNC_10(&VAR_4);
                    return ((void*)0);
                }
                FUNC_0(VAR_10);
            }
            else
            {
                VAR_8 = FUNC_11(VAR_9);
            }
            FUNC_6(VAR_4, FUNC_13(
                FUNC_2(VAR_8)));
            VAR_3 |= VAR_8;
        }
    }
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_3;
    return VAR_4;
}
