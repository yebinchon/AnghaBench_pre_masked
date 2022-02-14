
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct request {int cmd_flags; } ;
struct multipath {int dummy; } ;
struct dm_target {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct multipath*,union map_info*) ;
 int FUNC_1 (struct multipath*,struct request*,union map_info*,int ) ;
 scalar_t__ FUNC_2 (struct multipath*,union map_info*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_2, struct request *VAR_3,
    union map_info *VAR_4)
{
 int VAR_5;
 struct multipath *VAR_6 = (struct multipath *) VAR_2->private;

 if (FUNC_2(VAR_6, VAR_4) < 0)

  return VAR_0;

 VAR_3->cmd_flags |= VAR_1;
 VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_4, 0);
 if (VAR_5 < 0 || VAR_5 == VAR_0)
  FUNC_0(VAR_6, VAR_4);

 return VAR_5;
}
