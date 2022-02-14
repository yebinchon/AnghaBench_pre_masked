
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_HF_CLIENT_DATA ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(tBTA_HF_CLIENT_DATA *VAR_2)
{
    if (!FUNC_4 (VAR_1)) {
        FUNC_0("BTA HF Client is already disabled, ignoring ...");
        return;
    }


    FUNC_3(VAR_1);

    FUNC_1(VAR_0, VAR_2);

    FUNC_2 (VAR_1, ((void*)0));
}
