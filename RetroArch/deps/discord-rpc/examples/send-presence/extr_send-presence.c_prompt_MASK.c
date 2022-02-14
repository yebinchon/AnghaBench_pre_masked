
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(char* VAR_2, size_t VAR_3)
{
    int VAR_4;
    char* VAR_5;
    FUNC_2("\n> ");
    FUNC_0(VAR_1);
    VAR_4 = FUNC_1(VAR_2, (int)VAR_3, VAR_0) ? 1 : 0;
    VAR_2[VAR_3 - 1] = 0;
    VAR_5 = FUNC_3(VAR_2, '\n');
    if (VAR_5) {
        *VAR_5 = 0;
    }
    return VAR_4;
}
