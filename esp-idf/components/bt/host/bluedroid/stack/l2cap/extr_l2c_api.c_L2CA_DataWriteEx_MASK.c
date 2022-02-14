
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

UINT8 FUNC_2 (UINT16 VAR_0, BT_HDR *VAR_1, UINT16 VAR_2)
{
    FUNC_0 ("L2CA_DataWriteEx()  CID: 0x%04x  Len: %d Flags:0x%04X",
                     VAR_0, VAR_1->len, VAR_2);
    return FUNC_1 (VAR_0, VAR_1, VAR_2);
}
