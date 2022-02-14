
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct nfs_io_counter {int flags; int io_count; } ;
struct TYPE_3__ {int wait; } ;


 int FUNC_0 (TYPE_1__,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct nfs_io_counter *VAR_3)
{
 wait_queue_head_t *VAR_4 = FUNC_2(&VAR_3->flags, VAR_0);
 FUNC_0(VAR_2, &VAR_3->flags, VAR_0);
 int VAR_5 = 0;

 do {
  FUNC_5(VAR_4, &VAR_2.wait, VAR_1);
  FUNC_6(VAR_0, &VAR_3->flags);
  if (FUNC_1(&VAR_3->io_count) == 0)
   break;
  VAR_5 = FUNC_4(&VAR_3->flags);
 } while (FUNC_1(&VAR_3->io_count) != 0);
 FUNC_3(VAR_4, &VAR_2.wait);
 return VAR_5;
}
