
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;
typedef int gint64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct rlimit*) ;

gint64 FUNC_2() {



 struct rlimit VAR_1;

 if (-1 == FUNC_1(VAR_0, &VAR_1)) {
  return -1;
 } else {
  return VAR_1.rlim_cur;
 }


}
