
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x {TYPE_2__* fp; TYPE_3__* dev; TYPE_1__* sp_objs; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_4__ {int mac_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (struct bnx2x*,int ,int *,int,int ,unsigned long*) ;
 int FUNC_6 (struct bnx2x*,int ,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct bnx2x *VAR_4, bool VAR_5)
{
 if (FUNC_7(VAR_4->dev->dev_addr) &&
     (FUNC_2(VAR_4) || FUNC_1(VAR_4))) {
  FUNC_0(VAR_2 | VAR_1,
     "Ignoring Zero MAC for STORAGE SD mode\n");
  return 0;
 }

 if (FUNC_3(VAR_4)) {
  unsigned long VAR_6 = 0;

  FUNC_0(VAR_2, "Adding Eth MAC\n");
  FUNC_4(VAR_3, &VAR_6);
  return FUNC_5(VAR_4, VAR_4->dev->dev_addr,
      &VAR_4->sp_objs->mac_obj, VAR_5,
      VAR_0, &VAR_6);
 } else {
  return FUNC_6(VAR_4, VAR_4->dev->dev_addr,
          VAR_4->fp->index, 1);
 }
}
