
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;





 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static bool FUNC_7(uint32_t VAR_0, void *VAR_1)
{
    switch (VAR_0) {
    case 128:
        FUNC_5(((void*)0));
        break;
    case 129:
        FUNC_4(((void*)0));
        break;
    case 132:
        FUNC_2(VAR_1);
        break;
    case 131:
        FUNC_1();
        break;
    case 130:
        FUNC_3();
        break;
    default:
        FUNC_0("media task unhandled evt: 0x%x\n", VAR_0);
    }

    if (VAR_1 != ((void*)0)) {
        FUNC_6(VAR_1);
    }

    return 1;
}
