
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dummy; } ;
struct ca_msg {int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_2 (struct dst_state*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct dst_state *VAR_3, struct ca_msg *VAR_4, u8 VAR_5, u8 VAR_6)
{
 if ((FUNC_1(VAR_3, VAR_4->msg, VAR_5, VAR_4->msg, VAR_6)) < 0) {
  FUNC_0(VAR_2, VAR_0, 1, " DST-CI Command failed.");
  FUNC_0(VAR_2, VAR_1, 1, " Resetting DST.");
  FUNC_2(VAR_3);
  return -1;
 }
 FUNC_0(VAR_2, VAR_1, 1, " DST-CI Command success.");

 return 0;
}
