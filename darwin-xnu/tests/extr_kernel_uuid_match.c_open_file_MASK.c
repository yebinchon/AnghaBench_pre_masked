
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 void* FUNC_2 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void *FUNC_4(char *VAR_5, size_t *VAR_6) {
 int VAR_7;
 if ((VAR_7 = FUNC_3(VAR_5, VAR_2)) < 0) {
  return ((void*)0);
 }
 *VAR_6 = (size_t)FUNC_1(VAR_7, (off_t)0, VAR_4);
 void *VAR_8 = FUNC_2(((void*)0), *VAR_6, VAR_3, VAR_1, VAR_7, 0);
 FUNC_0(VAR_7);
 if (VAR_8 == VAR_0) {
  return ((void*)0);
 }
 return VAR_8;
}
