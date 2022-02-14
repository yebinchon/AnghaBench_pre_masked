
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uuid_t ;
typedef char* uuid_string_t ;


 int FUNC_0 (char* const,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*) ;

int
FUNC_1(const uuid_string_t VAR_0, uuid_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0,
  "%2hhx%2hhx%2hhx%2hhx-"
  "%2hhx%2hhx-"
  "%2hhx%2hhx-"
  "%2hhx%2hhx-"
  "%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%n",
  &VAR_1[0], &VAR_1[1], &VAR_1[2], &VAR_1[3],
  &VAR_1[4], &VAR_1[5],
  &VAR_1[6], &VAR_1[7],
  &VAR_1[8], &VAR_1[9],
  &VAR_1[10], &VAR_1[11], &VAR_1[12], &VAR_1[13], &VAR_1[14], &VAR_1[15], &VAR_2);

 return (VAR_2 != 36 || VAR_0[VAR_2] != '\0' ? -1 : 0);
}
