
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mdns_result_t ;
typedef int mdns_action_t ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*,char const*,int ,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static mdns_result_t* FUNC_6(const char * VAR_3, const char * VAR_4)
{
    VAR_2 = FUNC_4(((void*)0), VAR_3, VAR_4, VAR_1, 3000, 20);
    if (!VAR_2) {
        FUNC_1();
    }

    if (FUNC_5(VAR_0, VAR_2)) {
        FUNC_3(VAR_2);
        FUNC_1();
    }

    mdns_action_t * VAR_5 = ((void*)0);
    FUNC_0(&VAR_5);
    FUNC_2(VAR_5);
    return ((void*)0);
}
