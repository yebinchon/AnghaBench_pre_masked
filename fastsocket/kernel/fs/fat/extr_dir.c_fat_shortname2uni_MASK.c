
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (struct nls_table*,unsigned char*,int,int *) ;
 int FUNC_1 (struct nls_table*,unsigned char*,int,int *) ;

__attribute__((used)) static inline int
FUNC_2(struct nls_table *VAR_3, unsigned char *VAR_4, int VAR_5,
    wchar_t *VAR_6, unsigned short VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 if (VAR_7 & VAR_0)
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_7 & VAR_1)
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_7 & VAR_2) {
  if (VAR_8)
   VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  else
   VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 } else
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_9;
}
