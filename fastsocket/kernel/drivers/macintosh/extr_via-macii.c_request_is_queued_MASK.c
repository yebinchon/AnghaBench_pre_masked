
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {struct adb_request* next; } ;


 struct adb_request* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct adb_request *VAR_1) {
 struct adb_request *VAR_2;
 unsigned long VAR_3;
 FUNC_1(VAR_3);
 VAR_2 = VAR_0;
 while (VAR_2) {
  if (VAR_2 == VAR_1) {
   FUNC_0(VAR_3);
   return 1;
  }
  VAR_2 = VAR_2->next;
 }
 FUNC_0(VAR_3);
 return 0;
}
