
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {int key_size; int flags; int key; int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct crypt_config *VAR_2, char *VAR_3)
{
 int VAR_4 = -VAR_1;
 int VAR_5 = FUNC_5(VAR_3);


 if (VAR_2->key_size != (VAR_5 >> 1))
  goto out;


 if (!VAR_2->key_size && FUNC_4(VAR_3, "-"))
  goto out;

 if (VAR_2->key_size && FUNC_0(VAR_2->key, VAR_3, VAR_2->key_size) < 0)
  goto out;

 VAR_4 = FUNC_1(VAR_2->tfm, VAR_2->key, VAR_2->key_size);
 if (!VAR_4)
  FUNC_3(VAR_0, &VAR_2->flags);
out:

 FUNC_2(VAR_3, '0', VAR_5);

 return VAR_4;
}
