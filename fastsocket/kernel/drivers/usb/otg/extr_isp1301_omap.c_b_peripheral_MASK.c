
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; int gadget; } ;
struct isp1301 {TYPE_1__ otg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp1301*,char*) ;
 int FUNC_1 (struct isp1301*,int) ;
 int FUNC_2 (struct isp1301*,int ,int ) ;
 int FUNC_3 (struct isp1301*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct isp1301*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct isp1301 *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_4(VAR_3) & VAR_5;
 FUNC_5(VAR_7, VAR_3);

 FUNC_8(VAR_6->otg.gadget);





 FUNC_1(VAR_6, 100);

 FUNC_3(VAR_6, VAR_0, VAR_2);
 FUNC_2(VAR_6, VAR_0, VAR_1);
 VAR_6->otg.state = VAR_4;
 FUNC_7("  --> b_peripheral\n");
 FUNC_0(VAR_6, "2periph");

}
