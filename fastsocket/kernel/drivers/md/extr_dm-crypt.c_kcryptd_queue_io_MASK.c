
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {int work; TYPE_1__* target; } ;
struct crypt_config {int io_queue; } ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_crypt_io *VAR_1)
{
 struct crypt_config *VAR_2 = VAR_1->target->private;

 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_1(VAR_2->io_queue, &VAR_1->work);
}
