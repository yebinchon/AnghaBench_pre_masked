
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;


 int FUNC_0 (struct line*,unsigned int,char*,char**) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(struct line *VAR_0, unsigned int VAR_1, int VAR_2, char **VAR_3)
{
 int VAR_4;
 char VAR_5[sizeof("conxxxx=none\0")];

 FUNC_1(VAR_5, "%d=none", VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_3);
 if (VAR_4 >= 0)
  VAR_4 = 0;
 return VAR_4;
}
