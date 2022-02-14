
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 char** VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_7(int VAR_2, u16 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 FUNC_6("\tMTR%d=0x%x:  DIMMs are %s\n", VAR_2, VAR_3,
  VAR_4 ? "Present" : "NOT Present");
 if (!VAR_4)
  return;

 FUNC_6("\t\tWIDTH: x%d\n", FUNC_5(VAR_3));
 FUNC_6("\t\tNUMBANK: %d bank(s)\n", FUNC_4(VAR_3));
 FUNC_6("\t\tNUMRANK: %s\n", FUNC_2(VAR_3) ? "double" : "single");
 FUNC_6("\t\tNUMROW: %s\n", VAR_1[FUNC_3(VAR_3)]);
 FUNC_6("\t\tNUMCOL: %s\n", VAR_0[FUNC_1(VAR_3)]);
}
