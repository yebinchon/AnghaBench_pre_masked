
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adb_request*,int *,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct adb_request*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
 static struct adb_request VAR_1;

 if (FUNC_1(&VAR_1))
  return 0;


 FUNC_0(&VAR_1, ((void*)0), 0, 1, VAR_0);


 FUNC_2(3000);

 return 0;
}
