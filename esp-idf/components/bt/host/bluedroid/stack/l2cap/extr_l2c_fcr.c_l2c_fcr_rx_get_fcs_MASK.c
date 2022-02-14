
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__) ;

__attribute__((used)) static UINT16 FUNC_1 (BT_HDR *VAR_2)
{
    UINT8 *VAR_3 = ((UINT8 *) (VAR_2 + 1)) + VAR_2->offset;


    VAR_3 -= VAR_1;

    return (FUNC_0 (VAR_0, VAR_3, VAR_2->len + VAR_1));
}
