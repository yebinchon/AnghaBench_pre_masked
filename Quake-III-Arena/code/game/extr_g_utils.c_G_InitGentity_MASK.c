
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ownerNum; } ;
struct TYPE_5__ {TYPE_3__* number; } ;
struct TYPE_7__ {char* classname; TYPE_2__ r; TYPE_1__ s; int inuse; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0( gentity_t *VAR_3 ) {
 VAR_3->inuse = VAR_2;
 VAR_3->classname = "noclass";
 VAR_3->s.number = VAR_3 - VAR_1;
 VAR_3->r.ownerNum = VAR_0;
}
