
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct TYPE_3__ {struct saa7146_dev* dev; TYPE_2__ timeout; int queue; } ;
struct saa7146_vv {int vbi_wq; TYPE_1__ vbi_q; } ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct saa7146_dev *VAR_1, struct saa7146_vv *VAR_2)
{
 FUNC_0(("dev:%p\n",VAR_1));

 FUNC_1(&VAR_2->vbi_q.queue);

 FUNC_2(&VAR_2->vbi_q.timeout);
 VAR_2->vbi_q.timeout.function = VAR_0;
 VAR_2->vbi_q.timeout.data = (unsigned long)(&VAR_2->vbi_q);
 VAR_2->vbi_q.dev = VAR_1;

 FUNC_3(&VAR_2->vbi_wq);
}
