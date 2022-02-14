
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static int FUNC_2(const char * VAR_3) {
 if ((VAR_2 = FUNC_1(VAR_3, VAR_1 | VAR_0)) == -1) {
  return -1;
 }
 FUNC_0("CDInit (%s) OK\n", VAR_3);
 return 0;
}
