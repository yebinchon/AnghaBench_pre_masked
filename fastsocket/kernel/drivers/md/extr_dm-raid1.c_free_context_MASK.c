
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int read_record_pool; int rh; int io_client; TYPE_1__* mirror; } ;
struct dm_target {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_target*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mirror_set*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mirror_set *VAR_0, struct dm_target *VAR_1,
    unsigned int VAR_2)
{
 while (VAR_2--)
  FUNC_1(VAR_1, VAR_0->mirror[VAR_2].dev);

 FUNC_0(VAR_0->io_client);
 FUNC_2(VAR_0->rh);
 FUNC_4(VAR_0->read_record_pool);
 FUNC_3(VAR_0);
}
