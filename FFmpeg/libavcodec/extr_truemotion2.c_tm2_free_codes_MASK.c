
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ table; } ;
struct TYPE_4__ {TYPE_3__ vlc; int recode; } ;
typedef TYPE_1__ TM2Codes ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(TM2Codes *VAR_0)
{
    FUNC_0(VAR_0->recode);
    if (VAR_0->vlc.table)
        FUNC_1(&VAR_0->vlc);
}
