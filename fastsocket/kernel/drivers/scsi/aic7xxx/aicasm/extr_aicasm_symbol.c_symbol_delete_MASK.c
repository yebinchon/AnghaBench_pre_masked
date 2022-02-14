
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* linfo; TYPE_2__* cinfo; TYPE_2__* finfo; TYPE_2__* ainfo; TYPE_2__* rinfo; } ;
struct TYPE_11__ {int type; struct TYPE_11__* name; TYPE_1__ info; int symrefs; } ;
typedef TYPE_2__ symbol_t ;
struct TYPE_13__ {int (* del ) (TYPE_4__*,TYPE_3__*,int ) ;} ;
struct TYPE_12__ {int size; TYPE_2__* data; } ;
typedef TYPE_3__ DBT ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_0 ;

void
FUNC_4(symbol_t *VAR_1)
{
 if (VAR_0 != ((void*)0)) {
  DBT VAR_2;

  VAR_2.data = VAR_1->name;
  VAR_2.size = FUNC_1(VAR_1->name);
  VAR_0->del(VAR_0, &VAR_2, 0);
 }
 switch(VAR_1->type) {
 case 130:
 case 129:
 case 131:
  if (VAR_1->info.rinfo != ((void*)0))
   FUNC_0(VAR_1->info.rinfo);
  break;
 case 139:
  if (VAR_1->info.ainfo != ((void*)0))
   FUNC_0(VAR_1->info.ainfo);
  break;
 case 132:
 case 134:
 case 136:
 case 135:
  if (VAR_1->info.finfo != ((void*)0)) {
   FUNC_3(&VAR_1->info.finfo->symrefs);
   FUNC_0(VAR_1->info.finfo);
  }
  break;
 case 137:
 case 138:
  if (VAR_1->info.cinfo != ((void*)0))
   FUNC_0(VAR_1->info.cinfo);
  break;
 case 133:
  if (VAR_1->info.linfo != ((void*)0))
   FUNC_0(VAR_1->info.linfo);
  break;
 case 128:
 default:
  break;
 }
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1);
}
