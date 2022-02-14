
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_port_attr {int active_speed; int active_width; } ;
struct ehca_shca {int ib_device; } ;
typedef enum ib_rate { ____Placeholder_ib_rate } ib_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,struct ib_port_attr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ehca_shca *VAR_2, int VAR_3,
    enum ib_rate VAR_4, u32 *VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4);
 int VAR_7, VAR_8;
 struct ib_port_attr VAR_9;

 if (VAR_4 == VAR_1) {
  *VAR_5 = 0;
  return 0;
 }

 if (FUNC_4(VAR_6 < 0)) {
  FUNC_0(&VAR_2->ib_device, "Invalid static rate! path_rate=%x",
    VAR_4);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(&VAR_2->ib_device, VAR_3, &VAR_9);
 if (FUNC_4(VAR_8 < 0)) {
  FUNC_0(&VAR_2->ib_device, "Failed to query port  ret=%i", VAR_8);
  return VAR_8;
 }

 VAR_7 = FUNC_3(VAR_9.active_width) * VAR_9.active_speed;

 if (VAR_6 >= VAR_7)

  *VAR_5 = 0;
 else

  *VAR_5 = ((VAR_7 + (VAR_6 >> 1)) / VAR_6) - 1;

 return 0;
}
