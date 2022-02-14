
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef char u_char ;
struct in6_addr {int* s6_addr8; int * s6_addr16; } ;
struct ifnet {int dummy; } ;
typedef int n ;
typedef int l ;
typedef int ctxt ;
typedef struct in6_addr SHA1_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,char*,char) ;
 int VAR_1 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct in6_addr*,int) ;
 scalar_t__ FUNC_5 (struct in6_addr*,struct ifnet*,int *) ;
 int FUNC_6 (char*,char const*,char) ;

int
FUNC_7(
 struct ifnet *VAR_2,
 const char *VAR_3,
 int VAR_4,
 struct in6_addr *VAR_5)
{
 const char *VAR_6;
 u_char *VAR_7;
 SHA1_CTX VAR_8;
 u_int8_t VAR_9[VAR_1];
 char VAR_10;
 char VAR_11[64];

 if (!VAR_4 || !VAR_3)
  return (-1);

 VAR_6 = VAR_3;
 while (VAR_6 && *VAR_6 && *VAR_6 != '.' && VAR_6 - VAR_3 < VAR_4)
  VAR_6++;
 if (VAR_6 - VAR_3 > sizeof (VAR_11) - 1)
  return (-1);
 VAR_10 = VAR_6 - VAR_3;
 FUNC_6(VAR_11, VAR_3, VAR_10);
 VAR_11[(int)VAR_10] = '\0';
 for (VAR_7 = (u_char *) VAR_11; *VAR_7; VAR_7++) {
  if ('A' <= *VAR_7 && *VAR_7 <= 'Z')
   *VAR_7 = *VAR_7 - 'A' + 'a';
 }


 FUNC_4(&VAR_8, sizeof (VAR_8));
 FUNC_1(&VAR_8);
 FUNC_2(&VAR_8, &VAR_10, sizeof (VAR_10));
 FUNC_2(&VAR_8, VAR_11, VAR_10);
 FUNC_0(VAR_9, &VAR_8);

 FUNC_4(VAR_5, sizeof (*VAR_5));
 VAR_5->s6_addr16[0] = VAR_0;
 VAR_5->s6_addr8[11] = 2;
 VAR_5->s6_addr8[12] = 0xff;

 FUNC_3(VAR_9, &VAR_5->s6_addr8[13], 3);
 if (FUNC_5(VAR_5, VAR_2, ((void*)0)))
  return (-1);

 return (0);
}
