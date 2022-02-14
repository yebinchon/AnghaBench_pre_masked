
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (unsigned char*,int,int*) ;} ;


 int FUNC_0 (unsigned char*,int,int*) ;

__attribute__((used)) static inline int
FUNC_1(struct nls_table *VAR_0, unsigned char *VAR_1, int VAR_2, wchar_t *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0->char2uni(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  *VAR_3 = 0x003f;
  VAR_4 = 1;
 }
 return VAR_4;
}
