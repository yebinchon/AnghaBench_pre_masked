
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sclp_req {scalar_t__ status; scalar_t__ sccb; struct completion* callback_data; } ;
struct TYPE_5__ {int response_code; } ;
struct cpi_sccb {TYPE_1__ header; } ;
struct completion {int dummy; } ;
struct TYPE_6__ {int sclp_receive_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sclp_req*) ;
 int FUNC_1 (struct sclp_req*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sclp_req*) ;
 struct sclp_req* FUNC_3 () ;
 int FUNC_4 (struct completion*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct sclp_req*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct completion*) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct completion VAR_5;
 struct sclp_req *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(&VAR_4);
 if (VAR_7)
  goto out;
 if (!(VAR_4.sclp_receive_mask & VAR_2)) {
  VAR_7 = -VAR_1;
  goto out_unregister;
 }

 VAR_6 = FUNC_3();
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out_unregister;
 }

 FUNC_4(&VAR_5);
 VAR_6->callback_data = &VAR_5;


 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  goto out_free_req;

 FUNC_9(&VAR_5);

 if (VAR_6->status != VAR_3) {
  FUNC_5("request failed (status=0x%02x)\n",
      VAR_6->status);
  VAR_7 = -VAR_0;
  goto out_free_req;
 }

 VAR_8 = ((struct cpi_sccb *) VAR_6->sccb)->header.response_code;
 if (VAR_8 != 0x0020) {
  FUNC_5("request failed with response code 0x%x\n",
      VAR_8);
  VAR_7 = -VAR_0;
 }

out_free_req:
 FUNC_2(VAR_6);

out_unregister:
 FUNC_8(&VAR_4);

out:
 return VAR_7;
}
