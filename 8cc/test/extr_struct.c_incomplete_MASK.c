
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1() {
    struct tag1;
    struct tag2 { struct tag1 *p; };
    struct tag1 { int x; };

    struct tag1 VAR_0 = { 3 };
    struct tag2 VAR_1 = { &VAR_0 };
    FUNC_0(3, VAR_1>x);
}
