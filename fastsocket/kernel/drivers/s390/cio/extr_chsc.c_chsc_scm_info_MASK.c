
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {int length; int code; } ;
struct chsc_scm_info {TYPE_1__ response; int reqtok; TYPE_2__ request; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct chsc_scm_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct chsc_scm_info*,int ,int) ;

int FUNC_4(struct chsc_scm_info *VAR_2, u64 VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->request.length = 0x0020;
 VAR_2->request.code = 0x004C;
 VAR_2->reqtok = VAR_3;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 > 0) {
  VAR_5 = (VAR_4 == 3) ? -VAR_1 : -VAR_0;
  goto out;
 }
 VAR_5 = FUNC_2(VAR_2->response.code);
 if (VAR_5 != 0)
  FUNC_0(2, "chsc: scm info failed (rc=%04x)\n",
         VAR_2->response.code);
out:
 return VAR_5;
}
