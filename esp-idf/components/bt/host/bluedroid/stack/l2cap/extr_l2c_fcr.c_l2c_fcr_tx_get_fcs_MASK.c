
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; int len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static UINT16 FUNC_1 (BT_HDR *VAR_1)
{
    UINT8 *VAR_2 = ((UINT8 *) (VAR_1 + 1)) + VAR_1->offset;

    return (FUNC_0 (VAR_0, VAR_2, VAR_1->len));
}
