
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
 int FUNC_1 (int *,int,int,char const*) ;
 int FUNC_2 (int *,char*,char*,...) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (char*) ;

void FUNC_6(FILE *VAR_2, void * *VAR_3 )
{
    struct arg_hdr * *VAR_4 = (struct arg_hdr * *)VAR_3;
    int VAR_5;

    for(VAR_5 = 0; !(VAR_4[VAR_5]->flag & VAR_1); VAR_5++)
    {
        if (VAR_4[VAR_5]->glossary)
        {
            char VAR_6[200] = "";
            const char *VAR_7 = VAR_4[VAR_5]->shortopts;
            const char *VAR_8 = VAR_4[VAR_5]->longopts;
            const char *VAR_9 = VAR_4[VAR_5]->datatype;
            const char *VAR_10 = VAR_4[VAR_5]->glossary;

            if ( !VAR_7 && VAR_8 )
            {

                FUNC_4( VAR_6, ' ', 4 );
                *(VAR_6 + 4) = '\0';
            }

            FUNC_0(VAR_6,
                            sizeof(VAR_6),
                            VAR_7,
                            VAR_8,
                            VAR_9,
                            VAR_4[VAR_5]->flag & VAR_0,
                            ", ");


            if ( FUNC_5(VAR_6) > 25 )
            {
                FUNC_2( VAR_2, "  %-25s %s\n", VAR_6, "" );
                *VAR_6 = '\0';
            }

            FUNC_2( VAR_2, "  %-25s ", VAR_6 );
            FUNC_1( VAR_2, 28, 79, VAR_10 );
        }
    }

    FUNC_3( '\n', VAR_2 );
}
