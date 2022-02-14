
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int r; int cp; } ;
struct TYPE_7__ {TYPE_1__ u1; } ;
typedef TYPE_2__ Reinst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(int VAR_8)
{
 Reinst *VAR_9;

 if(VAR_5)
  FUNC_1(VAR_0);
 VAR_9 = FUNC_0(VAR_8);

 if(VAR_8 == VAR_1 || VAR_8 == VAR_2)
  VAR_9->u1.cp = VAR_6;
 if(VAR_8 == VAR_3)
  VAR_9->u1.r = VAR_7;

 FUNC_2(VAR_9, VAR_9);
 VAR_5 = VAR_4;
}
