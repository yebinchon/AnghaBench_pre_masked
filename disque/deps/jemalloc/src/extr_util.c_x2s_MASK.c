
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int ,int,int,char*,size_t*) ;

__attribute__((used)) static char *
FUNC_2(uintmax_t VAR_0, bool VAR_1, bool VAR_2, char *VAR_3, size_t *VAR_4)
{

 VAR_3 = FUNC_1(VAR_0, 16, VAR_2, VAR_3, VAR_4);
 if (VAR_1) {
  VAR_3 -= 2;
  (*VAR_4) += 2;
  FUNC_0(VAR_3, VAR_2 ? "0X" : "0x", 2);
 }
 return (VAR_3);
}
