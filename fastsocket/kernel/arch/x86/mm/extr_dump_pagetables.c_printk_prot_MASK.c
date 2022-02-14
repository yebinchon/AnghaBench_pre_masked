
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int pgprotval_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_8, pgprot_t VAR_9, int VAR_10)
{
 pgprotval_t VAR_11 = FUNC_0(VAR_9);
 static const char * const VAR_12[] =
  { "cr3", "pgd", "pud", "pmd", "pte" };

 if (!FUNC_0(VAR_9)) {

  FUNC_1(VAR_8, "                          ");
 } else {
  if (VAR_11 & VAR_7)
   FUNC_1(VAR_8, "USR ");
  else
   FUNC_1(VAR_8, "    ");
  if (VAR_11 & VAR_6)
   FUNC_1(VAR_8, "RW ");
  else
   FUNC_1(VAR_8, "ro ");
  if (VAR_11 & VAR_5)
   FUNC_1(VAR_8, "PWT ");
  else
   FUNC_1(VAR_8, "    ");
  if (VAR_11 & VAR_3)
   FUNC_1(VAR_8, "PCD ");
  else
   FUNC_1(VAR_8, "    ");


  if (VAR_10 <= 3) {
   if (VAR_11 & VAR_4)
    FUNC_1(VAR_8, "PSE ");
   else
    FUNC_1(VAR_8, "    ");
  } else {
   if (VAR_11 & VAR_2)
    FUNC_1(VAR_8, "pat ");
   else
    FUNC_1(VAR_8, "    ");
  }
  if (VAR_11 & VAR_0)
   FUNC_1(VAR_8, "GLB ");
  else
   FUNC_1(VAR_8, "    ");
  if (VAR_11 & VAR_1)
   FUNC_1(VAR_8, "NX ");
  else
   FUNC_1(VAR_8, "x  ");
 }
 FUNC_1(VAR_8, "%s\n", VAR_12[VAR_10]);
}
