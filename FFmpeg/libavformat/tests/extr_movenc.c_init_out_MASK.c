
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_4(const char *VAR_6)
{
    char VAR_7[100];
    VAR_0 = VAR_6;
    FUNC_3(VAR_7, sizeof(VAR_7), "%s.%s", VAR_0, VAR_1);

    FUNC_0(VAR_2);
    if (VAR_5) {
        VAR_3 = FUNC_1(VAR_7, "wb");
        if (!VAR_3)
            FUNC_2(VAR_7);
    }
    VAR_4 = 0;
}
