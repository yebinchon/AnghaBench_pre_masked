
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int ** VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_12 ;

int FUNC_4(struct vme_lm_resource *VAR_13, int VAR_14)
{
 u32 VAR_15, VAR_16;

 FUNC_2(&(VAR_13->mtx));


 VAR_15 = FUNC_0(VAR_12->base + VAR_1);
 VAR_15 &= ~VAR_2[VAR_14];
 FUNC_1(VAR_15, VAR_12->base + VAR_1);

 VAR_16 = FUNC_0(VAR_12->base + VAR_3);
 VAR_16 &= ~VAR_4[VAR_14];
 FUNC_1(VAR_16, VAR_12->base + VAR_3);

 FUNC_1(VAR_0[VAR_14],
   VAR_12->base + VAR_3);


 VAR_11[VAR_14] = ((void*)0);


 if ((VAR_15 & (VAR_5 | VAR_6 |
   VAR_7 | VAR_8)) == 0) {
  VAR_16 = FUNC_0(VAR_12->base + VAR_9);
  VAR_16 &= ~VAR_10;
  FUNC_1(VAR_16, VAR_12->base + VAR_9);
 }

 FUNC_3(&(VAR_13->mtx));

 return 0;
}
