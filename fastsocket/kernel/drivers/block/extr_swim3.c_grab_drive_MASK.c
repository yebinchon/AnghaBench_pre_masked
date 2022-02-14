
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_state {scalar_t__ state; int lock; int wanted; int wait; } ;
typedef enum swim_state { ____Placeholder_swim_state } swim_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct floppy_state *VAR_4, enum swim_state VAR_5,
        int VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_4->lock, VAR_7);
 if (VAR_4->state != VAR_3) {
  ++VAR_4->wanted;
  while (VAR_4->state != VAR_1) {
   if (VAR_6 && FUNC_1(VAR_2)) {
    --VAR_4->wanted;
    FUNC_3(&VAR_4->lock, VAR_7);
    return -VAR_0;
   }
   FUNC_0(&VAR_4->wait);
  }
  --VAR_4->wanted;
 }
 VAR_4->state = VAR_5;
 FUNC_3(&VAR_4->lock, VAR_7);
 return 0;
}
