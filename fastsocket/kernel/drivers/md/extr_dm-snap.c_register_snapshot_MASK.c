
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct origin {struct block_device* bdev; int snapshots; } ;
struct dm_snapshot {TYPE_1__* origin; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct origin*) ;
 int FUNC_2 (struct origin*,struct dm_snapshot*) ;
 struct origin* FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct dm_snapshot*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct origin*) ;
 struct origin* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dm_snapshot *VAR_3)
{
 struct origin *VAR_4, *VAR_5 = ((void*)0);
 struct block_device *VAR_6 = VAR_3->origin->bdev;
 int VAR_7 = 0;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_2);

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 < 0) {
  FUNC_6(VAR_5);
  goto out;
 }

 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4)
  FUNC_6(VAR_5);
 else {

  VAR_4 = VAR_5;


  FUNC_0(&VAR_4->snapshots);
  VAR_4->bdev = VAR_6;

  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_4, VAR_3);

out:
 FUNC_8(&VAR_2);

 return VAR_7;
}
