
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2() {
    FUNC_0("", FUNC_1(""));
    FUNC_0("3", FUNC_1("%d", 3));
    FUNC_0("3,1.0,6,2.0,abc", FUNC_1("%d,%.1f,%d,%.1f,%s", 3, 1.0, 6, 2.0, "abc"));
}
