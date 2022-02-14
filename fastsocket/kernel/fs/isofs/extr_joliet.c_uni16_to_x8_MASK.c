
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int (* uni2char ) (int ,unsigned char*,int ) ;} ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned char*,int ) ;

__attribute__((used)) static int
FUNC_3(unsigned char *VAR_1, __be16 *VAR_2, int VAR_3, struct nls_table *VAR_4)
{
 __be16 *VAR_5, VAR_6;
 unsigned char *VAR_7;

 VAR_5 = VAR_2;
 VAR_7 = VAR_1;

 while ((VAR_6 = FUNC_1(VAR_5)) && VAR_3) {
  int VAR_8;
  VAR_8 = VAR_4->uni2char(FUNC_0(VAR_6), VAR_7, VAR_0);
  if (VAR_8 > 0)
   VAR_7 += VAR_8;
  else
   *VAR_7++ = '?';
  VAR_5++;

  VAR_3--;
 }
 *VAR_7 = 0;
 return (VAR_7 - VAR_1);
}
