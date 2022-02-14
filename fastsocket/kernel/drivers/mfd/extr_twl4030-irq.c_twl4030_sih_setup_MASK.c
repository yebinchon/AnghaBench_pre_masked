
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {unsigned int irq_base; int edge_work; int mask_work; int imr; struct sih const* sih; } ;
struct sih {int module; unsigned int bits; int name; scalar_t__ set_cor; } ;


 int FUNC_0 (struct sih*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 unsigned int VAR_3 ;
 int FUNC_2 (int,char*,unsigned int,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sih_agent* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,int,unsigned int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int *,int ) ;
 int FUNC_8 (int,struct sih_agent*) ;
 int FUNC_9 (int,struct sih_agent*) ;
 struct sih* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_10(int VAR_12)
{
 int VAR_13;
 const struct sih *VAR_14 = ((void*)0);
 struct sih_agent *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18 = -VAR_0;
 unsigned VAR_19 = VAR_8;


 for (VAR_13 = 0, VAR_14 = VAR_6;
   VAR_13 < FUNC_0(VAR_6);
   VAR_13++, VAR_14++) {
  if (VAR_14->module == VAR_12 && VAR_14->set_cor) {
   if (!FUNC_2((VAR_19 + VAR_14->bits) > VAR_3,
     "irq %d for %s too big\n",
     VAR_19 + VAR_14->bits,
     VAR_14->name))
    VAR_18 = 0;
   break;
  }
 }
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15 = FUNC_4(sizeof *VAR_15, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_18 = 0;

 VAR_15->irq_base = VAR_19;
 VAR_15->sih = VAR_14;
 VAR_15->imr = ~0;
 FUNC_1(&VAR_15->mask_work, VAR_10);
 FUNC_1(&VAR_15->edge_work, VAR_9);

 for (VAR_16 = 0; VAR_16 < VAR_14->bits; VAR_16++) {
  VAR_17 = VAR_19 + VAR_16;

  FUNC_7(VAR_17, &VAR_11,
    VAR_4);
  FUNC_8(VAR_17, VAR_15);
  FUNC_3(VAR_17);
 }

 VAR_18 = VAR_19;
 VAR_8 += VAR_16;


 VAR_17 = VAR_13 + VAR_7;
 FUNC_9(VAR_17, VAR_15);
 FUNC_6(VAR_17, VAR_5);

 FUNC_5("twl4030: %s (irq %d) chaining IRQs %d..%d\n", VAR_14->name,
   VAR_17, VAR_19, VAR_8 - 1);

 return VAR_18;
}
