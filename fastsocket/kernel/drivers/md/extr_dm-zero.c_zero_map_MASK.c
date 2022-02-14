
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct dm_target {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_2, struct bio *VAR_3,
        union map_info *VAR_4)
{
 switch(FUNC_1(VAR_3)) {
 case 130:
  FUNC_2(VAR_3);
  break;
 case 129:

  return -VAR_1;
 case 128:

  break;
 }

 FUNC_0(VAR_3, 0);


 return VAR_0;
}
