
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;


 scalar_t__ FUNC_0 (int ,int*,int*,int*) ;
 int FUNC_1 (char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_0, char *VAR_1, int VAR_2)
{
 static unsigned char VAR_3[sizeof(unsigned long) * 2]
  __attribute__((aligned(sizeof(unsigned long))));
 static int VAR_4 = 0;
 u64 VAR_5;

again:
 if (VAR_4) {
  if (VAR_4 > VAR_2) {
   FUNC_1(VAR_1, VAR_3, VAR_2);
   VAR_4 -= VAR_2;
   FUNC_2(VAR_3 + VAR_2, VAR_3, VAR_4);
   return VAR_2;
  } else {
   int VAR_6;

   FUNC_1(VAR_1, VAR_3, VAR_4);
   VAR_6 = VAR_4;
   VAR_4 = 0;
   return VAR_6;
  }
 }
 if (FUNC_0(VAR_0, &VAR_5,
  ((u64 *)VAR_3), ((u64 *)VAR_3) + 1) == 0) {
  VAR_4 = VAR_5;
  goto again;
 }
 return 0;
}
