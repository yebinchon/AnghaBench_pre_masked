
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*) ;

hb_dict_t * FUNC_9(const char * VAR_2, int VAR_3)
{
    hb_dict_t * VAR_4 = ((void*)0);

    if (VAR_2 && *VAR_2)
    {
        char *VAR_5, *VAR_6, *VAR_7;
        const char *VAR_8;
        VAR_4 = FUNC_1();
        if( !VAR_4 )
            return ((void*)0);
        VAR_5 = VAR_6 = FUNC_8(VAR_2);
        if (VAR_6)
        {
            while (*VAR_5)
            {
                VAR_8 = VAR_5;
                VAR_5 += FUNC_7(VAR_5, ":");
                if (*VAR_5)
                {
                    *VAR_5 = 0;
                    VAR_5++;
                }
                VAR_7 = FUNC_6(VAR_8, '=');
                if (VAR_7)
                {
                    *VAR_7 = 0;
                    VAR_7++;
                }

                if (VAR_3 & VAR_0)
                    VAR_8 = FUNC_4(VAR_8);





                if (VAR_8 != ((void*)0))
                {
                    FUNC_2(VAR_4, VAR_8, FUNC_3(VAR_7));
                }
            }
        }
        FUNC_0(VAR_6);
    }
    return VAR_4;
}
