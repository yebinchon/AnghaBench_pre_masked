
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int dsttmpname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int,int *,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,struct stat*) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (char*,char const*) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (char*,int,char*,char const*) ;
 int FUNC_16 () ;

int FUNC_17(int VAR_9, char * VAR_10[])
{
 struct stat VAR_11;
 void *VAR_12;
 mode_t VAR_13;
 bool VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 const char *VAR_19 = ((void*)0);
 const char *VAR_20 = ((void*)0);
 char VAR_21[VAR_4];

 while ((VAR_15 = FUNC_10(VAR_9, VAR_10, "cSm:")) != -1) {
  switch(VAR_15) {
   case 'c':
   case 'S':

    break;
   case 'm':
    VAR_14 = 1;
    VAR_12 = FUNC_14(VAR_7);
    if (!VAR_12)
     FUNC_3(VAR_3, "Unrecognized mode %s", VAR_7);

    VAR_13 = FUNC_9(VAR_12, 0);
    FUNC_6(VAR_12);
    break;
   case '?':
   default:
    FUNC_16();
  }
 }

 VAR_9 -= VAR_8;
 VAR_10 += VAR_8;

 if (VAR_9 < 2) {
  FUNC_16();
 }

 VAR_19 = VAR_10[0];
 VAR_20 = VAR_10[1];

 VAR_17 = FUNC_12(VAR_19, VAR_5 | VAR_6, 0);
 if (VAR_17 < 0)
  FUNC_2(VAR_1, "open(%s)", VAR_19);

 VAR_16 = FUNC_7(VAR_17, &VAR_11);
 if (VAR_16 < 0)
  FUNC_2(VAR_1, "fstat(%s)", VAR_19);

 if (!FUNC_0(VAR_11.st_mode))
  FUNC_2(VAR_3, "%s is not a regular file", VAR_19);

 FUNC_15(VAR_21, sizeof(VAR_21), "%s.XXXXXX", VAR_20);

 VAR_18 = FUNC_11(VAR_21);
 if (VAR_18 < 0)
  FUNC_2(VAR_2, "mkstemp(%s)", VAR_21);

 VAR_16 = FUNC_5(VAR_17, VAR_18, ((void*)0),
     VAR_0);
 if (VAR_16 < 0)
  FUNC_2(VAR_2, "fcopyfile(%s, %s)", VAR_19, VAR_21);

 VAR_16 = FUNC_8(VAR_18, ((void*)0));
 if (VAR_16 < 0)
  FUNC_2(VAR_2, "futimes(%s)", VAR_21);

 if (VAR_14) {
  VAR_16 = FUNC_4(VAR_18, VAR_13);
  if (VAR_16 < 0)
   FUNC_2(VAR_1, "fchmod(%s, %ho)", VAR_21, VAR_13);
 }

 VAR_16 = FUNC_13(VAR_21, VAR_20);
 if (VAR_16 < 0)
  FUNC_2(VAR_1, "rename(%s, %s)", VAR_21, VAR_20);

 VAR_16 = FUNC_1(VAR_18);
 if (VAR_16 < 0)
  FUNC_2(VAR_1, "close(dst)");

 VAR_16 = FUNC_1(VAR_17);
 if (VAR_16 < 0)
  FUNC_2(VAR_1, "close(src)");

 return 0;
}
