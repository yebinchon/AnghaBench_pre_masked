
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct crypt_config* private; } ;
struct crypt_config {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_1)
{
 struct crypt_config *VAR_2 = VAR_1->private;

 FUNC_0(VAR_0, &VAR_2->flags);
}
