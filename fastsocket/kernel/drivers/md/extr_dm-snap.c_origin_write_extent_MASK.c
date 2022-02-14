
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct origin {int snapshots; } ;
struct dm_snapshot {TYPE_2__* ti; TYPE_1__* origin; } ;
typedef unsigned int sector_t ;
struct TYPE_4__ {unsigned int split_io; } ;
struct TYPE_3__ {int bdev; } ;


 scalar_t__ VAR_0 ;
 struct origin* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dm_snapshot *VAR_2,
          sector_t VAR_3, unsigned VAR_4)
{
 int VAR_5 = 0;
 sector_t VAR_6;
 struct origin *VAR_7;





 FUNC_2(&VAR_1);
 VAR_7 = FUNC_0(VAR_2->origin->bdev);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_2->ti->split_io)
  if (FUNC_1(&VAR_7->snapshots, VAR_3 + VAR_6, ((void*)0)) ==
      VAR_0)
   VAR_5 = 1;
 FUNC_3(&VAR_1);

 return VAR_5;
}
