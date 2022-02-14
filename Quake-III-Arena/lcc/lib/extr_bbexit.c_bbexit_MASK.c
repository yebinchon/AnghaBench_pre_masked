
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void) {
 FILE *VAR_2;

 if (VAR_0 != &VAR_1 && (VAR_2 = FUNC_1("prof.out", "a"))) {
  for ( ; VAR_0 != &VAR_1; VAR_0 = VAR_0->link)
   FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_2);
 }
}
