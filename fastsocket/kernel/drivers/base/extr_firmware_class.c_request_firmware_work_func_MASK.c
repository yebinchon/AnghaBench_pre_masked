
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware_work {int module; int context; int (* cont ) (struct firmware const*,int ) ;int uevent; int device; int name; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct firmware const**,int ,int ,int ) ;
 int FUNC_2 (struct firmware_work*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct firmware const*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_0)
{
 struct firmware_work *VAR_1 = VAR_0;
 const struct firmware *VAR_2;
 int VAR_3;
 if (!VAR_0) {
  FUNC_0(1);
  return 0;
 }
 VAR_3 = FUNC_1(&VAR_2, VAR_1->name, VAR_1->device,
  VAR_1->uevent);

 VAR_1->cont(VAR_2, VAR_1->context);

 FUNC_3(VAR_1->module);
 FUNC_2(VAR_1);
 return VAR_3;
}
