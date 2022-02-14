
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_sdvo {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct intel_sdvo*) ;
 int * VAR_5 ;
 int FUNC_3 (struct intel_sdvo*,scalar_t__,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct intel_sdvo *VAR_6,
         void *VAR_7, int VAR_8)
{
 u8 VAR_9 = 15;
 u8 VAR_10;
 int VAR_11;

 FUNC_0("%s: R: ", FUNC_2(VAR_6));
 if (!FUNC_3(VAR_6,
      VAR_3,
      &VAR_10))
  goto log_fail;

 while (VAR_10 == VAR_0 && --VAR_9) {
  if (VAR_9 < 10)
   FUNC_4(15);
  else
   FUNC_5(15);

  if (!FUNC_3(VAR_6,
       VAR_3,
       &VAR_10))
   goto log_fail;
 }

 if (VAR_10 <= VAR_1)
  FUNC_1("(%s)", VAR_5[VAR_10]);
 else
  FUNC_1("(??? %d)", VAR_10);

 if (VAR_10 != VAR_2)
  goto log_fail;


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (!FUNC_3(VAR_6,
       VAR_4 + VAR_11,
       &((u8 *)VAR_7)[VAR_11]))
   goto log_fail;
  FUNC_1(" %02X", ((u8 *)VAR_7)[VAR_11]);
 }
 FUNC_1("\n");
 return 1;

log_fail:
 FUNC_1("... failed\n");
 return 0;
}
