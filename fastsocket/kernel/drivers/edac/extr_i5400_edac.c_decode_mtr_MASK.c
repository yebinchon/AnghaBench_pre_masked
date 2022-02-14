
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 char** VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_8(int VAR_2, u16 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_7("\tMTR%d=0x%x:  DIMMs are %s\n", VAR_2, VAR_3,
  VAR_4 ? "Present" : "NOT Present");
 if (!VAR_4)
  return;

 FUNC_7("\t\tWIDTH: x%d\n", FUNC_6(VAR_3));

 FUNC_7("\t\tELECTRICAL THROTTLING is %s\n",
  FUNC_0(VAR_3) ? "enabled" : "disabled");

 FUNC_7("\t\tNUMBANK: %d bank(s)\n", FUNC_5(VAR_3));
 FUNC_7("\t\tNUMRANK: %s\n", FUNC_3(VAR_3) ? "double" : "single");
 FUNC_7("\t\tNUMROW: %s\n", VAR_1[FUNC_4(VAR_3)]);
 FUNC_7("\t\tNUMCOL: %s\n", VAR_0[FUNC_2(VAR_3)]);
}
