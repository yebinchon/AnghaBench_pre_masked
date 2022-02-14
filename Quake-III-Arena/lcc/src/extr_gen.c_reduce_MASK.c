
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_15__ {int inst; } ;
struct TYPE_18__ {TYPE_4__** syms; TYPE_2__ x; } ;
struct TYPE_16__ {int usecount; } ;
struct TYPE_17__ {TYPE_3__ x; int name; scalar_t__ temporary; } ;
struct TYPE_14__ {short** _nts; scalar_t__* _isinstruction; int (* _kids ) (TYPE_5__*,int,TYPE_5__**) ;} ;
struct TYPE_13__ {TYPE_1__ x; } ;
typedef TYPE_5__* Node ;


 TYPE_12__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_5__* FUNC_4 (TYPE_5__*,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_5__*,int,TYPE_5__**) ;

__attribute__((used)) static void FUNC_6(Node VAR_3, int VAR_4) {
 int VAR_5, VAR_6;
 short *VAR_7;
 Node VAR_8[10];

 VAR_3 = FUNC_4(VAR_3, VAR_4);
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 VAR_7 = VAR_0->x._nts[VAR_5];
 (*VAR_0->x._kids)(VAR_3, VAR_5, VAR_8);
 for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
  FUNC_6(VAR_8[VAR_6], VAR_7[VAR_6]);
 if (VAR_0->x._isinstruction[VAR_5]) {
  FUNC_0(VAR_3->x.inst == 0 || VAR_3->x.inst == VAR_4);
  VAR_3->x.inst = VAR_4;
  if (VAR_3->syms[VAR_1] && VAR_3->syms[VAR_1]->temporary) {
   FUNC_1(FUNC_2(VAR_2, "(using %s)\n", VAR_3->syms[VAR_1]->name));
   VAR_3->syms[VAR_1]->x.usecount++;
  }
 }
}
