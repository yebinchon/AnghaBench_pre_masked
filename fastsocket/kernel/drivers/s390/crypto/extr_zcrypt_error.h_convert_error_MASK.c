
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int online; TYPE_1__* ap_dev; } ;
struct error_hdr {int reply_code; } ;
struct ap_message {struct error_hdr* message; } ;
struct TYPE_2__ {int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct zcrypt_device*,char*,int ,int ,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_3(struct zcrypt_device *VAR_4,
    struct ap_message *VAR_5)
{
 struct error_hdr *VAR_6 = VAR_5->message;

 switch (VAR_6->reply_code) {
 case 131:
 case 130:
 case 134:
 case 128:




  return -VAR_2;
 case 132:






  FUNC_0(1);
  FUNC_2(&VAR_3, 1);
  VAR_4->online = 0;
  FUNC_1(VAR_0, VAR_4, "dev%04xo%drc%d",
          VAR_4->ap_dev->qid,
          VAR_4->online, VAR_6->reply_code);
  return -VAR_1;
 case 129:
 case 133:


  FUNC_2(&VAR_3, 1);
  VAR_4->online = 0;
  FUNC_1(VAR_0, VAR_4, "dev%04xo%drc%d",
          VAR_4->ap_dev->qid,
          VAR_4->online, VAR_6->reply_code);
  return -VAR_1;
 default:
  VAR_4->online = 0;
  FUNC_1(VAR_0, VAR_4, "dev%04xo%drc%d",
          VAR_4->ap_dev->qid,
          VAR_4->online, VAR_6->reply_code);
  return -VAR_1;
 }
}
