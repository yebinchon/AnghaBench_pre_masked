
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syntax ;
struct arg_hdr {int flag; char* shortopts; char* longopts; char* datatype; int mincount; int maxcount; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char const*,char const*,char const*,int) ;
 int FUNC_1 (int *,struct arg_hdr**) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 scalar_t__ FUNC_3 (char*) ;

void FUNC_4(FILE *VAR_3, void * *VAR_4, const char *VAR_5)
{
    struct arg_hdr * *VAR_6 = (struct arg_hdr * *)VAR_4;
    int VAR_7, VAR_8;


    FUNC_1(VAR_3, VAR_6);


    for(VAR_8 = 0;
        VAR_6[VAR_8] && !(VAR_6[VAR_8]->flag & VAR_2);
        VAR_8++)
    {
        char VAR_9[200] = "";
        const char *VAR_10, *VAR_11, *VAR_12;


        if (VAR_6[VAR_8]->shortopts &&
            !(VAR_6[VAR_8]->flag & VAR_1))
            continue;

        VAR_10 = VAR_6[VAR_8]->shortopts;
        VAR_11 = VAR_6[VAR_8]->longopts;
        VAR_12 = VAR_6[VAR_8]->datatype;
        FUNC_0(VAR_9,
                       sizeof(VAR_9),
                       VAR_10,
                       VAR_11,
                       VAR_12,
                       VAR_6[VAR_8]->flag & VAR_0);

        if (FUNC_3(VAR_9) > 0)
        {

            for (VAR_7 = 0; VAR_7 < VAR_6[VAR_8]->mincount; VAR_7++)
                FUNC_2(VAR_3, " %s", VAR_9);


            switch ( VAR_6[VAR_8]->maxcount - VAR_6[VAR_8]->mincount )
            {
            case 0:
                break;
            case 1:
                FUNC_2(VAR_3, " [%s]", VAR_9);
                break;
            case 2:
                FUNC_2(VAR_3, " [%s] [%s]", VAR_9, VAR_9);
                break;
            default:
                FUNC_2(VAR_3, " [%s]...", VAR_9);
                break;
            }
        }
    }

    if (VAR_5)
        FUNC_2(VAR_3, "%s", VAR_5);
}
