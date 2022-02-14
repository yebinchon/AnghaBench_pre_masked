
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_icm_chunk {size_t npages; scalar_t__ nsg; int * mem; int list; } ;
struct mlx4_icm {int chunk_list; scalar_t__ refcount; } ;
struct mlx4_dev {TYPE_1__* pdev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_icm*,int) ;
 void* FUNC_8 (TYPE_1__*,int *,size_t,int ) ;
 int FUNC_9 (int *,size_t) ;

struct mlx4_icm *FUNC_10(struct mlx4_dev *VAR_5, int VAR_6,
    gfp_t VAR_7, int VAR_8)
{
 struct mlx4_icm *VAR_9;
 struct mlx4_icm_chunk *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12;


 FUNC_0(VAR_8 && (VAR_7 & VAR_3));

 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_7 & ~(VAR_3 | VAR_4));
 if (!VAR_9)
  return ((void*)0);

 VAR_9->refcount = 0;
 FUNC_1(&VAR_9->chunk_list);

 VAR_11 = FUNC_2(VAR_0);

 while (VAR_6 > 0) {
  if (!VAR_10) {
   VAR_10 = FUNC_3(sizeof *VAR_10,
     VAR_7 & ~(VAR_3 | VAR_4));
   if (!VAR_10)
    goto fail;

   FUNC_9(VAR_10->mem, VAR_1);
   VAR_10->npages = 0;
   VAR_10->nsg = 0;
   FUNC_4(&VAR_10->list, &VAR_9->chunk_list);
  }

  while (1 << VAR_11 > VAR_6)
   --VAR_11;

  if (VAR_8)
   VAR_12 = FUNC_5(&VAR_5->pdev->dev,
            &VAR_10->mem[VAR_10->npages],
            VAR_11, VAR_7);
  else
   VAR_12 = FUNC_6(&VAR_10->mem[VAR_10->npages],
         VAR_11, VAR_7);

  if (VAR_12) {
   if (--VAR_11 < 0)
    goto fail;
   else
    continue;
  }

  ++VAR_10->npages;

  if (VAR_8)
   ++VAR_10->nsg;
  else if (VAR_10->npages == VAR_1) {
   VAR_10->nsg = FUNC_8(VAR_5->pdev, VAR_10->mem,
      VAR_10->npages,
      VAR_2);

   if (VAR_10->nsg <= 0)
    goto fail;
  }

  if (VAR_10->npages == VAR_1)
   VAR_10 = ((void*)0);

  VAR_6 -= 1 << VAR_11;
 }

 if (!VAR_8 && VAR_10) {
  VAR_10->nsg = FUNC_8(VAR_5->pdev, VAR_10->mem,
     VAR_10->npages,
     VAR_2);

  if (VAR_10->nsg <= 0)
   goto fail;
 }

 return VAR_9;

fail:
 FUNC_7(VAR_5, VAR_9, VAR_8);
 return ((void*)0);
}
