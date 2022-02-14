
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipack {int dummy; } ;
struct av7110 {struct ipack* ipack; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (struct ipack*) ;
 int FUNC_1 (int const*,size_t,struct ipack*) ;
 int FUNC_2 (struct ipack*) ;

__attribute__((used)) static int FUNC_3(struct av7110 *VAR_4, int VAR_5, const u8 *VAR_6, size_t VAR_7)
{
 struct ipack *VAR_8 = &VAR_4->ipack[VAR_5];

 if (VAR_6[1] & VAR_3) {
  FUNC_2(VAR_8);
  return -1;
 }

 if (!(VAR_6[3] & VAR_1))
  return -1;

 if (VAR_6[1] & VAR_2)
  FUNC_0(VAR_8);

 if (VAR_6[3] & VAR_0) {
  VAR_7 -= VAR_6[4] + 1;
  VAR_6 += VAR_6[4] + 1;
  if (!VAR_7)
   return 0;
 }

 FUNC_1(VAR_6 + 4, VAR_7 - 4, VAR_8);
 return 0;
}
