
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lbs_private {int seqnum; int (* hw_host_to_card ) (struct lbs_private*,int ,int *,int) ;} ;
struct cmd_header {scalar_t__ result; void* seqnum; void* size; void* command; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct lbs_private*,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_3)
{
 struct cmd_header VAR_4;
 int VAR_5 = 0;

 FUNC_1(VAR_1);

 VAR_4.command = FUNC_0(VAR_0);
 VAR_4.size = FUNC_0(sizeof(VAR_4));
 VAR_4.seqnum = FUNC_0(++VAR_3->seqnum);
 VAR_4.result = 0;

 FUNC_2(VAR_1, "wake confirm", (u8 *) &VAR_4,
  sizeof(VAR_4));

 VAR_5 = VAR_3->hw_host_to_card(VAR_3, VAR_2, (u8 *) &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  FUNC_4("SEND_WAKEC_CMD: Host to Card failed for Confirm Wake\n");

 FUNC_3(VAR_1, "ret %d", VAR_5);
 return VAR_5;
}
