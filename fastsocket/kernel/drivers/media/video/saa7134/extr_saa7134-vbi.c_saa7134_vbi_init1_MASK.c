
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct TYPE_3__ {struct saa7134_dev* dev; TYPE_2__ timeout; int queue; } ;
struct saa7134_dev {TYPE_1__ vbi_q; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct saa7134_dev *VAR_3)
{
 FUNC_0(&VAR_3->vbi_q.queue);
 FUNC_1(&VAR_3->vbi_q.timeout);
 VAR_3->vbi_q.timeout.function = VAR_1;
 VAR_3->vbi_q.timeout.data = (unsigned long)(&VAR_3->vbi_q);
 VAR_3->vbi_q.dev = VAR_3;

 if (VAR_2 < 2)
  VAR_2 = 2;
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 return 0;
}
