
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_lock {int lock; int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_lock*,int ) ;
 scalar_t__ FUNC_1 (struct block_lock*) ;
 int FUNC_2 (struct block_lock*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct block_lock *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out;

 if (FUNC_1(VAR_2)) {
  VAR_2->count++;
  FUNC_0(VAR_2, VAR_1);
  VAR_3 = 0;
 } else
  VAR_3 = -VAR_0;

out:
 FUNC_4(&VAR_2->lock);
 return VAR_3;
}
