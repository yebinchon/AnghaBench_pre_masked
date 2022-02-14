
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int raid_disks; int degraded; int array_sectors; int new_level; int new_chunk_sectors; int new_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (struct mddev*) ;

__attribute__((used)) static void *FUNC_2(struct mddev *VAR_3)
{
 int VAR_4;

 if (VAR_3->raid_disks != 2 ||
     VAR_3->degraded > 1)
  return FUNC_0(-VAR_1);



 VAR_4 = 64*2;


 while (VAR_4 && (VAR_3->array_sectors & (VAR_4-1)))
  VAR_4 >>= 1;

 if ((VAR_4<<9) < VAR_2)

  return FUNC_0(-VAR_1);

 VAR_3->new_level = 5;
 VAR_3->new_layout = VAR_0;
 VAR_3->new_chunk_sectors = VAR_4;

 return FUNC_1(VAR_3);
}
