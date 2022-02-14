
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* m; } ;
struct TYPE_9__ {int * inst; TYPE_4__ se; } ;
struct TYPE_7__ {int * rsp; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef int Rune ;
typedef TYPE_3__ Relist ;
typedef int Reinst ;


 int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static Relist*
FUNC_1(Relist *VAR_0,
 Reinst *VAR_1,
 int VAR_2,
 Rune *VAR_3)
{
 Relist *VAR_4;

 for(VAR_4=VAR_0; VAR_4->inst; VAR_4++){
  if(VAR_4->inst == VAR_1){
   if(VAR_3 < VAR_4->se.m[0].s.rsp) {
    if(VAR_2 > 1)
     FUNC_0(&VAR_4->se, 0, sizeof(VAR_4->se));
    VAR_4->se.m[0].s.rsp = VAR_3;
   }
   return 0;
  }
 }
 VAR_4->inst = VAR_1;
 if(VAR_2 > 1)
  FUNC_0(&VAR_4->se, 0, sizeof(VAR_4->se));
 VAR_4->se.m[0].s.rsp = VAR_3;
 (++VAR_4)->inst = 0;
 return VAR_4;
}
