
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vme_master_resource {int number; int lock; scalar_t__ kern_base; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned long long*) ;
 int FUNC_5 (scalar_t__,unsigned int*,unsigned int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

unsigned int FUNC_8(struct vme_master_resource *VAR_12,
 unsigned int VAR_13, unsigned int VAR_14, unsigned int VAR_15,
 loff_t VAR_16)
{
 unsigned long long VAR_17;
 unsigned int VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 int VAR_22;



 VAR_22 = VAR_12->number;


 FUNC_2(&(VAR_11));


 FUNC_6(&(VAR_12->lock));

 VAR_18 = FUNC_0(VAR_10->base + VAR_2[VAR_22] +
  VAR_1);
 VAR_19 = FUNC_0(VAR_10->base + VAR_2[VAR_22] +
  VAR_0);

 FUNC_4(VAR_18, VAR_19, &VAR_17);
 FUNC_5(VAR_17 + VAR_16, &VAR_18, &VAR_19);


 FUNC_1(VAR_13, VAR_10->base + VAR_6);
 FUNC_1(VAR_14, VAR_10->base + VAR_5);
 FUNC_1(VAR_15, VAR_10->base + VAR_7);
 FUNC_1(VAR_18, VAR_10->base + VAR_4);
 FUNC_1(VAR_19, VAR_10->base + VAR_3);


 VAR_20 = FUNC_0(VAR_10->base + VAR_8);
 VAR_20 |= VAR_9;
 FUNC_1(VAR_20, VAR_10->base + VAR_8);


 VAR_21 = FUNC_0(VAR_12->kern_base + VAR_16);


 VAR_20 = FUNC_0(VAR_10->base + VAR_8);
 VAR_20 &= ~VAR_9;
 FUNC_1(VAR_20, VAR_10->base + VAR_8);

 FUNC_7(&(VAR_12->lock));

 FUNC_3(&(VAR_11));

 return VAR_21;
}
