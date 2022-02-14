
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int* srch_range; int mclk; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;

int FUNC_2(struct stv0900_internal *VAR_6,
     enum fe_stv0900_demod_num VAR_7)
{
 s32 VAR_8,
  VAR_9,
  VAR_10;

 int VAR_11 = VAR_4;

 VAR_8 = (FUNC_1(VAR_6, VAR_3) << 8)
     | FUNC_1(VAR_6, VAR_2);
 VAR_8 = FUNC_0(VAR_8, 16);
 VAR_9 = (FUNC_1(VAR_6, VAR_1) << 8)
     | FUNC_1(VAR_6, VAR_0);
 VAR_10 = VAR_6->srch_range[VAR_7] / 1000;

 VAR_10 += (VAR_10 / 10);
 VAR_10 = 65536 * (VAR_10 / 2);
 VAR_10 /= VAR_6->mclk / 1000;
 if (VAR_10 > 0x4000)
  VAR_10 = 0x4000;

 if ((VAR_9 > 0x2000)
   || (VAR_8 > (2 * VAR_10))
   || (VAR_8 < (-2 * VAR_10)))
  VAR_11 = VAR_5;

 return VAR_11;
}
