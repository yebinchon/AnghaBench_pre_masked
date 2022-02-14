
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sky2_hw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_10 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sky2_hw*) ;
 int FUNC_3 (struct sky2_hw*,int,int ) ;
 int FUNC_4 (struct sky2_hw*,int) ;

__attribute__((used)) static void FUNC_5(struct sky2_hw *VAR_11, u32 VAR_12)
{
 if (FUNC_1())
  FUNC_0(&VAR_11->pdev->dev, "error interrupt status=%#x\n", VAR_12);

 if (VAR_12 & VAR_8)
  FUNC_2(VAR_11);

 if (VAR_12 & VAR_9)
  FUNC_4(VAR_11, 0);

 if (VAR_12 & VAR_10)
  FUNC_4(VAR_11, 1);

 if (VAR_12 & VAR_4)
  FUNC_3(VAR_11, 0, VAR_0);

 if (VAR_12 & VAR_5)
  FUNC_3(VAR_11, 1, VAR_1);

 if (VAR_12 & VAR_6)
  FUNC_3(VAR_11, 0, VAR_2);

 if (VAR_12 & VAR_7)
  FUNC_3(VAR_11, 1, VAR_3);
}
