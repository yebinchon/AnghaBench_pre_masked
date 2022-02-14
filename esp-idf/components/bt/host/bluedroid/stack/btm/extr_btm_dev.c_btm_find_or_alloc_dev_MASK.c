
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_SEC_DEV_REC ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;

tBTM_SEC_DEV_REC *FUNC_3 (BD_ADDR VAR_0)
{
    tBTM_SEC_DEV_REC *VAR_1;
    FUNC_0 ("btm_find_or_alloc_dev\n");
    if ((VAR_1 = FUNC_1 (VAR_0)) == ((void*)0)) {


        VAR_1 = FUNC_2 (VAR_0);
    }
    return (VAR_1);
}
