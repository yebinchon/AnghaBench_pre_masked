
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_9, void *VAR_10)
{
 int VAR_11;

 FUNC_3(VAR_9, "V: Valid, C: Cacheable, WT: Write-Through\n"
    "CB: Copy-Back, B: Buffered, UB: Unbuffered\n");
 FUNC_3(VAR_9, "ety   vpn  ppn  size   flags\n");

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  unsigned long VAR_12, VAR_13;
  unsigned int VAR_14;
  char *VAR_15 = ((void*)0);

  VAR_12 = FUNC_0(FUNC_1(VAR_11));
  VAR_13 = FUNC_0(FUNC_2(VAR_11));

  VAR_14 = VAR_13 & VAR_5;
  VAR_15 = (VAR_14 == VAR_3) ? " 16MB":
    (VAR_14 == VAR_4) ? " 64MB":
    (VAR_14 == VAR_2) ? "128MB":
              "512MB";


  FUNC_3(VAR_9, "%02d: %c 0x%02lx 0x%02lx %s %c %s %s\n",
      VAR_11, ((VAR_12 & VAR_7) && (VAR_13 & VAR_7)) ? 'V' : ' ',
      (VAR_12 >> 24) & 0xff, (VAR_13 >> 24) & 0xff,
      VAR_15, (VAR_13 & VAR_1) ? 'C' : ' ',
      (VAR_13 & VAR_8) ? "WT" : "CB",
      (VAR_13 & VAR_6) ? "UB" : " B");
 }

 return 0;
}
