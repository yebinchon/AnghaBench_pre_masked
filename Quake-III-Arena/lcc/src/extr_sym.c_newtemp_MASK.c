
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* local ) (TYPE_1__*) ;} ;
struct TYPE_6__ {int defined; } ;
typedef TYPE_1__* Symbol ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;

Symbol FUNC_3(int VAR_1, int VAR_2, int VAR_3) {
 Symbol VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_2, VAR_3));

 (*VAR_0->local)(VAR_4);
 VAR_4->defined = 1;
 return VAR_4;
}
