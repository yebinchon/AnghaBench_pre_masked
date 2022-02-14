
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_drv_cc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcma_drv_cc*,int ) ;
 int FUNC_2 (struct bcma_drv_cc*,int) ;

__attribute__((used)) static u32 FUNC_3(struct bcma_drv_cc *VAR_10, u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 FUNC_0(!VAR_12 || VAR_12 > 4);


 VAR_13 = FUNC_2(VAR_10, VAR_11 + VAR_3);
 VAR_14 = (VAR_13 & VAR_4)
  >> VAR_5;
 VAR_15 = (VAR_13 & VAR_6)
  >> VAR_7;
 VAR_16 = (VAR_13 & VAR_8)
  >> VAR_9;

 VAR_13 = FUNC_1(VAR_10, VAR_0);
 if (VAR_13 & VAR_1)

  VAR_17 = (25000000 / 4) * VAR_14 * VAR_16 / VAR_15;
 else

  VAR_17 = (25000000 / 2) * VAR_14 * VAR_16 / VAR_15;

 if (VAR_12 == VAR_2)
  VAR_17 = VAR_17 / 4;

 return VAR_17;
}
