
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct crypt_config* private; } ;
struct crypt_config {TYPE_1__* iv_gen_ops; int flags; } ;
struct TYPE_2__ {int (* init ) (struct crypt_config*) ;int (* wipe ) (struct crypt_config*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypt_config*,char*) ;
 int FUNC_2 (struct crypt_config*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct crypt_config*) ;
 int FUNC_5 (struct crypt_config*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_2, unsigned VAR_3, char **VAR_4)
{
 struct crypt_config *VAR_5 = VAR_2->private;
 int VAR_6 = -VAR_1;

 if (VAR_3 < 2)
  goto error;

 if (!FUNC_3(VAR_4[0], "key")) {
  if (!FUNC_6(VAR_0, &VAR_5->flags)) {
   FUNC_0("not suspended during key manipulation.");
   return -VAR_1;
  }
  if (VAR_3 == 3 && !FUNC_3(VAR_4[1], "set")) {
   VAR_6 = FUNC_1(VAR_5, VAR_4[2]);
   if (VAR_6)
    return VAR_6;
   if (VAR_5->iv_gen_ops && VAR_5->iv_gen_ops->init)
    VAR_6 = VAR_5->iv_gen_ops->init(VAR_5);
   return VAR_6;
  }
  if (VAR_3 == 2 && !FUNC_3(VAR_4[1], "wipe")) {
   if (VAR_5->iv_gen_ops && VAR_5->iv_gen_ops->wipe) {
    VAR_6 = VAR_5->iv_gen_ops->wipe(VAR_5);
    if (VAR_6)
     return VAR_6;
   }
   return FUNC_2(VAR_5);
  }
 }

error:
 FUNC_0("unrecognised message received.");
 return -VAR_1;
}
