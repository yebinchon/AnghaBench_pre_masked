
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx4_icm_table {int virt; int num_icm; int num_obj; int obj_size; int lowmem; int coherent; TYPE_1__** icm; int mutex; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_6__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 TYPE_1__** FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*,TYPE_1__*,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 TYPE_1__* FUNC_5 (struct mlx4_dev*,unsigned int,int,int) ;
 int FUNC_6 (struct mlx4_dev*,TYPE_1__*,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx4_dev *VAR_7, struct mlx4_icm_table *VAR_8,
   u64 VAR_9, int VAR_10, u32 VAR_11, int VAR_12,
   int VAR_13, int VAR_14)
{
 int VAR_15;
 int VAR_16;
 unsigned VAR_17;
 int VAR_18;
 u64 VAR_19;

 VAR_15 = VAR_4 / VAR_10;
 VAR_16 = (VAR_11 + VAR_15 - 1) / VAR_15;

 VAR_8->icm = FUNC_1(VAR_16, sizeof *VAR_8->icm, VAR_2);
 if (!VAR_8->icm)
  return -VAR_0;
 VAR_8->virt = VAR_9;
 VAR_8->num_icm = VAR_16;
 VAR_8->num_obj = VAR_11;
 VAR_8->obj_size = VAR_10;
 VAR_8->lowmem = VAR_13;
 VAR_8->coherent = VAR_14;
 FUNC_7(&VAR_8->mutex);

 VAR_19 = (u64) VAR_11 * VAR_10;
 for (VAR_18 = 0; VAR_18 * VAR_4 < VAR_12 * VAR_10; ++VAR_18) {
  VAR_17 = VAR_4;
  if ((VAR_18 + 1) * VAR_4 > VAR_19)
   VAR_17 = FUNC_0(VAR_19 -
     VAR_18 * VAR_4);

  VAR_8->icm[VAR_18] = FUNC_5(VAR_7, VAR_17 >> VAR_5,
            (VAR_13 ? VAR_2 : VAR_1) |
            VAR_6, VAR_14);
  if (!VAR_8->icm[VAR_18])
   goto err;
  if (FUNC_3(VAR_7, VAR_8->icm[VAR_18], VAR_9 + VAR_18 * VAR_4)) {
   FUNC_6(VAR_7, VAR_8->icm[VAR_18], VAR_14);
   VAR_8->icm[VAR_18] = ((void*)0);
   goto err;
  }





  ++VAR_8->icm[VAR_18]->refcount;
 }

 return 0;

err:
 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18)
  if (VAR_8->icm[VAR_18]) {
   FUNC_4(VAR_7, VAR_9 + VAR_18 * VAR_4,
           VAR_4 / VAR_3);
   FUNC_6(VAR_7, VAR_8->icm[VAR_18], VAR_14);
  }

 FUNC_2(VAR_8->icm);

 return -VAR_0;
}
