
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stv0900_internal*,int ) ;

u32 FUNC_1(struct stv0900_internal *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;





 VAR_7 = (FUNC_0(VAR_5, VAR_2) << 10) +
  (FUNC_0(VAR_5, VAR_1) << 2) +
  FUNC_0(VAR_5, VAR_0);

 VAR_7 = (VAR_7 * 1000) / 64;

 VAR_8 = (FUNC_0(VAR_5, VAR_4) >> 2) +
  FUNC_0(VAR_5, VAR_3);

 VAR_8 = (VAR_8 * 1000) / 2048;

 return VAR_7 + VAR_8;
}
