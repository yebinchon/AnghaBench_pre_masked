
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
 scalar_t__ FUNC_7 (int,unsigned int,int ) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int,char*,int) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 int VAR_2 ;
 int FUNC_12 (char*,char*) ;
 unsigned int FUNC_13 (char*,int *,int) ;
 unsigned int FUNC_14 (int,char*,unsigned int) ;

int FUNC_15(int VAR_3,char **VAR_4)
{
 char VAR_5 [1024], *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 FILE *VAR_14;
 struct stat VAR_15;
 int VAR_16, VAR_17;

 VAR_11 = VAR_12 = 0;
 if (FUNC_11 (VAR_4[3], &VAR_15) < 0) FUNC_1 (VAR_4[3]);
 VAR_14 = FUNC_5 (VAR_4[2], "r");
 if (!VAR_14) FUNC_1(VAR_4[2]);
 while (FUNC_4 (VAR_5, 1024, VAR_14)) {
  if (!FUNC_12 (VAR_5 + 19, "_start\n"))
  VAR_11 = FUNC_13 (VAR_5 + 8, ((void*)0), 16);
  else if (!FUNC_12 (VAR_5 + 19, "_end\n"))
  VAR_12 = FUNC_13 (VAR_5 + 8, ((void*)0), 16);
 }
 FUNC_3 (VAR_14);
 if ((VAR_16 = FUNC_9(VAR_4[1],VAR_1)) < 0) FUNC_1(VAR_4[1]);
 if (FUNC_10(VAR_16,VAR_5,512) != 512) FUNC_1(VAR_4[1]);
 if (!FUNC_8 (VAR_5, "\177ELF", 4)) {
  unsigned int *VAR_18 = (unsigned int *)(VAR_5 + *(unsigned int *)(VAR_5 + 28));

  VAR_8 = VAR_18[1] + *(unsigned int *)(VAR_5 + 24) - VAR_18[2];
  if (FUNC_7(VAR_16,VAR_8,0) < 0) FUNC_1("lseek");
  if (FUNC_10(VAR_16,VAR_5,512) != 512) FUNC_1(VAR_4[1]);
  VAR_9 = 0;
 } else if (*(unsigned int *)VAR_5 == 0x01030107) {
  VAR_8 = VAR_9 = 32;
 } else {
  FUNC_6 (VAR_2, "Not ELF nor a.out. Don't blame me.\n");
  FUNC_2(1);
 }
 VAR_10 = VAR_8;
 if (VAR_9 == 32 && VAR_5[40] == 'H' && VAR_5[41] == 'd' && VAR_5[42] == 'r' && VAR_5[43] == 'S') {
  VAR_13 = 40 + 10;
 } else {
  VAR_8 += ((*(unsigned short *)(VAR_5 + VAR_9 + 2))<<2) - 512;
  if (FUNC_7(VAR_16,VAR_8,0) < 0) FUNC_1("lseek");
  if (FUNC_10(VAR_16,VAR_5,1024) != 1024) FUNC_1(VAR_4[1]);
  for (VAR_6 = VAR_5, VAR_7 = VAR_6 + 512; VAR_6 < VAR_7; VAR_6 += 4) {
   if (*VAR_6 == 'H' && VAR_6[1] == 'd' && VAR_6[2] == 'r' && VAR_6[3] == 'S')
    break;
  }
  if (VAR_6 == VAR_7) {
   FUNC_6 (VAR_2, "Couldn't find headers signature in the kernel.\n");
   FUNC_2(1);
  }
  VAR_13 = VAR_8 + (VAR_6 - VAR_5) + 10;
 }
 if (FUNC_7(VAR_16, VAR_13, 0) < 0) FUNC_1 ("lseek");
 *(unsigned *)VAR_5 = 0;
 *(unsigned *)(VAR_5 + 4) = 0x01000000;
 *(unsigned *)(VAR_5 + 8) = ((VAR_12 + 32 + 8191) & ~8191);
 *(unsigned *)(VAR_5 + 12) = VAR_15.st_size;
 if (FUNC_14(VAR_16,VAR_5+2,14) != 14) FUNC_1 (VAR_4[1]);
 if (FUNC_7(VAR_16, 4, 0) < 0) FUNC_1 ("lseek");
 *(unsigned *)VAR_5 = ((VAR_12 + 32 + 8191) & ~8191) - (VAR_11 & ~0x3fffffUL) + VAR_15.st_size;
 *(unsigned *)(VAR_5 + 4) = 0;
 *(unsigned *)(VAR_5 + 8) = 0;
 if (FUNC_14(VAR_16,VAR_5,12) != 12) FUNC_1 (VAR_4[1]);
 if (FUNC_7(VAR_16, VAR_10 - VAR_11 + ((VAR_12 + 32 + 8191) & ~8191), 0) < 0) FUNC_1 ("lseek");
 if ((VAR_17 = FUNC_9(VAR_4[3],VAR_0)) < 0) FUNC_1(VAR_4[3]);
 while ((VAR_8 = FUNC_10 (VAR_17,VAR_5,1024)) > 0)
  if (FUNC_14(VAR_16,VAR_5,VAR_8) != VAR_8) FUNC_1 (VAR_4[1]);
 if (FUNC_0(VAR_16) < 0) FUNC_1("close");
 if (FUNC_0(VAR_17) < 0) FUNC_1("close");
     return 0;
}
