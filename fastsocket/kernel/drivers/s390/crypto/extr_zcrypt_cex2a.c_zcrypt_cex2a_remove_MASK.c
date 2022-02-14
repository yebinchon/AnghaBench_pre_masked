
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_ops {int dummy; } ;
struct zcrypt_device {struct zcrypt_ops* ops; } ;
struct ap_device {struct zcrypt_device* private; } ;


 int FUNC_0 (struct zcrypt_device*) ;
 int FUNC_1 (struct zcrypt_ops*) ;

__attribute__((used)) static void FUNC_2(struct ap_device *VAR_0)
{
 struct zcrypt_device *VAR_1 = VAR_0->private;
 struct zcrypt_ops *VAR_2 = VAR_1->ops;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
}
