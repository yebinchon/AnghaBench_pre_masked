
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;
struct ca_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dst_state*,struct ca_msg*,struct ca_msg*,int,int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_5, struct ca_msg *VAR_6, struct ca_msg *VAR_7)
{
 int VAR_8 = 0;





 if (VAR_8) {
  if ((FUNC_0(VAR_5, VAR_6, VAR_7, 1, VAR_2)) < 0) {
   FUNC_1(VAR_4, VAR_0, 1, " ca_set_pmt.. failed !");
   return -1;
  }



  FUNC_1(VAR_4, VAR_0, 1, " Not there yet");
 }

 if (!VAR_8) {
  if ((FUNC_0(VAR_5, VAR_6, VAR_7, 0, VAR_3)) < 0) {
   FUNC_1(VAR_4, VAR_0, 1, " ca_set_pmt.. failed !");
   return -1;
  }
  FUNC_1(VAR_4, VAR_1, 1, " ca_set_pmt.. success !");


 }
 return 0;
}
