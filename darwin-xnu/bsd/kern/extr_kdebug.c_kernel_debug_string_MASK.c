
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int str_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ,char*,int ) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char const*,int) ;

int
FUNC_9(uint32_t VAR_4, uint64_t *VAR_5, const char *VAR_6)
{

 __attribute__((aligned(sizeof(uintptr_t)))) char VAR_7[VAR_2];
 FUNC_7(sizeof(VAR_7) > VAR_1);
 vm_size_t VAR_8;
 int VAR_9;

 FUNC_1(VAR_5);

 if (FUNC_0(VAR_3 == 0)) {
  return 0;
 }

 if (!FUNC_3(VAR_4)) {
  return 0;
 }

 if (!FUNC_4(VAR_4)) {
  return 0;
 }

 if ((VAR_9 = FUNC_2(VAR_4, *VAR_5)) != 0) {
  return VAR_9;
 }

 if (VAR_6 == ((void*)0)) {
  if (VAR_5 == 0) {
   return VAR_0;
  }

  *VAR_5 = FUNC_5(VAR_4, *VAR_5, ((void*)0), 0);
  return 0;
 }

 FUNC_6(VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_8(VAR_7, VAR_6, VAR_1 + 1);
 *VAR_5 = FUNC_5(VAR_4, *VAR_5, VAR_7,
                                        VAR_8);
 return 0;
}
