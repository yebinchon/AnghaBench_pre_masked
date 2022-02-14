
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chassis_options_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char,int ,int ,...) ;

int FUNC_1(chassis_options_t *VAR_2,
  int *VAR_3,
  char **VAR_4) {

 FUNC_0(VAR_2,
  "version", 'V', 0, VAR_0, VAR_3, "Show version", ((void*)0));

 FUNC_0(VAR_2,
  "defaults-file", 0, 0, VAR_1, VAR_4, "configuration file", "<file>");

 return 0;
}
