
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; TYPE_2__** wildcard; } ;
struct TYPE_7__ {char* name; TYPE_1__ x; } ;
typedef TYPE_2__* Symbol ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;

Symbol FUNC_1(Symbol *VAR_1) {
 Symbol VAR_2;

 FUNC_0(VAR_2, VAR_0);
 VAR_2->name = VAR_2->x.name = "wildcard";
 VAR_2->x.wildcard = VAR_1;
 return VAR_2;
}
