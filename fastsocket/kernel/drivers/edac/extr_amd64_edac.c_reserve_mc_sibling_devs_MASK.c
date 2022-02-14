
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct amd64_pvt {TYPE_1__* F3; TYPE_1__* F2; TYPE_1__* F1; } ;
struct TYPE_4__ {int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct amd64_pvt *VAR_2, u16 VAR_3, u16 VAR_4)
{

 VAR_2->F1 = FUNC_3(VAR_2->F2->vendor, VAR_3, VAR_2->F2);
 if (!VAR_2->F1) {
  FUNC_0("error address map device not found: "
     "vendor %x device 0x%x (broken BIOS?)\n",
     VAR_1, VAR_3);
  return -VAR_0;
 }


 VAR_2->F3 = FUNC_3(VAR_2->F2->vendor, VAR_4, VAR_2->F2);
 if (!VAR_2->F3) {
  FUNC_2(VAR_2->F1);
  VAR_2->F1 = ((void*)0);

  FUNC_0("error F3 device not found: "
     "vendor %x device 0x%x (broken BIOS?)\n",
     VAR_1, VAR_4);

  return -VAR_0;
 }
 FUNC_1("F1: %s\n", FUNC_4(VAR_2->F1));
 FUNC_1("F2: %s\n", FUNC_4(VAR_2->F2));
 FUNC_1("F3: %s\n", FUNC_4(VAR_2->F3));

 return 0;
}
