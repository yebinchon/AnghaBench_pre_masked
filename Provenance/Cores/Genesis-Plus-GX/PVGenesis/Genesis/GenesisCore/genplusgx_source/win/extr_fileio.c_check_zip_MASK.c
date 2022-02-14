
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int,int,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0)
{
  uint8 VAR_1[2];
  FILE *VAR_2 = FUNC_1(VAR_0, "rb");
  if(!VAR_2) return (0);
  FUNC_2(VAR_1, 2, 1, VAR_2);
  FUNC_0(VAR_2);
  if(FUNC_3(VAR_1, "PK", 2) == 0) return (1);
  return (0);
}
