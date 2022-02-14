
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_client_t {int tune_done; } ;
struct SmsMsgHdr_ST {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
typedef int Msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smsdvb_client_t*,struct SmsMsgHdr_ST*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct smsdvb_client_t *VAR_3)
{
 int VAR_4;
 struct SmsMsgHdr_ST VAR_5 = { VAR_2,
        VAR_0,
        VAR_1,
        sizeof(struct SmsMsgHdr_ST), 0 };

 VAR_4 = FUNC_0(VAR_3, &VAR_5, sizeof(VAR_5),
       &VAR_3->tune_done);

 return VAR_4;
}
