
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_target {int split_io; } ;
typedef int sector_t ;


 int FUNC_0 (struct dm_target*,int) ;
 int FUNC_1 (int,struct dm_target*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static sector_t FUNC_4(sector_t VAR_0, struct dm_target *VAR_1)
{
 sector_t VAR_2 = FUNC_1(VAR_0, VAR_1);
 sector_t VAR_3, VAR_4;




 if (VAR_1->split_io) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  if (FUNC_3(VAR_1->split_io & (VAR_1->split_io - 1)))
   VAR_4 = FUNC_2(VAR_3, (uint32_t)VAR_1->split_io);
  else
   VAR_4 = VAR_3 & (VAR_1->split_io - 1);
  VAR_4 = VAR_1->split_io - VAR_4;

  if (VAR_2 > VAR_4)
   VAR_2 = VAR_4;
 }

 return VAR_2;
}
