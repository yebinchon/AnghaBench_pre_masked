
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Status; char* filename; int ReadOnly; int * fp; int Size; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char const*) ;

int FUNC_8(const char *VAR_6) {

 char* VAR_7=FUNC_6(1024);

 if(VAR_0.Status == VAR_4)
  FUNC_2();


 if ((VAR_0.fp = FUNC_4(VAR_6, "r+b")) == ((void*)0))
 {
  FUNC_5(VAR_7);
  return -1;
 }

 FUNC_7(VAR_7, VAR_6);
 VAR_0.filename=VAR_7;
 VAR_3=1;
 VAR_5=0;
 VAR_0.ReadOnly = 1;
 VAR_0.Status=VAR_2;
 VAR_0.Size = FUNC_0(VAR_0.fp);
 FUNC_7(VAR_1, "Playback Started");
 FUNC_1(VAR_0.fp);
 FUNC_3();
 return 0;
}
