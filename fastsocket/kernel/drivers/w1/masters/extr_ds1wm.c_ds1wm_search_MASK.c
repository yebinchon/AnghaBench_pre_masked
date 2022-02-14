
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* w1_slave_found_callback ) (struct w1_master*,unsigned long long) ;
typedef int u8 ;
struct w1_master {int dummy; } ;
struct ds1wm_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 unsigned char FUNC_1 (struct ds1wm_data*,int) ;
 scalar_t__ FUNC_2 (struct ds1wm_data*) ;
 int FUNC_3 (struct ds1wm_data*,int ) ;
 int FUNC_4 (struct ds1wm_data*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct w1_master *VAR_3,
   u8 VAR_4, w1_slave_found_callback VAR_5)
{
 struct ds1wm_data *VAR_6 = VAR_2;
 int VAR_7;
 unsigned long long VAR_8;



 if (FUNC_2(VAR_6))
  return;

 FUNC_3(VAR_6, VAR_4);
 FUNC_4(VAR_6, VAR_0, VAR_1);

 for (VAR_8 = 0, VAR_7 = 0; VAR_7 < 16; VAR_7++) {

  unsigned char VAR_9, VAR_10, VAR_11;

  VAR_9 = FUNC_1(VAR_6, 0x00);

  VAR_10 = ((VAR_9 & 0x02) >> 1) |
      ((VAR_9 & 0x08) >> 2) |
      ((VAR_9 & 0x20) >> 3) |
      ((VAR_9 & 0x80) >> 4);

  VAR_11 = ((VAR_9 & 0x01) >> 0) |
      ((VAR_9 & 0x04) >> 1) |
      ((VAR_9 & 0x10) >> 2) |
      ((VAR_9 & 0x40) >> 3);

  VAR_8 |= (unsigned long long) VAR_10 << (VAR_7 * 4);

 }
 FUNC_0(&VAR_6->pdev->dev, "found 0x%08llX\n", VAR_8);

 FUNC_4(VAR_6, VAR_0, ~VAR_1);
 FUNC_2(VAR_6);

 VAR_5(VAR_3, VAR_8);
}
