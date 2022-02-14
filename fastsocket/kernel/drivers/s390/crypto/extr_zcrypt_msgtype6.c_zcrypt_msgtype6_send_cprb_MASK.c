
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int ap_dev; } ;
struct response_type {int work; int type; } ;
struct ica_xcRB {int dummy; } ;
struct ap_message {int message; struct response_type* private; scalar_t__ psmid; int receive; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zcrypt_device*,struct ap_message*,struct ica_xcRB*) ;
 int FUNC_1 (int ,struct ap_message*) ;
 int FUNC_2 (struct ap_message*) ;
 int FUNC_3 (int ,struct ap_message*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct zcrypt_device*,struct ap_message*,struct ica_xcRB*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static long FUNC_10(struct zcrypt_device *VAR_7,
        struct ica_xcRB *VAR_8)
{
 struct ap_message VAR_9;
 struct response_type VAR_10 = {
  .type = VAR_3,
 };
 int VAR_11;

 FUNC_2(&VAR_9);
 VAR_9.message = FUNC_7(VAR_2, VAR_1);
 if (!VAR_9.message)
  return -VAR_0;
 VAR_9.receive = VAR_5;
 VAR_9.psmid = (((unsigned long long) VAR_4->pid) << 32) +
    FUNC_4(&VAR_6);
 VAR_9.private = &VAR_10;
 VAR_11 = FUNC_0(VAR_7, &VAR_9, VAR_8);
 if (VAR_11)
  goto out_free;
 FUNC_6(&VAR_10.work);
 FUNC_3(VAR_7->ap_dev, &VAR_9);
 VAR_11 = FUNC_9(&VAR_10.work);
 if (VAR_11 == 0)
  VAR_11 = FUNC_5(VAR_7, &VAR_9, VAR_8);
 else

  FUNC_1(VAR_7->ap_dev, &VAR_9);
out_free:
 FUNC_8(VAR_9.message);
 return VAR_11;
}
