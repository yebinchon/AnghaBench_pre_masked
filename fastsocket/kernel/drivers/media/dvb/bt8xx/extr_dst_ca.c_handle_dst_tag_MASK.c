
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_state {int dst_hw_cap; } ;
struct ca_msg {int* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int*,int*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_3, struct ca_msg *VAR_4, struct ca_msg *VAR_5, u32 VAR_6)
{
 if (VAR_3->dst_hw_cap & VAR_1) {
  VAR_5->msg[2] = VAR_4->msg[1];
  VAR_5->msg[3] = VAR_4->msg[2];
 } else {
  if (VAR_6 > 247) {
   FUNC_0(VAR_2, VAR_0, 1, " Message too long ! *** Bailing Out *** !");
   return -1;
  }
  VAR_5->msg[0] = (VAR_6 & 0xff) + 7;
  VAR_5->msg[1] = 0x40;
  VAR_5->msg[2] = 0x03;
  VAR_5->msg[3] = 0x00;
  VAR_5->msg[4] = 0x03;
  VAR_5->msg[5] = VAR_6 & 0xff;
  VAR_5->msg[6] = 0x00;





  FUNC_1(&VAR_5->msg[7], &VAR_4->msg[4], VAR_6);
 }

 return 0;
}
