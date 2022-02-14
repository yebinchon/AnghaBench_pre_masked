
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_ah {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_ah_attr {int ah_flags; int port_num; } ;
struct ib_ah {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ib_ah*) ;
 struct ib_ah* FUNC_2 (struct ib_pd*,struct ib_ah_attr*,struct mlx4_ib_ah*) ;
 struct ib_ah* FUNC_3 (struct ib_pd*,struct ib_ah_attr*,struct mlx4_ib_ah*) ;
 int FUNC_4 (struct mlx4_ib_ah*) ;
 struct mlx4_ib_ah* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

struct ib_ah *FUNC_7(struct ib_pd *VAR_5, struct ib_ah_attr *VAR_6)
{
 struct mlx4_ib_ah *VAR_7;
 struct ib_ah *VAR_8;

 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 if (FUNC_6(VAR_5->device, VAR_6->port_num) == VAR_4) {
  if (!(VAR_6->ah_flags & VAR_3)) {
   VAR_8 = FUNC_0(-VAR_0);
  } else {
   VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
  }

  if (FUNC_1(VAR_8))
   FUNC_4(VAR_7);

  return VAR_8;
 } else
  return FUNC_2(VAR_5, VAR_6, VAR_7);
}
