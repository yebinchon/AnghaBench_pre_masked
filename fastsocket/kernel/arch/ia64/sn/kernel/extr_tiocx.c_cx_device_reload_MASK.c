
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfg_num; int part_num; int nasid; } ;
struct cx_dev {int bt; int hubdev; TYPE_1__ cx_id; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct cx_dev*) ;

__attribute__((used)) static int FUNC_2(struct cx_dev *VAR_0)
{
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0->cx_id.nasid, VAR_0->cx_id.part_num,
      VAR_0->cx_id.mfg_num, VAR_0->hubdev,
      VAR_0->bt);
}
