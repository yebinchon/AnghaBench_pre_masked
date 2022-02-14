
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;
typedef int rlim_t ;
typedef int gint64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct rlimit*) ;
 int FUNC_4 (int ,struct rlimit*) ;

int FUNC_5(gint64 VAR_3) {
 struct rlimit VAR_4;
 rlim_t VAR_5;
 rlim_t VAR_6;

 if (-1 == FUNC_3(VAR_1, &VAR_4)) {
  return -1;
 }

 VAR_5 = VAR_4.rlim_cur;
 VAR_6 = VAR_4.rlim_max;

 VAR_4.rlim_cur = VAR_3;
 if (VAR_6 < VAR_3) {
  VAR_4.rlim_max = VAR_3;
 }

 if (-1 == FUNC_4(VAR_1, &VAR_4)) {
  return -1;
 }

 return 0;

}
