
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mthca_icm_table {int num_icm; int num_obj; int obj_size; int lowmem; int coherent; TYPE_1__** icm; int mutex; scalar_t__ virt; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_4__ {int refcount; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mthca_icm_table*) ;
 struct mthca_icm_table* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct mthca_dev*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (struct mthca_dev*,scalar_t__,int) ;
 TYPE_1__* FUNC_5 (struct mthca_dev*,unsigned int,int,int) ;
 int FUNC_6 (struct mthca_dev*,TYPE_1__*,int) ;
 int FUNC_7 (int *) ;

struct mthca_icm_table *FUNC_8(struct mthca_dev *VAR_6,
           u64 VAR_7, int VAR_8,
           int VAR_9, int VAR_10,
           int VAR_11, int VAR_12)
{
 struct mthca_icm_table *VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned VAR_16;
 int VAR_17;

 VAR_14 = VAR_3 / VAR_8;
 VAR_15 = FUNC_0(VAR_9, VAR_14);

 VAR_13 = FUNC_2(sizeof *VAR_13 + VAR_15 * sizeof *VAR_13->icm, VAR_1);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->virt = VAR_7;
 VAR_13->num_icm = VAR_15;
 VAR_13->num_obj = VAR_9;
 VAR_13->obj_size = VAR_8;
 VAR_13->lowmem = VAR_11;
 VAR_13->coherent = VAR_12;
 FUNC_7(&VAR_13->mutex);

 for (VAR_17 = 0; VAR_17 < VAR_15; ++VAR_17)
  VAR_13->icm[VAR_17] = ((void*)0);

 for (VAR_17 = 0; VAR_17 * VAR_3 < VAR_10 * VAR_8; ++VAR_17) {
  VAR_16 = VAR_3;
  if ((VAR_17 + 1) * VAR_3 > VAR_9 * VAR_8)
   VAR_16 = VAR_9 * VAR_8 - VAR_17 * VAR_3;

  VAR_13->icm[VAR_17] = FUNC_5(VAR_6, VAR_16 >> VAR_4,
      (VAR_11 ? VAR_1 : VAR_0) |
      VAR_5, VAR_12);
  if (!VAR_13->icm[VAR_17])
   goto err;
  if (FUNC_3(VAR_6, VAR_13->icm[VAR_17],
      VAR_7 + VAR_17 * VAR_3)) {
   FUNC_6(VAR_6, VAR_13->icm[VAR_17], VAR_13->coherent);
   VAR_13->icm[VAR_17] = ((void*)0);
   goto err;
  }





  ++VAR_13->icm[VAR_17]->refcount;
 }

 return VAR_13;

err:
 for (VAR_17 = 0; VAR_17 < VAR_15; ++VAR_17)
  if (VAR_13->icm[VAR_17]) {
   FUNC_4(VAR_6, VAR_7 + VAR_17 * VAR_3,
     VAR_3 / VAR_2);
   FUNC_6(VAR_6, VAR_13->icm[VAR_17], VAR_13->coherent);
  }

 FUNC_1(VAR_13);

 return ((void*)0);
}
