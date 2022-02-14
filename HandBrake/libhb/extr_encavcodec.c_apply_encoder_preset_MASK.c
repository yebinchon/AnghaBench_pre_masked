
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;






 int FUNC_0 (int **,char const*) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (int **,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_0, AVDictionary ** VAR_1,
                                const char * VAR_2)
{
    switch (VAR_0)
    {
        case 129:
            return FUNC_0(VAR_1, VAR_2);
        case 128:
            return FUNC_1(VAR_1, VAR_2);
        case 131:
        case 130:
             FUNC_2( VAR_1, "preset", VAR_2, 0);
             break;
        default:
            break;
    }

    return 0;
}
