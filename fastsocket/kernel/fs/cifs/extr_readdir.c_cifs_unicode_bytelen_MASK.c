
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_1)
{
 int VAR_2;
 __le16 *VAR_3 = (__le16 *)VAR_1;

 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  if (VAR_3[VAR_2] == 0)
   return VAR_2 << 1;
 }
 FUNC_0(1, "Unicode string longer than PATH_MAX found");
 return VAR_2 << 1;
}
