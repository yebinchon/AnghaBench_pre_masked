
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int int32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int *,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*,int *,int) ;

bool
FUNC_4(char *VAR_6,
        int32 *VAR_7, int *VAR_8,
        uint64 *VAR_9,
        uint32 *VAR_10)
{
 char *VAR_11 = VAR_6;

 VAR_11 = FUNC_1(VAR_11, '_');
 if (VAR_11 == ((void*)0))
 {
  return 0;
 }


 ++VAR_11;

 *VAR_7 = FUNC_2(VAR_11, ((void*)0), 10);

 if ((*VAR_7 == 0 && VAR_5 == VAR_0) ||
  (*VAR_7 == VAR_2 && VAR_5 == VAR_1))
 {
  return 0;
 }

 VAR_11 = FUNC_1(VAR_11, '_');
 if (VAR_11 == ((void*)0))
 {
  return 0;
 }


 ++VAR_11;

 *VAR_8 = FUNC_2(VAR_11, ((void*)0), 10);
 if ((*VAR_8 == 0 && VAR_5 == VAR_0) ||
  (*VAR_8 == VAR_2 && VAR_5 == VAR_1))
 {
  return 0;
 }

 VAR_11 = FUNC_1(VAR_11, '_');
 if (VAR_11 == ((void*)0))
 {
  return 0;
 }


 ++VAR_11;

 *VAR_9 = FUNC_0(VAR_11, ((void*)0), 10);
 if ((*VAR_9 == 0 && VAR_5 != 0) ||
  (*VAR_9 == VAR_4 && VAR_5 == VAR_1))
 {
  return 0;
 }

 VAR_11 = FUNC_1(VAR_11, '_');
 if (VAR_11 == ((void*)0))
 {
  return 0;
 }


 ++VAR_11;

 *VAR_10 = FUNC_3(VAR_11, ((void*)0), 10);
 if ((*VAR_10 == 0 && VAR_5 == VAR_0) ||
  (*VAR_10 == VAR_3 && VAR_5 == VAR_1))
 {
  return 0;
 }

 return 1;
}
