
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct qe_firmware {TYPE_1__ header; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qe_firmware*) ;
 int FUNC_2 (struct firmware const*) ;

__attribute__((used)) static void FUNC_3(const struct firmware *VAR_1, void *VAR_2)
{
 struct qe_firmware *VAR_3;
 struct device *VAR_4 = VAR_2;
 int VAR_5;

 if (!VAR_1) {
  FUNC_0(VAR_4, "firmware not found\n");
  return;
 }

 VAR_3 = (struct qe_firmware *) VAR_1->data;

 if (VAR_3->header.length != VAR_1->size) {
  FUNC_0(VAR_4, "invalid firmware\n");
  goto out;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_4, "could not load firmware\n");
  goto out;
 }

 VAR_0 = 1;
 out:
 FUNC_2(VAR_1);
}
