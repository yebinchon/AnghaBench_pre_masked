
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag11 {int a; } ;


 int FUNC_0 (int,int) ;
 struct tag11 VAR_0 ;

__attribute__((used)) static void FUNC_1() {
    struct tag11 *VAR_1 = &VAR_0;
    VAR_0 = 78;
    FUNC_0(78, (*VAR_1).a);
    FUNC_0(78, VAR_0);
    FUNC_0(78, VAR_1->a);
    VAR_1->a = 79;
    FUNC_0(79, (*VAR_1).a);
    FUNC_0(79, VAR_0);
    FUNC_0(79, VAR_1->a);
}
