
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int val; int has_arg; scalar_t__* flag; } ;
struct longoptions {int noptions; struct option* options; scalar_t__ getoptval; } ;
struct arg_hdr {int flag; char* longopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static
struct longoptions * FUNC_3(struct arg_hdr * *VAR_3)
{
    struct longoptions *VAR_4;
    size_t VAR_5;
    int VAR_6 = 1;
    size_t VAR_7 = 0;
    int VAR_8;
    VAR_8 = 0;
    do
    {
        const char *VAR_9 = VAR_3[VAR_8]->longopts;
        VAR_7 += (VAR_9 ? FUNC_2(VAR_9) : 0) + 1;
        while (VAR_9)
        {
            VAR_6++;
            VAR_9 = FUNC_1(VAR_9 + 1, ',');
        }
    } while(!(VAR_3[VAR_8++]->flag & VAR_2));





    VAR_5 = sizeof(struct longoptions)
             + sizeof(struct option) * VAR_6
             + VAR_7;
    VAR_4 = (struct longoptions *)FUNC_0(VAR_5);
    if (VAR_4)
    {
        int VAR_10 = 0;
        char *VAR_11;

        VAR_4->getoptval = 0;
        VAR_4->noptions = VAR_6;
        VAR_4->options = (struct option *)(VAR_4 + 1);
        VAR_11 = (char *)(VAR_4->options + VAR_6);

        for(VAR_8 = 0; !(VAR_3[VAR_8]->flag & VAR_2); VAR_8++)
        {
            const char *VAR_12 = VAR_3[VAR_8]->longopts;

            while(VAR_12 && *VAR_12)
            {
                char *VAR_13 = VAR_11;


                while (*VAR_12 != 0 && *VAR_12 != ',')
                    *VAR_11++ = *VAR_12++;
                *VAR_11++ = 0;
                if (*VAR_12 == ',')
                    VAR_12++;


                VAR_4->options[VAR_10].name = VAR_13;
                VAR_4->options[VAR_10].flag = &(VAR_4->getoptval);
                VAR_4->options[VAR_10].val = VAR_8;
                if (VAR_3[VAR_8]->flag & VAR_0)
                    VAR_4->options[VAR_10].has_arg = 2;
                else if (VAR_3[VAR_8]->flag & VAR_1)
                    VAR_4->options[VAR_10].has_arg = 1;
                else
                    VAR_4->options[VAR_10].has_arg = 0;

                VAR_10++;
            }
        }

        VAR_4->options[VAR_10].name = 0;
        VAR_4->options[VAR_10].has_arg = 0;
        VAR_4->options[VAR_10].flag = 0;
        VAR_4->options[VAR_10].val = 0;
    }


    return VAR_4;
}
