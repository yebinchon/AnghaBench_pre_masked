
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;

 VAR_3 = 0;
 if (!VAR_1) {
  FUNC_1(&VAR_2);
  if (!VAR_1) {
   VAR_1 =
    FUNC_0("kafs_lockd");
   if (!VAR_1)
    VAR_3 = -VAR_0;
  }
  FUNC_2(&VAR_2);
 }
 return VAR_3;
}
