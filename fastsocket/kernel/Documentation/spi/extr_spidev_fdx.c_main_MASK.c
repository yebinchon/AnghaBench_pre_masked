
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_9(int VAR_6, char **VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 const char *VAR_12;

 while ((VAR_8 = FUNC_6(VAR_6, VAR_7, "hm:r:v")) != VAR_0) {
  switch (VAR_8) {
  case 'm':
   VAR_10 = FUNC_0(VAR_2);
   if (VAR_10 < 0)
    goto usage;
   continue;
  case 'r':
   VAR_9 = FUNC_0(VAR_2);
   if (VAR_9 < 0)
    goto usage;
   continue;
  case 'v':
   VAR_5++;
   continue;
  case 'h':
  case '?':
usage:
   FUNC_5(VAR_4,
    "usage: %s [-h] [-m N] [-r N] /dev/spidevB.D\n",
    VAR_7[0]);
   return 1;
  }
 }

 if ((VAR_3 + 1) != VAR_6)
  goto usage;
 VAR_12 = VAR_7[VAR_3];

 VAR_11 = FUNC_7(VAR_12, VAR_1);
 if (VAR_11 < 0) {
  FUNC_8("open");
  return 1;
 }

 FUNC_4(VAR_12, VAR_11);

 if (VAR_10)
  FUNC_2(VAR_11, VAR_10);

 if (VAR_9)
  FUNC_3(VAR_11, VAR_9);

 FUNC_1(VAR_11);
 return 0;
}
