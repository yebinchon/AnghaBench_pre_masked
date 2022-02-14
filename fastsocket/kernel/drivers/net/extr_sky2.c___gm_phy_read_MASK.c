
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sky2_hw {TYPE_2__** dev; TYPE_1__* pdev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_5 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sky2_hw *VAR_8, unsigned VAR_9, u16 VAR_10, u16 *VAR_11)
{
 int VAR_12;

 FUNC_5(VAR_8, VAR_9, VAR_2, FUNC_0(VAR_6)
      | FUNC_1(VAR_10) | VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  u16 VAR_13 = FUNC_4(VAR_8, VAR_9, VAR_2);
  if (VAR_13 == 0xffff)
   goto io_error;

  if (VAR_13 & VAR_4) {
   *VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_5);
   return 0;
  }

  FUNC_6(10);
 }

 FUNC_3(&VAR_8->pdev->dev, "%s: phy read timeout\n", VAR_8->dev[VAR_9]->name);
 return -VAR_1;
io_error:
 FUNC_2(&VAR_8->pdev->dev, "%s: phy I/O error\n", VAR_8->dev[VAR_9]->name);
 return -VAR_0;
}
