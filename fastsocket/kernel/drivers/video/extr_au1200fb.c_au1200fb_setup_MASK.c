
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char**) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 long FUNC_3 (char*,char**,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
 char* VAR_4 = ((void*)0);
 char* VAR_5;
 int VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = -1;

 FUNC_1(VAR_0, &VAR_4);

 if (VAR_4) {
  while ((VAR_5 = FUNC_6(&VAR_4,",")) != ((void*)0)) {


   if (!FUNC_5(VAR_5, "panel:", 6)) {
    int VAR_8;
    long int VAR_9;
    char *VAR_10;
    VAR_5 += 6;


    VAR_9 = FUNC_3(VAR_5, &VAR_10, 0);
    if (*VAR_10 == '\0') {
     VAR_7 = (int)VAR_9;
    }
    else if (FUNC_4(VAR_5, "bs") == 0) {
     extern int FUNC_8(void);
     VAR_7 = FUNC_8();
    }

    else
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
     if (!FUNC_4(VAR_5, VAR_1[VAR_8].name)) {
      VAR_7 = VAR_8;
      break;
     }
    }

    if ((VAR_7 < 0) || (VAR_7 >= VAR_6)) {
      FUNC_2("Panel %s not supported!", VAR_5);
    }
    else
     VAR_3 = VAR_7;
   }

   else if (FUNC_5(VAR_5, "nohwcursor", 10) == 0) {
    VAR_2 = 1;
   }


   else {
    FUNC_2("Unsupported option \"%s\"", VAR_5);
   }
  }
 }
}
