
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ maxcount; } ;
struct arg_int {scalar_t__ count; long* ival; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 long FUNC_1 (char const*,char**,int) ;
 long FUNC_2 (char const*,char const**,char,int) ;

__attribute__((used)) static int FUNC_3(struct arg_int *VAR_5, const char *VAR_6)
{
    int VAR_7 = 0;

    if (VAR_5->count == VAR_5->hdr.maxcount)
    {

        VAR_7 = VAR_1;
    }
    else if (!VAR_6)
    {



        VAR_5->count++;
    }
    else
    {
        long int VAR_8;
        const char *VAR_9;


        VAR_8 = FUNC_2(VAR_6, &VAR_9, 'X', 16);
        if (VAR_9 == VAR_6)
        {

            VAR_8 = FUNC_2(VAR_6, &VAR_9, 'O', 8);
            if (VAR_9 == VAR_6)
            {

                VAR_8 = FUNC_2(VAR_6, &VAR_9, 'B', 2);
                if (VAR_9 == VAR_6)
                {

                    VAR_8 = FUNC_1(VAR_6, (char * *)&VAR_9, 10);
                    if (VAR_9 == VAR_6)
                    {

                        return VAR_0;
                    }
                }
            }
        }



        if ( VAR_8 > VAR_3 || VAR_8 < VAR_4 )
            VAR_7 = VAR_2;



        if (FUNC_0(VAR_9, "KB"))
        {
            if ( VAR_8 > (VAR_3 / 1024) || VAR_8 < (VAR_4 / 1024) )
                VAR_7 = VAR_2;
            else
                VAR_8 *= 1024;
        }
        else if (FUNC_0(VAR_9, "MB"))
        {
            if ( VAR_8 > (VAR_3 / 1048576) || VAR_8 < (VAR_4 / 1048576) )
                VAR_7 = VAR_2;
            else
                VAR_8 *= 1048576;
        }
        else if (FUNC_0(VAR_9, "GB"))
        {
            if ( VAR_8 > (VAR_3 / 1073741824) || VAR_8 < (VAR_4 / 1073741824) )
                VAR_7 = VAR_2;
            else
                VAR_8 *= 1073741824;
        }
        else if (!FUNC_0(VAR_9, ""))
            VAR_7 = VAR_0;


        if (VAR_7 == 0)
            VAR_5->ival[VAR_5->count++] = VAR_8;
    }


    return VAR_7;
}
