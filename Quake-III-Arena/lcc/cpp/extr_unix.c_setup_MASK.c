
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
typedef int Tokenrow ;
struct TYPE_2__ {int always; int deleted; char* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 int FUNC_9 (char*,int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*) ;
 int VAR_8 ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 () ;
 int VAR_9 ;

void
FUNC_15(int VAR_10, char **VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 Tokenrow VAR_17;
 extern void FUNC_0(void);

 FUNC_0();
 while ((VAR_12 = FUNC_5(VAR_10, VAR_11, "MNOVv+I:D:U:F:lg")) != -1)
  switch (VAR_12) {
  case 'N':
   for (VAR_14=0; VAR_14<VAR_3; VAR_14++)
    if (VAR_4[VAR_14].always==1)
     VAR_4[VAR_14].deleted = 1;
   break;
  case 'I':
   for (VAR_14=VAR_3-2; VAR_14>=0; VAR_14--) {
    if (VAR_4[VAR_14].file==((void*)0)) {
     VAR_4[VAR_14].always = 1;
     VAR_4[VAR_14].file = VAR_5;
     break;
    }
   }
   if (VAR_14<0)
    FUNC_3(VAR_1, "Too many -I directives");
   break;
  case 'D':
  case 'U':
   FUNC_11("<cmdarg>", -1, VAR_5);
   FUNC_7(3, &VAR_17);
   FUNC_6(&VAR_17, 1);
   FUNC_1(&VAR_17, VAR_12);
   FUNC_14();
   break;
  case 'M':
   VAR_2++;
   break;
  case 'v':
   FUNC_4(VAR_8, "%s %s\n", VAR_11[0], VAR_7);
   break;
  case 'V':
   VAR_9++;
   break;
  case '+':
   VAR_0++;
   break;
  default:
   break;
  }
 VAR_16 = ".";
 VAR_15 = "<stdin>";
 VAR_13 = 0;
 if (VAR_6<VAR_10) {
  if ((VAR_15 = FUNC_13(VAR_11[VAR_6], '/')) != ((void*)0)) {
   int VAR_18 = VAR_15 - VAR_11[VAR_6];
   VAR_16 = (char*)FUNC_8((uchar*)VAR_11[VAR_6], VAR_18+1, 0);
   VAR_16[VAR_18] = '\0';
  }
  VAR_15 = (char*)FUNC_8((uchar*)VAR_11[VAR_6], FUNC_12(VAR_11[VAR_6]), 0);
  if ((VAR_13 = FUNC_9(VAR_15, 0)) <= 0)
   FUNC_3(VAR_1, "Can't open input file %s", VAR_15);
 }
 if (VAR_6+1<VAR_10) {
  int VAR_19 = FUNC_0(VAR_11[VAR_6+1], 0666);
  if (VAR_19<0)
   FUNC_3(VAR_1, "Can't open output file %s", VAR_11[VAR_6+1]);
  FUNC_2(VAR_19, 1);
 }
 if(VAR_2)
  FUNC_10(VAR_15);
 VAR_4[VAR_3-1].always = 0;
 VAR_4[VAR_3-1].file = VAR_16;
 FUNC_11(VAR_15, VAR_13, ((void*)0));
}
