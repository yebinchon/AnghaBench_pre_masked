
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_5__ {int event; scalar_t__ offset; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(BT_HDR *VAR_2)
{
    VAR_2->event = VAR_0;
    if (VAR_2->offset == 0) {
        FUNC_0("offset cannot be 0");
        FUNC_2(VAR_2);
    }

    FUNC_1(VAR_2, (UINT16)(VAR_0 | VAR_1));
}
