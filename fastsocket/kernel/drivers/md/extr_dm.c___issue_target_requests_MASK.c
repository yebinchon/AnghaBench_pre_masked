
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct clone_info {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct clone_info*,struct dm_target*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct clone_info *VAR_0, struct dm_target *VAR_1,
        unsigned VAR_2, sector_t VAR_3)
{
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
