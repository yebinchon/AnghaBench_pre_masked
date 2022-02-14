
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip {int sx_count; int * sx_buff; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct strip*) ;
 int FUNC_1 (struct strip*,int *,int *,int) ;
 scalar_t__ FUNC_2 (struct strip*,int *) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;

__attribute__((used)) static void FUNC_5(struct strip *VAR_0)
{
 __u8 *VAR_1 = VAR_0->sx_buff;
 int VAR_2 = VAR_0->sx_count;



 if (VAR_2 == 9 && FUNC_2(VAR_0, VAR_1) == 0)
  return;

 if (FUNC_4(VAR_1, VAR_2, "OK"))
  return;
 if (FUNC_4(VAR_1, VAR_2, "ERROR"))
  return;
 if (FUNC_3(VAR_1, VAR_2, "ate0q1"))
  return;



 if (FUNC_3(VAR_1, VAR_2, "ERR_")) {
  FUNC_1(VAR_0, ((void*)0), &VAR_1[4], VAR_2 - 4);
  return;
 }

 FUNC_0("No initial *", VAR_0);
}
