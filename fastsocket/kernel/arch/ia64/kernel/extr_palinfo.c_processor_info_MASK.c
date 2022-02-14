
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 char* FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int*,int*,int*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 u64 VAR_2=1, VAR_3=1, VAR_4=1, VAR_5=0;
 s64 VAR_6;

 do {
  VAR_6 = FUNC_1(&VAR_2, &VAR_3, &VAR_4,
      VAR_5);
  if (VAR_6 < 0) {
   return VAR_1 - VAR_0;
  }
  if (VAR_6 == 1) {
   VAR_5++;
   continue;
  }

  VAR_1 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

  VAR_5++;
 } while(1);

 return VAR_1 - VAR_0;
}
