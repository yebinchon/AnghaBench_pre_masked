
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StmtList ;
typedef int Stmt ;
typedef int SrcPos ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;

Stmt *FUNC_6(SrcPos VAR_2) {
    StmtList VAR_3 = FUNC_5();
    if (!FUNC_2(VAR_1)) {
        FUNC_1("Expected 'while' after 'do' block");
        return ((void*)0);
    }
    Stmt *VAR_4 = FUNC_3(VAR_2, FUNC_4(), VAR_3);
    FUNC_0(VAR_0);
    return VAR_4;
}
