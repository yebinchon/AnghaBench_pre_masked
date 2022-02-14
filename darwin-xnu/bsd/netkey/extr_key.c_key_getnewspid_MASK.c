
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct secpolicy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct secpolicy* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct secpolicy*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u_int32_t
FUNC_5(void)
{
 u_int32_t VAR_5 = 0;
 int VAR_6 = VAR_2;
 struct secpolicy *VAR_7;


 FUNC_3(VAR_4);
 while (VAR_6--) {
  VAR_5 = (VAR_3 = (VAR_3 == ~0 ? 1 : VAR_3 + 1));

  if ((VAR_7 = FUNC_0(VAR_5)) == ((void*)0))
   break;

  FUNC_2(VAR_7, VAR_0);
 }
 FUNC_4(VAR_4);
 if (VAR_6 == 0 || VAR_5 == 0) {
  FUNC_1((VAR_1, "key_getnewspid: to allocate policy id is failed.\n"));
  return 0;
 }

 return VAR_5;
}
