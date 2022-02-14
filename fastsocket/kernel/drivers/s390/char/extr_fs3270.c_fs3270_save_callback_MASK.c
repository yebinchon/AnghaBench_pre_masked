
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270_request {scalar_t__ rc; scalar_t__ rescnt; scalar_t__ view; } ;
struct fs3270 {scalar_t__ rdbuf_size; int wait; TYPE_1__* rdbuf; scalar_t__ fs_pid; } ;
struct TYPE_2__ {int* data; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct raw3270_request*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct raw3270_request *VAR_1, void *VAR_2)
{
 struct fs3270 *VAR_3;

 VAR_3 = (struct fs3270 *) VAR_1->view;


 VAR_3->rdbuf->data[0] -= 5;
 VAR_3->rdbuf->size += 5;







 if (VAR_1->rc != 0 || VAR_1->rescnt == 0) {
  if (VAR_3->fs_pid)
   FUNC_0(VAR_3->fs_pid, VAR_0, 1);
  VAR_3->rdbuf_size = 0;
 } else
  VAR_3->rdbuf_size = VAR_3->rdbuf->size - VAR_1->rescnt;
 FUNC_1(VAR_1);
 FUNC_2(&VAR_3->wait);
}
