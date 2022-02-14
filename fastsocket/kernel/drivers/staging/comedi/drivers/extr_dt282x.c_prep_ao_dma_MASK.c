
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dma; } ;
struct TYPE_3__ {int size; int chan; int buf; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 unsigned long FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_1->dma[VAR_3].size = VAR_4;
 VAR_5 = VAR_1->dma[VAR_3].chan;
 VAR_6 = FUNC_7(VAR_1->dma[VAR_3].buf);

 FUNC_6(VAR_5, VAR_0);
 VAR_7 = FUNC_0();
 FUNC_1(VAR_5);
 FUNC_4(VAR_5, VAR_6);
 FUNC_5(VAR_5, VAR_4);
 FUNC_3(VAR_7);

 FUNC_2(VAR_5);

 return VAR_4;
}
