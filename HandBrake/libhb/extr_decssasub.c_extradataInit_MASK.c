
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* subtitle; int file; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_4__ {int extradata_size; int * extradata; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int ) ;
 char* FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6( hb_work_private_t * VAR_0 )
{
    int VAR_1 = 0;
    char * VAR_2 = "[Events]";
    char * VAR_3 = "Format:";
    int VAR_4 = FUNC_4(VAR_2);;
    int VAR_5 = FUNC_4(VAR_3);;
    char * VAR_6 = ((void*)0);

    while (1)
    {
        char * VAR_7 = ((void*)0);
        ssize_t VAR_8;
        size_t VAR_9 = 0;

        VAR_8 = FUNC_1(&VAR_7, &VAR_9, VAR_0->file);
        if (VAR_8 < 0)
        {

            FUNC_0(VAR_6);
            return 1;
        }
        if (VAR_8 > 0 && VAR_7 != ((void*)0))
        {
            if (VAR_6 != ((void*)0))
            {
                char * VAR_10 = VAR_6;
                VAR_6 = FUNC_2("%s%s", VAR_6, VAR_7);
                FUNC_0(VAR_10);
            }
            else
            {
                VAR_6 = FUNC_3(VAR_7);
            }
            if (!VAR_1)
            {
                if (VAR_8 >= VAR_4 &&
                    !FUNC_5(VAR_7, VAR_2, VAR_4))
                {
                    VAR_1 = 1;
                }
            }
            else
            {
                if (VAR_8 >= VAR_5 &&
                    !FUNC_5(VAR_7, VAR_3, VAR_5))
                {
                    FUNC_0(VAR_7);
                    break;
                }

                FUNC_0(VAR_6);
                return 1;
            }
        }
        FUNC_0(VAR_7);
    }
    VAR_0->subtitle->extradata = (uint8_t*)VAR_6;
    VAR_0->subtitle->extradata_size = FUNC_4(VAR_6) + 1;

    return 0;
}
