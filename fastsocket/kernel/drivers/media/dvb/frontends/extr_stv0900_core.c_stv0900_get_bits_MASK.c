
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv0900_internal {int dummy; } ;


 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (struct stv0900_internal*,int) ;

u8 FUNC_2(struct stv0900_internal *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = 0xff;
 u8 VAR_3, VAR_4;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);

 VAR_2 = FUNC_1(VAR_0, VAR_1 >> 16);
 VAR_2 = (VAR_2 & VAR_3) >> VAR_4;

 return VAR_2;
}
