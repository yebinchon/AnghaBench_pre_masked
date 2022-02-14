
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (char const*,int,int*) ;} ;
typedef int __le16 ;


 int FUNC_0 (int,char*,char const,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char const*,int,int*) ;

int
FUNC_3(__le16 *VAR_0, const char *VAR_1, int VAR_2,
       const struct nls_table *VAR_3)
{
 int VAR_4;
 int VAR_5;
 wchar_t VAR_6;

 for (VAR_5 = 0; VAR_2 && *VAR_1; VAR_5++, VAR_1 += VAR_4, VAR_2 -= VAR_4) {
  VAR_4 = VAR_3->char2uni(VAR_1, VAR_2, &VAR_6);
  if (VAR_4 < 1) {
   FUNC_0(1, "strtoUCS: char2uni of 0x%x returned %d",
    *VAR_1, VAR_4);

   VAR_6 = 0x003f;
   VAR_4 = 1;
  }
  FUNC_1(VAR_6, &VAR_0[VAR_5]);
 }

 FUNC_1(0, &VAR_0[VAR_5]);
 return VAR_5;
}
