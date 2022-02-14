
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int ap_dev; } ;
struct ica_rsa_modexpo {int outputdatalength; int outputdata; } ;
struct completion {int dummy; } ;
struct ap_message {int message; struct completion* private; scalar_t__ psmid; int receive; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zcrypt_device*,struct ap_message*,struct ica_rsa_modexpo*) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ap_message*) ;
 int FUNC_2 (struct ap_message*) ;
 int FUNC_3 (int ,struct ap_message*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct zcrypt_device*,struct ap_message*,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (struct completion*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct completion*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_10(struct zcrypt_device *VAR_6,
     struct ica_rsa_modexpo *VAR_7)
{
 struct ap_message VAR_8;
 struct completion VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8);
 VAR_8.message = FUNC_8(VAR_2, VAR_1);
 if (!VAR_8.message)
  return -VAR_0;
 VAR_8.receive = VAR_4;
 VAR_8.psmid = (((unsigned long long) VAR_3->pid) << 32) +
    FUNC_4(&VAR_5);
 VAR_8.private = &VAR_9;
 VAR_10 = FUNC_0(VAR_6, &VAR_8, VAR_7);
 if (VAR_10)
  goto out_free;
 FUNC_6(&VAR_9);
 FUNC_3(VAR_6->ap_dev, &VAR_8);
 VAR_10 = FUNC_9(&VAR_9);
 if (VAR_10 == 0)
  VAR_10 = FUNC_5(VAR_6, &VAR_8, VAR_7->outputdata,
          VAR_7->outputdatalength);
 else

  FUNC_1(VAR_6->ap_dev, &VAR_8);
out_free:
 FUNC_7(VAR_8.message);
 return VAR_10;
}
