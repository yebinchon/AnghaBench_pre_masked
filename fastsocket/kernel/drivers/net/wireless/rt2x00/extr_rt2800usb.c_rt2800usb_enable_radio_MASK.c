
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* rx; } ;
struct TYPE_3__ {int entry_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rt2x00_dev *VAR_9)
{
 u32 VAR_10;

 if (FUNC_5(FUNC_1(VAR_9)))
  return -VAR_1;

 FUNC_3(VAR_9, VAR_2, &VAR_10);
 FUNC_2(&VAR_10, VAR_3, 0);
 FUNC_2(&VAR_10, VAR_4, 0);
 FUNC_2(&VAR_10, VAR_6, 128);




 FUNC_2(&VAR_10, VAR_5,
      ((VAR_9->ops->rx->entry_num * VAR_0)
       / 1024) - 3);
 FUNC_2(&VAR_10, VAR_7, 1);
 FUNC_2(&VAR_10, VAR_8, 1);
 FUNC_4(VAR_9, VAR_2, VAR_10);

 return FUNC_0(VAR_9);
}
