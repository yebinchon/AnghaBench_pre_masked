
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct crypt_config* private; } ;
struct crypt_config {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_2)
{
 struct crypt_config *VAR_3 = VAR_2->private;

 if (!FUNC_1(VAR_0, &VAR_3->flags)) {
  FUNC_0("aborting resume - crypt key is not set.");
  return -VAR_1;
 }

 return 0;
}
