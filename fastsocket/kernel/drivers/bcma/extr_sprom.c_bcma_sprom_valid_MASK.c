
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(const u16 *VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_3[VAR_1 - 1] & VAR_2;
 if (VAR_4 != 8 && VAR_4 != 9) {
  FUNC_1("Unsupported SPROM revision: %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
