
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct start_and_end {long start; long end; } ;


 int FUNC_0 (char const*,char*,long*,long*,long*,long*,long*,long*,long*,long*) ;

__attribute__((used)) static int
FUNC_1( const char* VAR_0, struct start_and_end *VAR_1 )
{


    long VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10;

    VAR_10 = FUNC_0(VAR_0, "%ld:%ld:%ld,%ld --> %ld:%ld:%ld,%ld\n",
                    &VAR_2, &VAR_3, &VAR_4, &VAR_5,
                    &VAR_6, &VAR_7, &VAR_8, &VAR_9);
    if (VAR_10 != 8)
    {
        VAR_10 = FUNC_0(VAR_0, "%ld:%ld:%ld.%ld --> %ld:%ld:%ld.%ld\n",
                        &VAR_2, &VAR_3, &VAR_4, &VAR_5,
                        &VAR_6, &VAR_7, &VAR_8, &VAR_9);
        if (VAR_10 != 8)
        {
            return 0;
        }
    }
    VAR_1->start =
        VAR_5 + VAR_4*1000 + VAR_3*60*1000 + VAR_2*60*60*1000;
    VAR_1->end =
        VAR_9 + VAR_8*1000 + VAR_7*60*1000 + VAR_6*60*60*1000;
    return 1;
}
