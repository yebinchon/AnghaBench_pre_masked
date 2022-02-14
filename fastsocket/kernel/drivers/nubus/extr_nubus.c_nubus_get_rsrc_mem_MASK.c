
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dirent {int mask; } ;


 unsigned char* FUNC_0 (struct nubus_dirent const*) ;
 int FUNC_1 (unsigned char**,int,int ) ;

void FUNC_2(void *VAR_0, const struct nubus_dirent* VAR_1,
   int VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)VAR_0;
 unsigned char *VAR_4 = FUNC_0(VAR_1);
 while(VAR_2)
 {
  *VAR_3++ = FUNC_1(&VAR_4, 1, VAR_1->mask);
  VAR_2--;
 }
}
