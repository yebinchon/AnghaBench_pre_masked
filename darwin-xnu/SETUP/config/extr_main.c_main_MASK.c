
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (char*,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 () ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_8 (char*,char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;

int
FUNC_11(int VAR_11, char *VAR_12[])
{

 VAR_8 = "..";
 VAR_5 = "..";
 VAR_2 = (char *) 0;
 while ((VAR_11 > 1) && (VAR_12[1][0] == '-')) {
  char *VAR_13;

  VAR_12++; VAR_11--;
  for (VAR_13 = &VAR_12[0][1]; *VAR_13 ; VAR_13++) {
   switch (*VAR_13) {
    case 'b':
     VAR_0 = VAR_12[1];
     goto check_arg;

    case 'd':
     VAR_8 = VAR_12[1];
     goto check_arg;

    case 'o':
     VAR_5 = VAR_12[1];
     goto check_arg;

    case 'c':
     VAR_2 = VAR_12[1];

     check_arg:
      if (VAR_12[1] == (char *) 0)
      goto usage_error;
     VAR_12++; VAR_11--;
     break;

    case 'p':
     VAR_7++;
     break;
    default:
     goto usage_error;
   }
  }
 }
 if (VAR_2 == (char *) 0) {
  VAR_2 =
   FUNC_5((unsigned) FUNC_9(VAR_8) + 6);
  (void) FUNC_8(VAR_2, "%s/conf", VAR_8);
 }
 if (VAR_11 != 2) {
  usage_error: ;
  FUNC_1(VAR_9, "usage: config [ -bcdo dir ] [ -p ] sysname\n");
  FUNC_0(1);
 }
 if (!VAR_0)
  VAR_0 = VAR_12[1];
 if (FUNC_2(VAR_12[1], "r", VAR_10) == ((void*)0)) {
  FUNC_7(VAR_12[1]);
  FUNC_0(2);
 }
 VAR_4 = ((void*)0);
 VAR_3 = &VAR_1;
 VAR_6 = 0;
 if (FUNC_10())
  FUNC_0(3);

 FUNC_6();
 FUNC_4();
 FUNC_3();

 return 0;
}
