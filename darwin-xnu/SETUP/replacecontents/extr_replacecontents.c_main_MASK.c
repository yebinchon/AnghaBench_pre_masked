
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; int st_mode; } ;
typedef int ssize_t ;


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
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,struct stat*) ;
 int FUNC_7 (int,int ) ;
 char* FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char const*,int,int ) ;
 int FUNC_11 (int,char*,size_t) ;
 int FUNC_12 (char*,char*,size_t) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int,char*,size_t) ;

int FUNC_16(int VAR_7, char * VAR_8[])
{
 struct stat VAR_9;
 char *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 char *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14;
 const char *VAR_15 = ((void*)0);
 ssize_t VAR_16, VAR_17;
 int VAR_18;

 if (VAR_7 < 2) {
  FUNC_14();
 }

 VAR_15 = VAR_8[1];

 for (VAR_18=2; VAR_18 < VAR_7; VAR_18++) {
  VAR_11 += FUNC_13(VAR_8[VAR_18]) + 1 ;
 }
 VAR_11 += 1;

 VAR_10 = FUNC_8(VAR_11);
 if (VAR_10 == ((void*)0))
  FUNC_2(VAR_2, "malloc() failed");

 VAR_10[0] = '\0';

 for (VAR_18=2; VAR_18 < VAR_7; VAR_18++) {
  FUNC_12(VAR_10, VAR_8[VAR_18], VAR_11);
  if (VAR_18 < VAR_7 - 1) {
   FUNC_12(VAR_10, " ", VAR_11);
  } else {
   FUNC_12(VAR_10, "\n", VAR_11);
  }
 }

 VAR_14 = FUNC_10(VAR_15, VAR_6 | VAR_5 | VAR_4, VAR_0);
 if (VAR_14 < 0)
  FUNC_2(VAR_1, "open(%s)", VAR_15);

 VAR_13 = FUNC_6(VAR_14, &VAR_9);
 if (VAR_13 < 0)
  FUNC_2(VAR_1, "fstat(%s)", VAR_15);

 if (!FUNC_0(VAR_9.st_mode))
  FUNC_2(VAR_3, "%s is not a regular file", VAR_15);

 if (VAR_9.st_size != VAR_11) {

  goto replace;
 }

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12 == ((void*)0))
  FUNC_2(VAR_2, "malloc(%lu) failed", VAR_11);

 VAR_16 = FUNC_11(VAR_14, VAR_12, VAR_11);
 if (VAR_16 == -1)
  FUNC_2(VAR_2, "read() failed");
 else if (VAR_16 != VAR_11)
  FUNC_3(VAR_2, "short read of file");

 if (0 == FUNC_9(VAR_12, VAR_10, VAR_11)) {

  FUNC_5(VAR_12);
  VAR_13 = FUNC_1(VAR_14);
  if (VAR_13 < 0)
   FUNC_2(VAR_2, "close() failed");

  FUNC_4(0);
 }

replace:
 VAR_13 = FUNC_7(VAR_14, 0);
 if (VAR_13 < 0)
  FUNC_2(VAR_2, "ftruncate() failed");

 VAR_17 = FUNC_15(VAR_14, VAR_10, VAR_11);
 if (VAR_17 == -1)
  FUNC_2(VAR_2, "write() failed");
 else if (VAR_17 != VAR_11)
  FUNC_3(VAR_2, "short write of file");

 VAR_13 = FUNC_1(VAR_14);
 if (VAR_13 < 0)
  FUNC_2(VAR_1, "close(dst)");

 return 0;
}
