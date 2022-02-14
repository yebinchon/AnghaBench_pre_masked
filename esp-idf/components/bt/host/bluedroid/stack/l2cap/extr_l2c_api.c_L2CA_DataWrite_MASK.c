
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

UINT8 FUNC_2 (UINT16 VAR_1, BT_HDR *VAR_2)
{
    FUNC_0 ("L2CA_DataWrite()  CID: 0x%04x  Len: %d", VAR_1, VAR_2->len);
    return FUNC_1 (VAR_1, VAR_2, VAR_0);
}
