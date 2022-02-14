
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int ap_dev; } ;
struct response_type {int work; int type; } ;
struct ap_message {int message; struct response_type* private; scalar_t__ psmid; int receive; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ap_message*) ;
 int FUNC_1 (struct ap_message*) ;
 int FUNC_2 (int ,struct ap_message*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct zcrypt_device*,struct ap_message*,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct ap_message*,int ) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static long FUNC_10(struct zcrypt_device *VAR_8,
        char *VAR_9)
{
 struct ap_message VAR_10;
 struct response_type VAR_11 = {
  .type = VAR_3,
 };
 int VAR_12;

 FUNC_1(&VAR_10);
 VAR_10.message = FUNC_7(VAR_2, VAR_1);
 if (!VAR_10.message)
  return -VAR_0;
 VAR_10.receive = VAR_6;
 VAR_10.psmid = (((unsigned long long) VAR_5->pid) << 32) +
    FUNC_3(&VAR_7);
 VAR_10.private = &VAR_11;
 FUNC_8(VAR_8->ap_dev, &VAR_10, VAR_4);
 FUNC_5(&VAR_11.work);
 FUNC_2(VAR_8->ap_dev, &VAR_10);
 VAR_12 = FUNC_9(&VAR_11.work);
 if (VAR_12 == 0)
  VAR_12 = FUNC_4(VAR_8, &VAR_10, VAR_9);
 else

  FUNC_0(VAR_8->ap_dev, &VAR_10);
 FUNC_6(VAR_10.message);
 return VAR_12;
}
