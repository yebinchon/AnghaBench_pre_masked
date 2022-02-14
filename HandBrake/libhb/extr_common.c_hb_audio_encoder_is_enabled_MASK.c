
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int * FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_5)
{
    if (VAR_5 & VAR_4)
    {

        return 1;
    }
    switch (VAR_5)
    {
        case 137:
        case 136:
            return FUNC_1("libfdk_aac") != ((void*)0);

        case 140:
            return FUNC_0(VAR_0) != ((void*)0);

        case 134:
            return FUNC_0(VAR_1) != ((void*)0);

        case 133:
        case 132:
            return FUNC_0(VAR_2) != ((void*)0);

        case 129:
            return FUNC_0(VAR_3) != ((void*)0);


        case 131:
        case 128:
        case 130:
            return 1;

        default:
            return 0;
    }
}
