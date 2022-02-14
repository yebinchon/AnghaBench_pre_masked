
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rusage {int ru_stime; int ru_utime; } ;
struct TYPE_2__ {int ru_stime; int ru_utime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct rusage*) ;
 int FUNC_1 (char*,double,double) ;
 TYPE_1__ VAR_2 ;
 double FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(void){
  if( VAR_1 ){
    struct rusage VAR_3;
    FUNC_0(VAR_0, &VAR_3);
    FUNC_1("CPU Time: user %f sys %f\n",
       FUNC_2(&VAR_2.ru_utime, &VAR_3.ru_utime),
       FUNC_2(&VAR_2.ru_stime, &VAR_3.ru_stime));
  }
}
