
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syntax ;
struct arg_hdr {int flag; char* shortopts; char* longopts; char* datatype; int mincount; int maxcount; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*,char const*,char const*,int,char*) ;
 int FUNC_1 (int *,char*,char const*,...) ;

void FUNC_2(FILE *VAR_2, void * *VAR_3, const char *VAR_4)
{
    struct arg_hdr * *VAR_5 = (struct arg_hdr * *)VAR_3;
    int VAR_6, VAR_7;


    for(VAR_7 = 0;
        VAR_5[VAR_7] && !(VAR_5[VAR_7]->flag & VAR_1);
        VAR_7++)
    {
        char VAR_8[200] = "";
        const char *VAR_9, *VAR_10, *VAR_11;

        VAR_9 = VAR_5[VAR_7]->shortopts;
        VAR_10 = VAR_5[VAR_7]->longopts;
        VAR_11 = VAR_5[VAR_7]->datatype;
        FUNC_0(VAR_8,
                        sizeof(VAR_8),
                        VAR_9,
                        VAR_10,
                        VAR_11,
                        VAR_5[VAR_7]->flag & VAR_0,
                        "|");


        for (VAR_6 = 0; VAR_6 < VAR_5[VAR_7]->mincount; VAR_6++)
            FUNC_1(VAR_2, " %s", VAR_8);


        switch ( VAR_5[VAR_7]->maxcount - VAR_5[VAR_7]->mincount )
        {
        case 0:
            break;
        case 1:
            FUNC_1(VAR_2, " [%s]", VAR_8);
            break;
        case 2:
            FUNC_1(VAR_2, " [%s] [%s]", VAR_8, VAR_8);
            break;
        default:
            FUNC_1(VAR_2, " [%s]...", VAR_8);
            break;
        }
    }

    if (VAR_4)
        FUNC_1(VAR_2, "%s", VAR_4);
}
