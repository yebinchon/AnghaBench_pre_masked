
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {int error; TYPE_1__* target; } ;
struct crypt_config {int dummy; } ;
struct bio {struct dm_crypt_io* bi_private; } ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct crypt_config*,struct bio*) ;
 int FUNC_5 (struct dm_crypt_io*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_4, int VAR_5)
{
 struct dm_crypt_io *VAR_6 = VAR_4->bi_private;
 struct crypt_config *VAR_7 = VAR_6->target->private;
 unsigned VAR_8 = FUNC_0(VAR_4);

 if (FUNC_6(!FUNC_1(VAR_4, VAR_0) && !VAR_5))
  VAR_5 = -VAR_1;




 if (VAR_8 == VAR_3)
  FUNC_4(VAR_7, VAR_4);

 FUNC_2(VAR_4);

 if (VAR_8 == VAR_2 && !VAR_5) {
  FUNC_5(VAR_6);
  return;
 }

 if (FUNC_6(VAR_5))
  VAR_6->error = VAR_5;

 FUNC_3(VAR_6);
}
