
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection_id; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

UINT16 FUNC_2 (UINT16 VAR_3, UINT16 VAR_4)
{
    tGAP_CCB *VAR_5;

    if ((VAR_5 = FUNC_1 (VAR_3)) == ((void*)0)) {
        return (VAR_2);
    }

    if (FUNC_0 (VAR_5->connection_id, VAR_4, VAR_1)) {
        return (VAR_0);
    } else {
        return (VAR_2);
    }
}
