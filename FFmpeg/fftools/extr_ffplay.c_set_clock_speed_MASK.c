
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double speed; int serial; } ;
typedef TYPE_1__ Clock ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(Clock *VAR_0, double VAR_1)
{
    FUNC_1(VAR_0, FUNC_0(VAR_0), VAR_0->serial);
    VAR_0->speed = VAR_1;
}
