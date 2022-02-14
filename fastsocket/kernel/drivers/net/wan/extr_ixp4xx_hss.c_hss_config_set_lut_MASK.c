
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int id; } ;
struct msg {int data32; scalar_t__ index; int hss_port; int cmd; } ;
typedef int msg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct port*,struct msg*,char*) ;
 int FUNC_1 (struct msg*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_5)
{
 struct msg VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_3;
 VAR_6.hss_port = VAR_5->id;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6.data32 >>= 2;
  VAR_6.data32 |= VAR_4 << 30;

  if (VAR_7 % 16 == 15) {
   VAR_6.index = VAR_1 + ((VAR_7 / 4) & ~3);
   FUNC_0(VAR_5, &VAR_6, "HSS_SET_TX_LUT");

   VAR_6.index += VAR_0 - VAR_1;
   FUNC_0(VAR_5, &VAR_6, "HSS_SET_RX_LUT");
  }
 }
}
