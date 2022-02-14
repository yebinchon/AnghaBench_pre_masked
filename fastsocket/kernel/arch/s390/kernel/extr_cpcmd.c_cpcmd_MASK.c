
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int,int*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (char*) ;

int FUNC_8(const char *VAR_4, char *VAR_5, int VAR_6, int *VAR_7)
{
 char *VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 if ((FUNC_7(VAR_5) != (unsigned long) VAR_5) ||
   (((unsigned long)VAR_5 + VAR_6) >> 31)) {
  VAR_8 = FUNC_2(VAR_6, VAR_2 | VAR_1);
  if (!VAR_8) {
   FUNC_4("The cpcmd kernel function failed to "
       "allocate a response buffer\n");
   return -VAR_0;
  }
  FUNC_5(&VAR_3, VAR_10);
  VAR_9 = FUNC_0(VAR_4, VAR_8, VAR_6, VAR_7);
  FUNC_6(&VAR_3, VAR_10);
  FUNC_3(VAR_5, VAR_8, VAR_6);
  FUNC_1(VAR_8);
 } else {
  FUNC_5(&VAR_3, VAR_10);
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_6(&VAR_3, VAR_10);
 }
 return VAR_9;
}
