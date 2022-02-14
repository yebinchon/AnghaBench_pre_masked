
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_VSC_CMPL_CB ;
typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,int ,int *,void*) ;
 void* FUNC_2 (int ) ;

tBTM_STATUS FUNC_3(UINT16 VAR_4, UINT8 VAR_5,
                                      UINT8 *VAR_6, tBTM_VSC_CMPL_CB *VAR_7)
{
    void *VAR_8;

    FUNC_0 ("BTM: BTM_VendorSpecificCommand: Opcode: 0x%04X, ParamLen: %i.",
                     VAR_4, VAR_5);


    if ((VAR_8 = FUNC_2((UINT16)(sizeof(BT_HDR) + sizeof (tBTM_CMPL_CB *) +
                                     VAR_5 + VAR_3))) != ((void*)0)) {

        FUNC_1 (VAR_8, VAR_4, VAR_5, VAR_6, (void *)VAR_7);


        if (VAR_7 != ((void*)0)) {
            return (VAR_0);
        } else {
            return (VAR_2);
        }
    } else {
        return (VAR_1);
    }

}
