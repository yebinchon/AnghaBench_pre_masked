
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* regnode; int name; } ;
struct TYPE_6__ {int number; int mask; int set; TYPE_1__ x; int name; } ;
typedef TYPE_2__* Symbol ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;

Symbol FUNC_2(char *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
 Symbol VAR_5;

 FUNC_0(VAR_5, VAR_0);
 VAR_5->name = VAR_5->x.name = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_5->x.regnode, VAR_0);
 VAR_5->x.regnode->number = VAR_2;
 VAR_5->x.regnode->mask = VAR_3<<VAR_2;
 VAR_5->x.regnode->set = VAR_4;
 return VAR_5;
}
