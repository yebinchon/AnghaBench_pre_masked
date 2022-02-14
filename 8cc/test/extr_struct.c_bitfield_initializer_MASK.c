
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char a; char b; } ;


 int FUNC_0 (int,char) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1() {
    FUNC_0(2, VAR_0.a);
    FUNC_0(4, VAR_0.b);

    struct { char a:4; char b:4; } VAR_1 = { 2, 4 };
    FUNC_0(2, VAR_1.a);
    FUNC_0(4, VAR_1.b);
}
