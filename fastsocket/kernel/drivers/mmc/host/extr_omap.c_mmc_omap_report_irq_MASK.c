
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline void FUNC_2(u16 VAR_0)
{
 static const char *VAR_1[] = {
  "EOC", "CD", "CB", "BRS", "EOFB", "DTO", "DCRC", "CTO",
  "CCRC", "CRW", "AF", "AE", "OCRB", "CIRQ", "CERR"
 };
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_0 & (1 << VAR_2)) {
   if (VAR_3)
    FUNC_1(" ");
   FUNC_1("%s", VAR_1[VAR_2]);
   VAR_3++;
  }
}
