
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_3, int VAR_4, off_t VAR_5, off_t VAR_6)
{
 char VAR_7[4096];
 int VAR_8, VAR_9, VAR_10;


 if (FUNC_2(VAR_4, VAR_5, VAR_0) < 0) {
  FUNC_3("copy: lseek");
  FUNC_0(1);
 }

 VAR_8 = VAR_6;
 while (VAR_8) {
  VAR_9 = VAR_8;
  if (VAR_9 > sizeof VAR_7)
   VAR_9 = sizeof VAR_7;
  VAR_8 -= VAR_9;
  if ((VAR_10 = FUNC_4(VAR_4, VAR_7, VAR_9)) != VAR_9) {
   FUNC_1(VAR_2, "copy: read: %s\n",
    VAR_10 ? FUNC_5(VAR_1) :
    "premature end of file");
   FUNC_0(1);
  }
  if ((VAR_10 = FUNC_6(VAR_3, VAR_7, VAR_9)) != VAR_9) {
   FUNC_3("copy: write");
   FUNC_0(1);
  }
 }
}
