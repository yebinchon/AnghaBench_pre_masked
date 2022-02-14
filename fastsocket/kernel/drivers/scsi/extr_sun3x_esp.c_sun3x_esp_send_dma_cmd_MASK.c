
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct esp {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct esp*,int) ;
 int FUNC_4 (struct esp*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct esp *VAR_7, u32 VAR_8, u32 VAR_9,
      u32 VAR_10, int VAR_11, u8 VAR_12)
{
 u32 VAR_13;

 FUNC_0(!(VAR_12 & VAR_4));

 FUNC_4(VAR_7, (VAR_9 >> 0) & 0xff, VAR_5);
 FUNC_4(VAR_7, (VAR_9 >> 8) & 0xff, VAR_6);
 VAR_13 = FUNC_1(VAR_1);
 VAR_13 |= VAR_2;
 if (VAR_11)
  VAR_13 |= VAR_3;
 else
  VAR_13 &= ~VAR_3;
 FUNC_2(VAR_13, VAR_1);
 FUNC_2(VAR_8, VAR_0);

 FUNC_3(VAR_7, VAR_12);
}
