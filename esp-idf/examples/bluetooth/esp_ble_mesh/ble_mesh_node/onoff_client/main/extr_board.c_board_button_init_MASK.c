
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ button_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    button_handle_t VAR_4 = FUNC_0(VAR_2, VAR_0);
    if (VAR_4) {
        FUNC_1(VAR_4, VAR_1, VAR_3, "RELEASE");
    }
}
