
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int ntsid_t ;
typedef int guid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 long FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*,char**) ;
 int FUNC_8 (int,char*,int,int *) ;
 int FUNC_9 (char*,int *) ;
 int VAR_4 ;
 int FUNC_10 (char*,int *,int) ;

int
FUNC_11( char *VAR_5, guid_t *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 ntsid_t VAR_9;
 long VAR_10;
 char *VAR_11, *VAR_12, *VAR_13 = ((void*)0);

 *VAR_6 = VAR_3;






 VAR_10 = 1;
 VAR_12 = ((void*)0);
 VAR_11 = VAR_5;
 while (*VAR_11) {
  if ((*VAR_11 < '0') || (*VAR_11 > '9'))
   VAR_10 = 0;
  if (*VAR_11 == '@')
   VAR_12 = VAR_11;
  VAR_11++;
 }

 if (VAR_10) {

  VAR_10 = *VAR_5 ? FUNC_10(VAR_5, ((void*)0), 10) : -2;
  if (VAR_7)
   VAR_8 = FUNC_1((gid_t)VAR_10, VAR_6);
  else
   VAR_8 = FUNC_5((uid_t)VAR_10, VAR_6);
  FUNC_8(VAR_8, VAR_5, VAR_7, VAR_6);
  return (VAR_8);
 }


 VAR_8 = FUNC_9(VAR_5, &VAR_9);
 if (!VAR_8) {
  VAR_8 = FUNC_3(&VAR_9, VAR_6);
  FUNC_8(VAR_8, VAR_5, 1, VAR_6);
  return (VAR_8);
 }


 if (VAR_12 && VAR_12[1]) {
  VAR_13 = FUNC_7(VAR_5, &VAR_12);
  if (VAR_13)
   VAR_5 = VAR_13;
 }


 if (VAR_4 & VAR_2) {





  if (VAR_7)
   VAR_8 = FUNC_2(VAR_5, VAR_6);
  else
   VAR_8 = FUNC_4(VAR_5, VAR_6);
  FUNC_8(VAR_8, VAR_5, VAR_7, VAR_6);
 } else {
  VAR_8 = VAR_0;
 }

 if (VAR_8) {



  VAR_10 = FUNC_6(VAR_5, VAR_12 != ((void*)0));
  if (VAR_7)
   VAR_8 = FUNC_1((gid_t)VAR_10, VAR_6);
  else
   VAR_8 = FUNC_5((uid_t)VAR_10, VAR_6);
  FUNC_8(VAR_8, VAR_5, VAR_7, VAR_6);
 }



 if (VAR_12 && *VAR_12 == '\0')
  *VAR_12 = '@';


 if (VAR_13)
  FUNC_0(VAR_13, VAR_1);

 return (VAR_8);
}
