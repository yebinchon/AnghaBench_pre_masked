
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int,int,int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct stv0900_internal *VAR_4,
     u32 VAR_5,
     enum fe_stv0900_demod_num VAR_6)
{
 s32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = (FUNC_1(VAR_4, VAR_3) << 24) +
  (FUNC_1(VAR_4, VAR_2) << 16) +
  (FUNC_1(VAR_4, VAR_1) << 8) +
  (FUNC_1(VAR_4, VAR_0));
 FUNC_0("lock: srate=%d r0=0x%x r1=0x%x r2=0x%x r3=0x%x \n",
  VAR_11, FUNC_1(VAR_4, VAR_0),
  FUNC_1(VAR_4, VAR_1),
  FUNC_1(VAR_4, VAR_2),
  FUNC_1(VAR_4, VAR_3));

 VAR_9 = (VAR_5) >> 16;
 VAR_10 = (VAR_11) >> 16;

 VAR_7 = (VAR_5) % 0x10000;
 VAR_8 = (VAR_11) % 0x10000;
 VAR_11 = (VAR_9 * VAR_10) +
  ((VAR_9 * VAR_8) >> 16) +
  ((VAR_10 * VAR_7) >> 16);

 return VAR_11;
}
