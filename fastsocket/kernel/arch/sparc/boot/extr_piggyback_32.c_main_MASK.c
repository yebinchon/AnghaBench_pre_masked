
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned int st_size; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,unsigned int,int ) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (char*,unsigned int) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 int VAR_2 ;
 int FUNC_15 (char*,char*) ;
 unsigned int FUNC_16 (char*,int *,int) ;
 int FUNC_17 () ;
 unsigned int FUNC_18 (int,char*,unsigned int) ;

int FUNC_19(int VAR_3,char **VAR_4)
{
 static char VAR_5[] = { 0x01, 0x03, 0x01, 0x07 };
 char VAR_6[1024], *VAR_7, *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 FILE *VAR_15;
 struct stat VAR_16;
 int VAR_17, VAR_18;

 if (VAR_3 != 4) FUNC_17();
 VAR_12 = VAR_13 = 0;
 if (FUNC_14 (VAR_4[3], &VAR_16) < 0) FUNC_1 (VAR_4[3]);
 VAR_15 = FUNC_5 (VAR_4[2], "r");
 if (!VAR_15) FUNC_1(VAR_4[2]);
 while (FUNC_4 (VAR_6, 1024, VAR_15)) {
  if (!FUNC_15 (VAR_6 + 8, " T start\n") || !FUNC_15 (VAR_6 + 16, " T start\n"))
   VAR_12 = FUNC_16 (VAR_6, ((void*)0), 16);
  else if (!FUNC_15 (VAR_6 + 8, " A _end\n") || !FUNC_15 (VAR_6 + 16, " A _end\n"))
   VAR_13 = FUNC_16 (VAR_6, ((void*)0), 16);
 }
 FUNC_3 (VAR_15);
 if (!VAR_12 || !VAR_13) {
  FUNC_6 (VAR_2, "Could not determine start and end from System.map\n");
  FUNC_2(1);
 }
 if ((VAR_17 = FUNC_11(VAR_4[1],VAR_1)) < 0) FUNC_1(VAR_4[1]);
 if (FUNC_12(VAR_17,VAR_6,512) != 512) FUNC_1(VAR_4[1]);
 if (FUNC_10 (VAR_6, "\177ELF", 4) == 0) {
  VAR_7 = VAR_6 + FUNC_8(VAR_6 + 28);
  VAR_9 = FUNC_8(VAR_7 + 4) + FUNC_8(VAR_6 + 24) - FUNC_8(VAR_7 + 8);
  if (FUNC_9(VAR_17,VAR_9,0) < 0) FUNC_1("lseek");
  if (FUNC_12(VAR_17,VAR_6,512) != 512) FUNC_1(VAR_4[1]);
  VAR_10 = 0;
 } else if (FUNC_10(VAR_6, VAR_5, 4) == 0) {
  VAR_9 = VAR_10 = 32;
 } else {
  FUNC_6 (VAR_2, "Not ELF nor a.out. Don't blame me.\n");
  FUNC_2(1);
 }
 VAR_11 = VAR_9;
 VAR_9 += (FUNC_7(VAR_6 + VAR_10 + 2)<<2) - 512;
 if (FUNC_9(VAR_17,VAR_9,0) < 0) FUNC_1("lseek");
 if (FUNC_12(VAR_17,VAR_6,1024) != 1024) FUNC_1(VAR_4[1]);
 for (VAR_7 = VAR_6, VAR_8 = VAR_7 + 512; VAR_7 < VAR_8; VAR_7 += 4) {
  if (*VAR_7 == 'H' && VAR_7[1] == 'd' && VAR_7[2] == 'r' && VAR_7[3] == 'S')
   break;
 }
 if (VAR_7 == VAR_8) {
  FUNC_6 (VAR_2, "Couldn't find headers signature in the kernel.\n");
  FUNC_2(1);
 }
 VAR_14 = VAR_9 + (VAR_7 - VAR_6) + 10;
 if (FUNC_9(VAR_17, VAR_14, 0) < 0) FUNC_1 ("lseek");

 FUNC_13(VAR_6, 0);
 FUNC_13(VAR_6 + 4, 0x01000000);
 FUNC_13(VAR_6 + 8, (VAR_13 + 32 + 4095) & ~4095);
 FUNC_13(VAR_6 + 12, VAR_16.st_size);

 if (FUNC_18(VAR_17,VAR_6+2,14) != 14) FUNC_1 (VAR_4[1]);
 if (FUNC_9(VAR_17, VAR_11 - VAR_12 + ((VAR_13 + 32 + 4095) & ~4095), 0) < 0) FUNC_1 ("lseek");
 if ((VAR_18 = FUNC_11(VAR_4[3],VAR_0)) < 0) FUNC_1(VAR_4[3]);
 while ((VAR_9 = FUNC_12 (VAR_18,VAR_6,1024)) > 0)
  if (FUNC_18(VAR_17,VAR_6,VAR_9) != VAR_9) FUNC_1 (VAR_4[1]);
 if (FUNC_0(VAR_17) < 0) FUNC_1("close");
 if (FUNC_0(VAR_18) < 0) FUNC_1("close");
     return 0;
}
