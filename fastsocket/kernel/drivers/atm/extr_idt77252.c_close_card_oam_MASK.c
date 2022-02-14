
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue; } ;
struct TYPE_3__ {TYPE_2__ rx_pool; } ;
struct vc_map {unsigned long index; TYPE_1__ rcv; } ;
struct idt77252_dev {int vpibits; unsigned long rct_base; int name; int cmd_lock; struct vc_map** vcs; } ;


 int FUNC_0 (char*,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct idt77252_dev*,int,int) ;
 int FUNC_2 (struct idt77252_dev*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct idt77252_dev*) ;
 int FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_8(struct idt77252_dev *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct vc_map *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 for (VAR_7 = 0; VAR_7 < (1 << VAR_3->vpibits); VAR_7++) {
  for (VAR_8 = 3; VAR_8 < 5; VAR_8++) {
   VAR_9 = FUNC_1(VAR_3, VAR_7, VAR_8);
   VAR_6 = VAR_3->vcs[VAR_9];

   VAR_5 = VAR_3->rct_base + VAR_6->index * VAR_2;

   FUNC_4(&VAR_3->cmd_lock, VAR_4);
   FUNC_7(VAR_0 | (VAR_5 << 2),
          VAR_1);
   FUNC_6(VAR_3);
   FUNC_5(&VAR_3->cmd_lock, VAR_4);

   if (FUNC_3(&VAR_6->rcv.rx_pool.queue) != 0) {
    FUNC_0("%s: closing a VC "
     "with pending rx buffers.\n",
     VAR_3->name);

    FUNC_2(VAR_3, &VAR_6->rcv.rx_pool);
   }
  }
 }
}
