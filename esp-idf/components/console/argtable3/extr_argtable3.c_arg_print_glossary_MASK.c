
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syntax ;
struct arg_hdr {int flag; char* glossary; char* shortopts; char* longopts; char* datatype; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*,char const*,char const*,int,char*) ;
 int FUNC_1 (int *,char const*,char*,char const*) ;

void FUNC_2(FILE *VAR_2, void * *VAR_3, const char *VAR_4)
{
    struct arg_hdr * *VAR_5 = (struct arg_hdr * *)VAR_3;
    int VAR_6;

    VAR_4 = VAR_4 ? VAR_4 : "  %-20s %s\n";
    for (VAR_6 = 0; !(VAR_5[VAR_6]->flag & VAR_1); VAR_6++)
    {
        if (VAR_5[VAR_6]->glossary)
        {
            char VAR_7[200] = "";
            const char *VAR_8 = VAR_5[VAR_6]->shortopts;
            const char *VAR_9 = VAR_5[VAR_6]->longopts;
            const char *VAR_10 = VAR_5[VAR_6]->datatype;
            const char *VAR_11 = VAR_5[VAR_6]->glossary;
            FUNC_0(VAR_7,
                            sizeof(VAR_7),
                            VAR_8,
                            VAR_9,
                            VAR_10,
                            VAR_5[VAR_6]->flag & VAR_0,
                            ", ");
            FUNC_1(VAR_2, VAR_4, VAR_7, VAR_11);
        }
    }
}
