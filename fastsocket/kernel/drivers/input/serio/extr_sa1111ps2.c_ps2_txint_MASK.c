
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {size_t head; size_t tail; int lock; scalar_t__ base; int * buf; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct ps2if *VAR_6 = VAR_5;
 unsigned int VAR_7;

 FUNC_3(&VAR_6->lock);
 VAR_7 = FUNC_1(VAR_6->base + VAR_3);
 if (VAR_6->head == VAR_6->tail) {
  FUNC_0(VAR_4);

 } else if (VAR_7 & VAR_1) {
  FUNC_2(VAR_6->buf[VAR_6->tail], VAR_6->base + VAR_2);
  VAR_6->tail = (VAR_6->tail + 1) & (sizeof(VAR_6->buf) - 1);
 }
 FUNC_4(&VAR_6->lock);

 return VAR_0;
}
