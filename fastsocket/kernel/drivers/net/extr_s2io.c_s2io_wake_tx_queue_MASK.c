
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fifo_info {scalar_t__ queue_state; int dev; int fifo_no; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(
 struct fifo_info *VAR_2, int VAR_3, u8 VAR_4)
{

 if (VAR_4) {
  if (VAR_3 && FUNC_0(VAR_2->dev, VAR_2->fifo_no))
   FUNC_3(VAR_2->dev, VAR_2->fifo_no);
 } else if (VAR_3 && (VAR_2->queue_state == VAR_1)) {
  if (FUNC_1(VAR_2->dev)) {
   VAR_2->queue_state = VAR_0;
   FUNC_2(VAR_2->dev);
  }
 }
}
