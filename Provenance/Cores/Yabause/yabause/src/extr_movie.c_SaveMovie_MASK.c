
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Status; char* filename; int * fp; scalar_t__ Rerecords; } ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;

int FUNC_7(const char *VAR_6) {

 char* VAR_7=FUNC_5(1024);

 if(VAR_0.Status == VAR_2)
  FUNC_0();

 if ((VAR_0.fp = FUNC_3(VAR_6, "w+b")) == ((void*)0))
 {
  FUNC_4(VAR_7);
  return -1;
 }

 FUNC_6(VAR_7, VAR_6);
 VAR_0.filename=VAR_7;
 VAR_4=1;
 VAR_5=0;
 VAR_0.Status=VAR_3;
 FUNC_6(VAR_1, "Recording Started");
 VAR_0.Rerecords=0;
 FUNC_1(VAR_0.fp);
 FUNC_2();
 return 0;
}
