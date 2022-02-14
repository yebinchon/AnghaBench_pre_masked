
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2) {
    VAR_0;
    FUNC_0("sub $8, #rsp");
    FUNC_0("movsd #xmm%d, (#rsp)", VAR_2);
    VAR_1 += 8;
}
