
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int called; } ;
typedef TYPE_1__ dummy_vfs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,int,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char const*,int const,int ) ;

__attribute__((used)) static void FUNC_5(dummy_vfs_t* VAR_3, const char* VAR_4,
        bool VAR_5, bool VAR_6, int VAR_7)
{
    const int VAR_8 = VAR_0 | VAR_2 | VAR_1;
    VAR_3->called = 0;
    int VAR_9 = FUNC_4(FUNC_2(), VAR_4, VAR_8, 0);
    FUNC_1(VAR_5, VAR_3->called, VAR_7,
            "should_be_called check failed");
    if (VAR_5) {
        if (VAR_6) {
            FUNC_0(VAR_9 >= 0, VAR_7, "should be opened");
        } else {
            FUNC_0(VAR_9 < 0, VAR_7, "should not be opened");
        }
    }
    FUNC_3(FUNC_2(), VAR_9);
}
