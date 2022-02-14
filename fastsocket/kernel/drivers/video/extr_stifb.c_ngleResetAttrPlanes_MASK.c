
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct stifb_info {scalar_t__ id; TYPE_2__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct stifb_info*,int,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (struct stifb_info*) ;
 int FUNC_9 (struct stifb_info*,unsigned int) ;
 int FUNC_10 (struct stifb_info*,int ) ;
 int FUNC_11 (struct stifb_info*,int ) ;
 int FUNC_12 (struct stifb_info*,int) ;
 int FUNC_13 (struct stifb_info*,int) ;
 int FUNC_14 (struct stifb_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (struct stifb_info*,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17(struct stifb_info *VAR_10, unsigned int VAR_11)
{
 int VAR_12 = 0;
 u32 VAR_13;
 u32 VAR_14;

 FUNC_8(VAR_10);

 FUNC_5(VAR_10, VAR_12, 4);
 FUNC_10(VAR_10,
         FUNC_0(VAR_4, VAR_6, VAR_7,
     VAR_0, FUNC_2(0),
     VAR_1, FUNC_1(0)));
 FUNC_9(VAR_10, VAR_11);
 FUNC_13(VAR_10, 0xffffffff);

 FUNC_11(VAR_10,
           FUNC_6(VAR_8, FUNC_7(0),
            VAR_2, FUNC_16(1),
            VAR_3, VAR_5,
            FUNC_3(0), FUNC_4(0)));
 VAR_13 = 0;
 VAR_14 = (VAR_10->info.var.xres << 16) | VAR_10->info.var.yres;
 FUNC_5(VAR_10, VAR_12, 2);
 FUNC_12(VAR_10, VAR_13);
 FUNC_15(VAR_10, VAR_14);
 if (VAR_10->id == VAR_9) {

  VAR_13 = (1280 << 16);
  FUNC_5(VAR_10, VAR_12, 2);
  FUNC_12(VAR_10, VAR_13);
  VAR_14 = (4 << 16) | 1;
  FUNC_15(VAR_10, VAR_14);
 }


 FUNC_5(VAR_10, VAR_12, 1);
 FUNC_9(VAR_10, 0);

 FUNC_14(VAR_10);
}
