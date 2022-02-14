
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ty; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Node *VAR_0) {
    if (!FUNC_1(VAR_0->ty))
        FUNC_0("integer type expected, but got %s", FUNC_2(VAR_0));
}
