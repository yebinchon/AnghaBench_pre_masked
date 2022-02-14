
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx4_ib_dev {int num_ports; int ib_active; int ib_dev; } ;
struct mlx4_eqe {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct ib_event_work {int work; struct mlx4_ib_dev* ib_dev; int ib_eqe; } ;
struct TYPE_2__ {scalar_t__ port_num; } ;
struct ib_event {TYPE_1__ element; void* device; int event; } ;
struct ib_device {int dummy; } ;
typedef enum mlx4_dev_event { ____Placeholder_mlx4_dev_event } mlx4_dev_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int (*) (int *)) ;






 int FUNC_1 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_event*) ;
 struct ib_event_work* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct mlx4_eqe*,int) ;
 int FUNC_6 (struct mlx4_ib_dev*,int) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int) ;
 struct mlx4_ib_dev* FUNC_11 (struct ib_device*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12(struct mlx4_dev *VAR_6, void *VAR_7,
     enum mlx4_dev_event VAR_8, unsigned long VAR_9)
{
 struct ib_event VAR_10;
 struct mlx4_ib_dev *VAR_11 = FUNC_11((struct ib_device *) VAR_7);
 struct mlx4_eqe *VAR_12 = ((void*)0);
 struct ib_event_work *VAR_13;
 int VAR_14 = 0;

 if (VAR_8 == 131)
  VAR_12 = (struct mlx4_eqe *)VAR_9;
 else
  VAR_14 = (int) VAR_9;

 switch (VAR_8) {
 case 130:
  if (VAR_14 > VAR_11->num_ports)
   return;
  if (FUNC_7(VAR_6) &&
      FUNC_10(&VAR_11->ib_dev, VAR_14) ==
   VAR_4) {
   FUNC_6(VAR_11, VAR_14);
  }
  VAR_10.event = VAR_2;
  break;

 case 132:
  if (VAR_14 > VAR_11->num_ports)
   return;
  VAR_10.event = VAR_3;
  break;

 case 133:
  VAR_11->ib_active = 0;
  VAR_10.event = VAR_1;
  break;

 case 131:
  VAR_13 = FUNC_4(sizeof *VAR_13, VAR_0);
  if (!VAR_13) {
   FUNC_8("failed to allocate memory for events work\n");
   break;
  }

  FUNC_0(&VAR_13->work, FUNC_2);
  FUNC_5(&VAR_13->ib_eqe, VAR_12, sizeof *VAR_12);
  VAR_13->ib_dev = VAR_11;

  if (FUNC_7(VAR_6))
   FUNC_9(VAR_5, &VAR_13->work);
  else
   FUNC_2(&VAR_13->work);
  return;

 case 129:

  FUNC_1(VAR_11, VAR_14, 1);
  return;

 case 128:

  FUNC_1(VAR_11, VAR_14, 0);
  return;

 default:
  return;
 }

 VAR_10.device = VAR_7;
 VAR_10.element.port_num = (u8) VAR_14;

 FUNC_3(&VAR_10);
}
