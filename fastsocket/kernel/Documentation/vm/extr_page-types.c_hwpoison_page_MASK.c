
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,unsigned long) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1)
{
 char VAR_2[100];
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, "0x%lx\n", VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_3);
 if (VAR_3 < 0) {
  FUNC_0("hwpoison inject");
  return VAR_3;
 }
 return 0;
}
