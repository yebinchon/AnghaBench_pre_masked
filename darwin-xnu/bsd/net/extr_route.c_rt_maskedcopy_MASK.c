
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {char* sa_data; int sa_len; int sa_family; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static void
FUNC_2(const struct sockaddr *VAR_0, struct sockaddr *VAR_1,
    const struct sockaddr *VAR_2)
{
 const char *VAR_3 = &VAR_2->sa_data[0];
 const char *VAR_4 = &VAR_0->sa_data[0];
 char *VAR_5 = &VAR_1->sa_data[0];
 const char *VAR_6 = (char *)VAR_1
        + FUNC_0(VAR_2->sa_len, VAR_0->sa_len);
 const char *VAR_7 = (char *)VAR_1 + VAR_0->sa_len;

 VAR_1->sa_len = VAR_0->sa_len;
 VAR_1->sa_family = VAR_0->sa_family;

 while (VAR_5 < VAR_6)
  *VAR_5++ = *VAR_4++ & *VAR_3++;
 if (VAR_5 < VAR_7)
  FUNC_1(VAR_5, 0, (size_t)(VAR_7 - VAR_5));
}
