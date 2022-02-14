
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_device {int dummy; } ;
struct ap_device {struct zcrypt_device* private; } ;


 int FUNC_0 (struct zcrypt_device*) ;

__attribute__((used)) static void FUNC_1(struct ap_device *VAR_0)
{
 struct zcrypt_device *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1);
}
