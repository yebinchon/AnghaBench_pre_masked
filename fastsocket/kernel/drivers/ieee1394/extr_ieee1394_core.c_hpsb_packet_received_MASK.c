
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int in_bus_reset; } ;
typedef int quadlet_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int*,size_t,int) ;
 int FUNC_2 (struct hpsb_host*,int,int*,size_t,int) ;
 int FUNC_3 (struct hpsb_host*,int,int*,size_t) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct hpsb_host *VAR_0, quadlet_t *VAR_1, size_t VAR_2,
     int VAR_3)
{
 int VAR_4;

 if (FUNC_4(VAR_0->in_bus_reset)) {
  FUNC_0("received packet during reset; ignoring");
  return;
 }

 FUNC_1("received packet", VAR_1, VAR_2, -1);

 VAR_4 = (VAR_1[0] >> 4) & 0xf;

 switch (VAR_4) {
 case 128:
 case 131:
 case 133:
 case 135:
  FUNC_3(VAR_0, VAR_4, VAR_1, VAR_2);
  break;

 case 129:
 case 130:
 case 132:
 case 134:
 case 136:
  FUNC_2(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
  break;

 case 137:

  break;

 default:
  FUNC_0("received packet with bogus transaction code %d",
      VAR_4);
  break;
 }
}
