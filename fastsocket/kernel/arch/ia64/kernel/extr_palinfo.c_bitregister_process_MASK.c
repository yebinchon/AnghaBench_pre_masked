
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, u64 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 u64 VAR_6 = VAR_1[0];

 VAR_6 >>= VAR_3 = VAR_4 = FUNC_0(VAR_6) - 1;

 for(; VAR_3 < VAR_2; VAR_3++ ) {

  if (VAR_3 != 0 && (VAR_3%64) == 0) VAR_6 = *++VAR_1;

  if ((VAR_6 & 0x1) == 0 && VAR_5 == 0) {
   if (VAR_4 <= VAR_3 - 2)
    VAR_0 += FUNC_1(VAR_0, "%d-%d ", VAR_4, VAR_3-1);
   else
    VAR_0 += FUNC_1(VAR_0, "%d ", VAR_3-1);
   VAR_5 = 1;
   VAR_4 = -1;
  } else if ((VAR_6 & 0x1) && VAR_5 == 1) {
   VAR_5 = 0;
   VAR_4 = VAR_3;
  }
  VAR_6 >>=1;
 }
 if (VAR_4 > -1) {
  if (VAR_4 < 127)
   VAR_0 += FUNC_1(VAR_0, "%d-127", VAR_4);
  else
   VAR_0 += FUNC_1(VAR_0, "127");
 }

 return VAR_0;
}
