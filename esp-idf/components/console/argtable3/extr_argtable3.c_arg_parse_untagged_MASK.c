
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; int (* scanfn ) (void*,char*) ;void* parent; scalar_t__ shortopts; scalar_t__ longopts; } ;
typedef void arg_end ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,int,char const*) ;
 int VAR_2 ;
 int FUNC_1 (void*,char*) ;

__attribute__((used)) static
void FUNC_2(int VAR_3,
                        char * *VAR_4,
                        struct arg_hdr * *VAR_5,
                        struct arg_end *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8 = 0;
    const char *VAR_9 = ((void*)0);
    void *VAR_10 = ((void*)0);


    while (!(VAR_5[VAR_7]->flag & VAR_1))
    {
        void *VAR_11;
        int VAR_12;


        if (VAR_2 >= VAR_3)
        {

            return;
        }


        if (VAR_5[VAR_7]->longopts || VAR_5[VAR_7]->shortopts)
        {

            VAR_7++;
            continue;
        }


        if (!(VAR_5[VAR_7]->scanfn))
        {

            VAR_7++;
            continue;
        }




        VAR_11 = VAR_5[VAR_7]->parent;
        VAR_12 = VAR_5[VAR_7]->scanfn(VAR_11, VAR_4[VAR_2]);
        if (VAR_12 == 0)
        {


            VAR_2++;


            VAR_8 = 0;
        }
        else
        {


            VAR_7++;


            VAR_8 = VAR_12;
            VAR_9 = VAR_4[VAR_2];
            VAR_10 = VAR_11;
        }

    }


    if (VAR_8)
    {
        FUNC_0(VAR_6, VAR_10, VAR_8, VAR_9);
        VAR_2++;
    }



    while (VAR_2 < VAR_3)
    {

        FUNC_0(VAR_6, VAR_6, VAR_0, VAR_4[VAR_2++]);
    }

    return;
}
