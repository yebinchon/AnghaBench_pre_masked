
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Token ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ File ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int *,int*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Token *VAR_1, File *VAR_2, bool VAR_3) {
    bool VAR_4;
    char *VAR_5 = FUNC_3(VAR_1, &VAR_4);
    FUNC_2();
    if (VAR_5[0] == '/') {
        if (FUNC_5("/", VAR_5, VAR_3))
            return;
        goto err;
    }
    if (!VAR_4) {
        char *VAR_6 = VAR_2->name ? FUNC_0(FUNC_4(VAR_2->name)) : ".";
        if (FUNC_5(VAR_6, VAR_5, VAR_3))
            return;
    }
    for (int VAR_7 = 0; VAR_7 < FUNC_7(VAR_0); VAR_7++)
        if (FUNC_5(FUNC_6(VAR_0, VAR_7), VAR_5, VAR_3))
            return;
  err:
    FUNC_1(VAR_1, "cannot find header file: %s", VAR_5);
}
