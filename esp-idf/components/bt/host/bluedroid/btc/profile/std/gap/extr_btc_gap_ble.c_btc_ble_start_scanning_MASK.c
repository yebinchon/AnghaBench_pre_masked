
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tBTA_START_STOP_SCAN_CMPL_CBACK ;
typedef int tBTA_DM_SEARCH_CBACK ;


 int FUNC_0 (int,int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_0,
                                   tBTA_DM_SEARCH_CBACK *VAR_1,
                                   tBTA_START_STOP_SCAN_CMPL_CBACK *VAR_2)
{
    if ((VAR_1 != ((void*)0)) && (VAR_2 != ((void*)0))) {




        FUNC_0(1, VAR_0, VAR_1, VAR_2);
    } else {
        FUNC_1("The start_scan_cb or results_cb invalid\n");
    }
}
