
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int muxport; struct parport** slaves; struct parport* physport; int portnum; int ops; int dma; int irq; int base; } ;


 struct parport* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static struct parport *FUNC_1(struct parport *VAR_0, int VAR_1)
{
 struct parport *VAR_2 = FUNC_0(VAR_0->base,
             VAR_0->irq,
             VAR_0->dma,
             VAR_0->ops);
 if (VAR_2) {
  VAR_2->portnum = VAR_0->portnum;
  VAR_2->physport = VAR_0;
  VAR_2->muxport = VAR_1;
  VAR_0->slaves[VAR_1-1] = VAR_2;
 }

 return VAR_2;
}
