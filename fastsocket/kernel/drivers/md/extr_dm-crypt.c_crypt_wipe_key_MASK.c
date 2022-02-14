
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypt_config {int key_size; int key; int tfm; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct crypt_config *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_2(&VAR_1->key, 0, VAR_1->key_size * sizeof(u8));
 return FUNC_1(VAR_1->tfm, VAR_1->key, VAR_1->key_size);
}
