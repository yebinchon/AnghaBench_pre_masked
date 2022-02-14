
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int (* uni2char ) (scalar_t__,char*,int) ;} ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__,char*,int) ;

int
FUNC_2(const __le16 *VAR_1, int VAR_2,
  const struct nls_table *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6 = 0;
 int VAR_7 = VAR_2 / 2;
 char VAR_8[VAR_0];
 __u16 VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_9 = FUNC_0(&VAR_1[VAR_4]);
  if (VAR_9 == 0)
   break;

  VAR_5 = VAR_3->uni2char(VAR_9, VAR_8, VAR_0);
  if (VAR_5 > 0)
   VAR_6 += VAR_5;
  else
   VAR_6++;
 }

 return VAR_6;
}
