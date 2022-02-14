
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char**,char**,int ) ;
 char* VAR_3 ;

int FUNC_1(struct cache_detail *VAR_4, char *VAR_5)
{
 static char *VAR_6[] = { "HOME=/",
  "TERM=linux",
  "PATH=/sbin:/usr/sbin:/bin:/usr/bin",
  ((void*)0)
 };
 char *VAR_7[] = {
  VAR_3,
  VAR_4->name,
  VAR_5,
  ((void*)0)
 };
 int VAR_8 = -VAR_0;

 if (VAR_3[0] == '\0')
  goto out;
 VAR_8 = FUNC_0(VAR_7[0], VAR_7, VAR_6, VAR_2);






 if (VAR_8 == -VAR_1 || VAR_8 == -VAR_0)
  VAR_3[0] = '\0';
out:
 return VAR_8 > 0 ? 0 : VAR_8;
}
