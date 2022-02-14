
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int*,char* const,int *,int *,char* const*,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,float*,char*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,size_t*,int *,int ) ;
 int FUNC_9 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_10(void)
{
 int VAR_2, VAR_3;
 int VAR_4, VAR_5;
 size_t VAR_6;
 float VAR_7;
 char VAR_8;
 char *VAR_9, *VAR_10;
 char VAR_11[10];

 VAR_4 = FUNC_8("machdep.cpu.brand_string", ((void*)0), &VAR_6, ((void*)0), 0);
 VAR_0;FUNC_0(VAR_4, "sysctlbyname machdep.cpu.brand_string");

 VAR_9 = FUNC_3(VAR_6+2);
 VAR_4 = FUNC_8("machdep.cpu.brand_string", VAR_9, &VAR_6, ((void*)0), 0);
 VAR_0;FUNC_0(VAR_4, "sysctlbyname machdep.cpu.brand_string");
 VAR_9[VAR_6+1] = '\0';

 VAR_10 = FUNC_7(VAR_9, "CPU @ ");
 if (VAR_10 == ((void*)0)) {
  FUNC_1("Could not fix frequency, %s field not present\n", "CPU @ ");
  goto out;
 }

 if (FUNC_7(VAR_10, "Hz") != ((void*)0)) {
  FUNC_6(VAR_10, "CPU @ %f%cHz", &VAR_7, &VAR_8);
 } else {
  if (FUNC_7(VAR_10, "hz") != ((void*)0)) {
   FUNC_6(VAR_10, "CPU @ %f%chz", &VAR_7, &VAR_8);
  } else {
   FUNC_1("Could not fix frequency, %s field not present\n", "Hz");
   goto out;
  }
 }

 switch(VAR_8){
 case 'M':
 case 'm':
  VAR_5 = (int) VAR_7;
  break;
 case 'G':
 case 'g':
  VAR_5 = (int) (VAR_7*1000);
  break;
 default:
  FUNC_1("Could not fix frequency, scale field is %c\n", VAR_8);
  goto out;
 }

 FUNC_5(VAR_11, 10, "%d", VAR_5);
 FUNC_1("Setting min and max cpu frequency to %d (%s)\n", VAR_5, VAR_11);
 char *VAR_12[] = {"/usr/local/bin/xcpm", "limits", VAR_11, VAR_11, ((void*)0)};
 VAR_2 = FUNC_4(&VAR_3, VAR_12[0], ((void*)0), ((void*)0), VAR_12, VAR_1);
 FUNC_9(VAR_3, &VAR_2, 0);

out:
 FUNC_2(VAR_9);
 return;

}
