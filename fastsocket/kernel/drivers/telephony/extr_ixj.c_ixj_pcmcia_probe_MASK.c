
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long DSPbase; unsigned long XILINXbase; int cardtype; scalar_t__ board; } ;
typedef TYPE_1__ IXJ ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

IXJ *FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 IXJ *VAR_3 = FUNC_0();

 VAR_3->board = 0;

 VAR_3->DSPbase = VAR_1;
 VAR_3->XILINXbase = VAR_2;
 VAR_3->cardtype = VAR_0;
 FUNC_1(VAR_3);
 return VAR_3;
}
