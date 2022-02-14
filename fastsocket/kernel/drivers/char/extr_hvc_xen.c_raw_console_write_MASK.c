
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, int VAR_2)
{
 while(VAR_2 > 0) {
  int VAR_3 = FUNC_0(VAR_0, VAR_2, (char *)VAR_1);
  if (VAR_3 <= 0)
   break;

  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }
}
