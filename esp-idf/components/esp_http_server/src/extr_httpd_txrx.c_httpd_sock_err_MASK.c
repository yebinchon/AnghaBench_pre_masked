
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, int VAR_6)
{
    int VAR_7;
    FUNC_0(VAR_3, FUNC_1("error in %s : %d"), VAR_5, VAR_4);

    switch(VAR_4) {
    case 133:
    case 130:
        VAR_7 = VAR_2;
        break;
    case 129:
    case 132:
    case 131:
    case 128:
        VAR_7 = VAR_1;
        break;
    default:
        VAR_7 = VAR_0;
    }
    return VAR_7;
}
