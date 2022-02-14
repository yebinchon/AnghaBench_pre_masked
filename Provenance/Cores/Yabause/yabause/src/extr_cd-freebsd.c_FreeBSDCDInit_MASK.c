
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static int FUNC_3(const char * VAR_4) {
 int VAR_5 = 2352;

 if ((VAR_3 = FUNC_2(VAR_4, VAR_2 | VAR_1)) == -1) {
  FUNC_0("CDInit (%s) failed\n", VAR_4);
  return -1;
 }

 if (FUNC_1 (VAR_3, VAR_0, &VAR_5) == -1) {
  return -1;
 }

 FUNC_0("CDInit (%s) OK\n", VAR_4);
 return 0;
}
