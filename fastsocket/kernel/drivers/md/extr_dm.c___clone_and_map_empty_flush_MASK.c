
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int num_flush_requests; } ;
struct clone_info {int map; int bio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clone_info*,struct dm_target*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct dm_target* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clone_info *VAR_0)
{
 unsigned VAR_1 = 0;
 struct dm_target *VAR_2;

 FUNC_0(FUNC_2(VAR_0->bio));
 while ((VAR_2 = FUNC_3(VAR_0->map, VAR_1++)))
  FUNC_1(VAR_0, VAR_2, VAR_2->num_flush_requests, 0);

 return 0;
}
