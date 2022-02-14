
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (struct adb_request*) ;
 int FUNC_5 (struct adb_request*) ;

__attribute__((used)) static int FUNC_6(struct adb_request *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_0(FUNC_5(VAR_0));

 FUNC_2(VAR_3);
 VAR_2 = FUNC_4(VAR_0);
 FUNC_1(VAR_3);

 if (!VAR_2 && VAR_1) {
  while (!VAR_0->complete) {
   FUNC_3();
  }
  FUNC_0(FUNC_5(VAR_0));
 }

 return VAR_2;
}
