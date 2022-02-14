
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int shift; int mask; int mult; int read; } ;
struct mlx4_en_dev {int overflow_period; TYPE_2__ cycles; int clock; struct mlx4_dev* dev; } ;
struct TYPE_5__ {int hca_core_clock; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_7 (int *,TYPE_2__*,int ) ;

void FUNC_8(struct mlx4_en_dev *VAR_3)
{
 struct mlx4_dev *VAR_4 = VAR_3->dev;
 u64 VAR_5;

 FUNC_6(&VAR_3->cycles, 0, sizeof(VAR_3->cycles));
 VAR_3->cycles.read = VAR_2;
 VAR_3->cycles.mask = FUNC_0(48);





 VAR_3->cycles.shift = 14;
 VAR_3->cycles.mult =
  FUNC_1(1000 * VAR_4->caps.hca_core_clock, VAR_3->cycles.shift);

 FUNC_7(&VAR_3->clock, &VAR_3->cycles,
    FUNC_5(FUNC_4()));




 VAR_5 = FUNC_2(&VAR_3->cycles, VAR_3->cycles.mask);
 FUNC_3(VAR_5, VAR_1 / 2 / VAR_0);
 VAR_3->overflow_period = VAR_5;
}
