
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uncompressed_size; } ;
typedef TYPE_1__ unz_file_info ;
typedef int unzFile ;
typedef int uint8 ;
typedef int gzFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int) ;

uint8 *FUNC_14(char *VAR_1, int *VAR_2)
{
    int VAR_3 = 0;
    uint8 *VAR_4 = ((void*)0);

    if(FUNC_0(VAR_1))
    {
        unzFile *VAR_5 = ((void*)0);
        unz_file_info VAR_6;
        int VAR_7 = 0;


        VAR_5 = FUNC_11(VAR_1);
        if(!VAR_5) return (((void*)0));


        VAR_7 = FUNC_10(VAR_5);
        if(VAR_7 != VAR_0)
        {
            FUNC_7(VAR_5);
            return (((void*)0));
        }

        VAR_7 = FUNC_9(VAR_5, &VAR_6, VAR_1, 128, ((void*)0), 0, ((void*)0), 0);
        if(VAR_7 != VAR_0)
        {
            FUNC_7(VAR_5);
            return (((void*)0));
        }


        VAR_7 = FUNC_12(VAR_5);
        if(VAR_7 != VAR_0)
        {
            FUNC_7(VAR_5);
            return (((void*)0));
        }


        VAR_3 = VAR_6.uncompressed_size;
        VAR_4 = FUNC_6(VAR_3);
        if(!VAR_4)
        {
            FUNC_7(VAR_5);
            return (((void*)0));
        }


        VAR_7 = FUNC_13(VAR_5, VAR_4, VAR_6.uncompressed_size);
        if(VAR_7 != VAR_6.uncompressed_size)
        {
            FUNC_1(VAR_4);
            FUNC_8(VAR_5);
            FUNC_7(VAR_5);
            return (((void*)0));
        }


        VAR_7 = FUNC_8(VAR_5);
        if(VAR_7 != VAR_0)
        {
            FUNC_1(VAR_4);
            FUNC_7(VAR_5);
            return (((void*)0));
        }


        VAR_7 = FUNC_7(VAR_5);
        if(VAR_7 != VAR_0)
        {
            FUNC_1(VAR_4);
            return (((void*)0));
        }


        *VAR_2 = VAR_3;
        return (VAR_4);
    }
    else
    {
        gzFile *VAR_8 = ((void*)0);


        VAR_8 = FUNC_3(VAR_1, "rb");
        if(!VAR_8) return (0);


        VAR_3 = FUNC_5(VAR_8);


        VAR_4 = FUNC_6(VAR_3);
        if(!VAR_4)
        {
            FUNC_2(VAR_8);
            return (0);
        }


        FUNC_4(VAR_8, VAR_4, VAR_3);


        FUNC_2(VAR_8);


        *VAR_2 = VAR_3;
        return (VAR_4);
    }
}
