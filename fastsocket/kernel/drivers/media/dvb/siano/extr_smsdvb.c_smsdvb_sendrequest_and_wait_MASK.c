
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_client_t {int smsclient; } ;
struct completion {int dummy; } ;
struct SmsMsgHdr_ST {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (struct SmsMsgHdr_ST*) ;
 scalar_t__ FUNC_3 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_4(struct smsdvb_client_t *VAR_1,
     void *VAR_2, size_t VAR_3,
     struct completion *VAR_4)
{
 int VAR_5;

 FUNC_2((struct SmsMsgHdr_ST *)VAR_2);
 VAR_5 = FUNC_1(VAR_1->smsclient, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_4,
        FUNC_0(2000)) ?
      0 : -VAR_0;
}
