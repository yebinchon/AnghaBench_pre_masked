
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long*,char const*,int) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_0, const char *VAR_1, int VAR_2)
{
 unsigned long VAR_3[2];
 int VAR_4, VAR_5;

 for (VAR_4 = VAR_2; VAR_4 > 0; VAR_4 -= VAR_5) {
  VAR_5 = (VAR_4 > 16) ? 16 : VAR_4;
  FUNC_1(VAR_3, VAR_1, VAR_5);
  FUNC_0(VAR_0, VAR_5, VAR_3[0], VAR_3[1]);
  VAR_1 += VAR_5;
 }
 return VAR_2;
}
