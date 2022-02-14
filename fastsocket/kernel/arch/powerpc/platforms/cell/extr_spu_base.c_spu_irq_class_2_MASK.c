
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class2_intr; } ;
struct spu {int register_lock; TYPE_1__ stats; int (* wbox_callback ) (struct spu*) ;int (* mfc_callback ) (struct spu*) ;int (* stop_callback ) (struct spu*,int) ;int (* ibox_callback ) (struct spu*) ;} ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spu*,int,unsigned long) ;
 unsigned long FUNC_4 (struct spu*,int) ;
 int FUNC_5 (struct spu*,int,unsigned long) ;
 unsigned long FUNC_6 (struct spu*,int) ;
 int FUNC_7 (struct spu*) ;
 int FUNC_8 (struct spu*,int) ;
 int FUNC_9 (struct spu*,int) ;
 int FUNC_10 (struct spu*) ;
 int FUNC_11 (struct spu*) ;

__attribute__((used)) static irqreturn_t
FUNC_12(int VAR_7, void *VAR_8)
{
 struct spu *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 const int VAR_12 =
  VAR_1 | VAR_0;

 VAR_9 = VAR_8;
 FUNC_1(&VAR_9->register_lock);
 VAR_10 = FUNC_6(VAR_9, 2);
 VAR_11 = FUNC_4(VAR_9, 2);

 VAR_10 &= VAR_11;


 if (VAR_10 & VAR_12)
  FUNC_3(VAR_9, 2, ~(VAR_10 & VAR_12));

 FUNC_5(VAR_9, 2, VAR_10);

 FUNC_0("class 2 interrupt %d, %lx, %lx\n", VAR_7, VAR_10, VAR_11);

 if (VAR_10 & VAR_0)
  VAR_9->ibox_callback(VAR_9);

 if (VAR_10 & VAR_4)
  VAR_9->stop_callback(VAR_9, 2);

 if (VAR_10 & VAR_3)
  VAR_9->stop_callback(VAR_9, 2);

 if (VAR_10 & VAR_2)
  VAR_9->mfc_callback(VAR_9);

 if (VAR_10 & VAR_1)
  VAR_9->wbox_callback(VAR_9);

 VAR_9->stats.class2_intr++;

 FUNC_2(&VAR_9->register_lock);

 return VAR_10 ? VAR_5 : VAR_6;
}
