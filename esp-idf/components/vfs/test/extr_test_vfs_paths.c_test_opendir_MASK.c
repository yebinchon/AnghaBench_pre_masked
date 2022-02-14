
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int called; } ;
typedef TYPE_1__ dummy_vfs_t ;
typedef int DIR ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,int,int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(dummy_vfs_t* VAR_0, const char* VAR_1,
        bool VAR_2, bool VAR_3, int VAR_4)
{
    VAR_0->called = 0;
    DIR* VAR_5 = FUNC_3(VAR_1);
    FUNC_1(VAR_2, VAR_0->called, VAR_4,
            "should_be_called check failed");
    if (VAR_2) {
        if (VAR_3) {
            FUNC_0(VAR_5 != ((void*)0), VAR_4, "should be opened");
        } else {
            FUNC_0(VAR_5 == 0, VAR_4, "should not be opened");
        }
    }
    if (VAR_5) {
        FUNC_2(VAR_5);
    }
}
