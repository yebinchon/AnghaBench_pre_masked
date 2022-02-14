
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chbk {int wait; int flag; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 ( struct chbk * VAR_2 )
{
 FUNC_0(4, VAR_1, "timer");
        VAR_2->flag |= VAR_0;
        FUNC_1(&VAR_2->wait);
        return;
}
