
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx4_mtt {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ map; } ;
struct mlx4_buf {int npages; int nbufs; int page_shift; TYPE_2__* page_list; TYPE_1__ direct; } ;
struct TYPE_4__ {scalar_t__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_mtt*,int ,int,scalar_t__*) ;

int FUNC_3(struct mlx4_dev *VAR_2, struct mlx4_mtt *VAR_3,
         struct mlx4_buf *VAR_4)
{
 u64 *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_4->npages * sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->npages; ++VAR_7)
  if (VAR_4->nbufs == 1)
   VAR_5[VAR_7] = VAR_4->direct.map + (VAR_7 << VAR_4->page_shift);
  else
   VAR_5[VAR_7] = VAR_4->page_list[VAR_7].map;

 VAR_6 = FUNC_2(VAR_2, VAR_3, 0, VAR_4->npages, VAR_5);

 FUNC_0(VAR_5);
 return VAR_6;
}
