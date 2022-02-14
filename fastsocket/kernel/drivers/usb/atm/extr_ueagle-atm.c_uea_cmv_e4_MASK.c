
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int function; int offset; int address; int group; } ;
struct TYPE_4__ {TYPE_1__ e4; } ;
struct uea_softc {TYPE_2__ cmv_dsc; } ;
struct cmv_e4 {int * dwData; void* wOffset; void* wAddress; void* wGroup; void* wFunction; } ;
typedef int cmv ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uea_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cmv_e4*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct uea_softc*,int ,int ,int,struct cmv_e4*) ;
 int FUNC_9 (int ,char*,int ,int ,int,int,int,int ) ;
 int FUNC_10 (struct uea_softc*) ;

__attribute__((used)) static int FUNC_11(struct uea_softc *VAR_2,
  u16 VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct cmv_e4 VAR_8;
 int VAR_9;

 FUNC_6(FUNC_2(VAR_2));
 FUNC_5(&VAR_8, 0, sizeof(VAR_8));

 FUNC_9(FUNC_2(VAR_2), "Function : %d-%d, Group : 0x%04x, "
   "Address : 0x%04x, offset : 0x%04x, data : 0x%08x\n",
   FUNC_1(VAR_3), FUNC_0(VAR_3),
   VAR_4, VAR_5, VAR_6, VAR_7);


 VAR_2->cmv_dsc.e4.function = VAR_3 | (0x1 << 4);
 VAR_2->cmv_dsc.e4.offset = VAR_6;
 VAR_2->cmv_dsc.e4.address = VAR_5;
 VAR_2->cmv_dsc.e4.group = VAR_4;

 VAR_8.wFunction = FUNC_3(VAR_3);
 VAR_8.wGroup = FUNC_3(VAR_4);
 VAR_8.wAddress = FUNC_3(VAR_5);
 VAR_8.wOffset = FUNC_3(VAR_6);
 VAR_8.dwData[0] = FUNC_4(VAR_7);

 VAR_9 = FUNC_8(VAR_2, VAR_0, VAR_1, sizeof(VAR_8), &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_10(VAR_2);
 FUNC_7(FUNC_2(VAR_2));
 return VAR_9;
}
