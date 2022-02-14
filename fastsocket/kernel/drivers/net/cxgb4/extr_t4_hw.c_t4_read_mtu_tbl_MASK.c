
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;

void FUNC_6(struct adapter *VAR_2, u16 *VAR_3, u8 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  FUNC_5(VAR_2, VAR_1,
        FUNC_0(0xff) | FUNC_1(VAR_6));
  VAR_5 = FUNC_4(VAR_2, VAR_1);
  VAR_3[VAR_6] = FUNC_2(VAR_5);
  if (VAR_4)
   VAR_4[VAR_6] = FUNC_3(VAR_5);
 }
}
