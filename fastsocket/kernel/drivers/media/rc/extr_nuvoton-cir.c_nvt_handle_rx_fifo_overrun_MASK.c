
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int rdev; scalar_t__ pkts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvt_dev*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct nvt_dev *VAR_1)
{
 FUNC_2(VAR_0, "RX FIFO overrun detected, flushing data!");

 VAR_1->pkts = 0;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1->rdev);
}
