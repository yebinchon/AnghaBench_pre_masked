
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1)
{
 int VAR_2, VAR_3;
 u8 VAR_4;

 FUNC_1(VAR_1, "EC      "
         " +00 +01 +02 +03 +04 +05 +06 +07"
         " +08 +09 +0a +0b +0c +0d +0e +0f\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2 += 16) {
  FUNC_1(VAR_1, "EC 0x%02x:", VAR_2);
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   if (!FUNC_0(VAR_2 + VAR_3, &VAR_4))
    break;
   if (VAR_4 != VAR_0[VAR_2 + VAR_3])
    FUNC_1(VAR_1, " *%02x", VAR_4);
   else
    FUNC_1(VAR_1, "  %02x", VAR_4);
   VAR_0[VAR_2 + VAR_3] = VAR_4;
  }
  FUNC_2(VAR_1, '\n');
  if (VAR_3 != 16)
   break;
 }
 return 0;
}
