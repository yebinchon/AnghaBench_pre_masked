
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t offset; } ;
typedef TYPE_1__ printbuffer ;
typedef int number_buffer ;
typedef int cJSON_bool ;
struct TYPE_7__ {double valuedouble; } ;
typedef TYPE_2__ cJSON ;


 unsigned char* FUNC_0 (TYPE_1__* const,size_t) ;
 unsigned char FUNC_1 () ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*,double*) ;

__attribute__((used)) static cJSON_bool FUNC_4(const cJSON * const VAR_0, printbuffer * const VAR_1)
{
    unsigned char *VAR_2 = ((void*)0);
    double VAR_3 = VAR_0->valuedouble;
    int VAR_4 = 0;
    size_t VAR_5 = 0;
    unsigned char VAR_6[26];
    unsigned char VAR_7 = FUNC_1();
    double VAR_8;

    if (VAR_1 == ((void*)0))
    {
        return 0;
    }


    if ((VAR_3 * 0) != 0)
    {
        VAR_4 = FUNC_2((char*)VAR_6, "null");
    }
    else
    {

        VAR_4 = FUNC_2((char*)VAR_6, "%1.15g", VAR_3);


        if ((FUNC_3((char*)VAR_6, "%lg", &VAR_8) != 1) || ((double)VAR_8 != VAR_3))
        {

            VAR_4 = FUNC_2((char*)VAR_6, "%1.17g", VAR_3);
        }
    }


    if ((VAR_4 < 0) || (VAR_4 > (int)(sizeof(VAR_6) - 1)))
    {
        return 0;
    }


    VAR_2 = FUNC_0(VAR_1, (size_t)VAR_4);
    if (VAR_2 == ((void*)0))
    {
        return 0;
    }



    for (VAR_5 = 0; VAR_5 < ((size_t)VAR_4); VAR_5++)
    {
        if (VAR_6[VAR_5] == VAR_7)
        {
            VAR_2[VAR_5] = '.';
            continue;
        }

        VAR_2[VAR_5] = VAR_6[VAR_5];
    }
    VAR_2[VAR_5] = '\0';

    VAR_1->offset += (size_t)VAR_4;

    return 1;
}
