
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {scalar_t__ is_leader; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_8)
{
 int VAR_9 = 0;
 bool VAR_10 = FUNC_7(VAR_8);
 u32 VAR_11;




 if (!VAR_10 && !FUNC_1(VAR_8)) {
  VAR_11 = FUNC_4(VAR_8, VAR_1,
          VAR_2);
  if (!VAR_11) {
   FUNC_0("MCP response failure, aborting\n");
   VAR_9 = -VAR_5;
   goto exit_leader_reset;
  }
  if ((VAR_11 != VAR_7) &&
      (VAR_11 != VAR_6)) {
   FUNC_0("MCP unexpected resp, aborting\n");
   VAR_9 = -VAR_5;
   goto exit_leader_reset2;
  }
  VAR_11 = FUNC_4(VAR_8, VAR_0, 0);
  if (!VAR_11) {
   FUNC_0("MCP response failure, aborting\n");
   VAR_9 = -VAR_5;
   goto exit_leader_reset2;
  }
 }


 if (FUNC_5(VAR_8, VAR_10)) {
  FUNC_0("Something bad had happen on engine %d! Aii!\n",
     FUNC_2(VAR_8));
  VAR_9 = -VAR_5;
  goto exit_leader_reset2;
 }





 FUNC_8(VAR_8);
 if (VAR_10)
  FUNC_3(VAR_8);

exit_leader_reset2:

 if (!VAR_10 && !FUNC_1(VAR_8)) {
  FUNC_4(VAR_8, VAR_4, 0);
  FUNC_4(VAR_8, VAR_3, 0);
 }
exit_leader_reset:
 VAR_8->is_leader = 0;
 FUNC_6(VAR_8);
 FUNC_9();
 return VAR_9;
}
