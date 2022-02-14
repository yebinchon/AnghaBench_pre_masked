
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_addr; } ;
typedef scalar_t__ ap ;



__attribute__((used)) static void
FUNC_0(struct sockaddr_in *VAR_0)
{
 char *VAR_1 = (char *)&VAR_0->sin_addr;
 char *VAR_2 = (char *)(&VAR_0->sin_addr + 1);

 VAR_0->sin_len = 0;
 while (--VAR_2 >= VAR_1)
  if (*VAR_2) {
   (VAR_0)->sin_len = VAR_2 - (char *)(VAR_0) + 1;
   break;
  }
}
