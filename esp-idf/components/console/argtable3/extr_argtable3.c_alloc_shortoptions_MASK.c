
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; char* shortopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static
char * FUNC_2(struct arg_hdr * *VAR_3)
{
    char *VAR_4;
    size_t VAR_5 = 2;
    int VAR_6;


    for(VAR_6 = 0; !(VAR_3[VAR_6]->flag & VAR_2); VAR_6++)
    {
        struct arg_hdr *VAR_7 = VAR_3[VAR_6];
        VAR_5 += 3 * (VAR_7->shortopts ? FUNC_1(VAR_7->shortopts) : 0);
    }

    VAR_4 = FUNC_0(VAR_5);
    if (VAR_4)
    {
        char *VAR_8 = VAR_4;



        *VAR_8++ = ':';

        for(VAR_6 = 0; !(VAR_3[VAR_6]->flag & VAR_2); VAR_6++)
        {
            struct arg_hdr *VAR_9 = VAR_3[VAR_6];
            const char *VAR_10 = VAR_9->shortopts;
            while(VAR_10 && *VAR_10)
            {
                *VAR_8++ = *VAR_10++;
                if (VAR_9->flag & VAR_1)
                    *VAR_8++ = ':';
                if (VAR_9->flag & VAR_0)
                    *VAR_8++ = ':';
            }
        }

        *VAR_8 = 0;
    }


    return VAR_4;
}
