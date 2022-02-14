
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TokenKind ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

bool FUNC_5(TokenKind VAR_0) {
    if (FUNC_1(VAR_0)) {
        FUNC_2();
        return 1;
    } else {
        FUNC_0("Expected token %s, got %s", FUNC_4(VAR_0), FUNC_3());
        return 0;
    }
}
