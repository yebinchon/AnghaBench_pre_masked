
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Token ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ File ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int *,int*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Token *VAR_1, File *VAR_2) {




    bool VAR_3;
    char *VAR_4 = FUNC_4(VAR_1, &VAR_3);
    FUNC_1();
    if (VAR_4[0] == '/') {
        if (FUNC_6("/", VAR_4, 0))
            return;
        goto err;
    }
    char *VAR_5 = FUNC_3(VAR_2->name);
    int VAR_6 = 0;
    for (; VAR_6 < FUNC_8(VAR_0); VAR_6++) {
        char *VAR_7 = FUNC_7(VAR_0, VAR_6);
        if (!FUNC_5(VAR_5, FUNC_3(FUNC_2("%s/%s", VAR_7, VAR_4))))
            break;
    }
    for (VAR_6++; VAR_6 < FUNC_8(VAR_0); VAR_6++)
        if (FUNC_6(FUNC_7(VAR_0, VAR_6), VAR_4, 0))
            return;
  err:
    FUNC_0(VAR_1, "cannot find header file: %s", VAR_4);
}
