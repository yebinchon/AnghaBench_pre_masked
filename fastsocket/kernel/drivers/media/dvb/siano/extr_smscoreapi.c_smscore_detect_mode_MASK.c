
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int version_ex_done; int resume_done; } ;
struct SmsMsgHdr_ST {int msgLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct SmsMsgHdr_ST*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct smscore_device_t*,struct SmsMsgHdr_ST*,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct smscore_device_t *VAR_6)
{
 void *VAR_7 = FUNC_3(sizeof(struct SmsMsgHdr_ST) + VAR_5,
          VAR_3 | VAR_2);
 struct SmsMsgHdr_ST *VAR_8 =
  (struct SmsMsgHdr_ST *) FUNC_0(VAR_7);
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;

 FUNC_1(VAR_8, VAR_4,
       sizeof(struct SmsMsgHdr_ST));

 VAR_9 = FUNC_6(VAR_6, VAR_8, VAR_8->msgLength,
       &VAR_6->version_ex_done);
 if (VAR_9 == -VAR_1) {
  FUNC_5("MSG_SMS_GET_VERSION_EX_REQ failed first try");

  if (FUNC_7(&VAR_6->resume_done,
      FUNC_4(5000))) {
   VAR_9 = FUNC_6(
    VAR_6, VAR_8, VAR_8->msgLength,
    &VAR_6->version_ex_done);
   if (VAR_9 < 0)
    FUNC_5("MSG_SMS_GET_VERSION_EX_REQ failed "
     "second try, rc %d", VAR_9);
  } else
   VAR_9 = -VAR_1;
 }

 FUNC_2(VAR_7);

 return VAR_9;
}
