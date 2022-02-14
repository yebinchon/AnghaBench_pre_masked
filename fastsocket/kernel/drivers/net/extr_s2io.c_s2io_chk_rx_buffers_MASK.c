
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2io_nic {int dummy; } ;
struct ring_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s2io_nic*,struct ring_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct s2io_nic *VAR_2, struct ring_info *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_3, 0) == -VAR_0) {
  FUNC_0(VAR_1, "%s: Out of memory in Rx Intr!!\n",
     VAR_3->dev->name);
 }
 return 0;
}
