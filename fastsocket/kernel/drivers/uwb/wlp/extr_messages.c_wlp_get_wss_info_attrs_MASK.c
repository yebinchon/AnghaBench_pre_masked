
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_wss_tmp_info {int accept_enroll; int sec_status; int bcast; int name; } ;
struct wlp_attr_hdr {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 size_t FUNC_1 (struct wlp*,void*,int*,size_t) ;
 size_t FUNC_2 (struct wlp*,void*,int *,size_t) ;
 size_t FUNC_3 (struct wlp*,void*,int ,size_t) ;
 size_t FUNC_4 (struct wlp*,void*,int*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct wlp *VAR_1,
          struct wlp_attr_hdr *VAR_2,
          struct wlp_wss_tmp_info *VAR_3,
          ssize_t VAR_4)
{
 struct device *VAR_5 = &VAR_1->rc->uwb_dev.dev;
 void *VAR_6 = VAR_2;
 size_t VAR_7 = 0;
 ssize_t VAR_8 = -VAR_0;

 VAR_8 = FUNC_3(VAR_1, VAR_6, VAR_3->name, VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain WSS name from "
   "WSS info in D2 message.\n");
  goto error_parse;
 }
 VAR_7 += VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_6 + VAR_7, &VAR_3->accept_enroll,
         VAR_4 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain accepting "
   "enrollment from WSS info in D2 message.\n");
  goto error_parse;
 }
 if (VAR_3->accept_enroll != 0 && VAR_3->accept_enroll != 1) {
  FUNC_0(VAR_5, "WLP: invalid value for accepting "
   "enrollment in D2 message.\n");
  VAR_8 = -VAR_0;
  goto error_parse;
 }
 VAR_7 += VAR_8;

 VAR_8 = FUNC_4(VAR_1, VAR_6 + VAR_7, &VAR_3->sec_status,
     VAR_4 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain secure "
   "status from WSS info in D2 message.\n");
  goto error_parse;
 }
 if (VAR_3->sec_status != 0 && VAR_3->sec_status != 1) {
  FUNC_0(VAR_5, "WLP: invalid value for secure "
   "status in D2 message.\n");
  VAR_8 = -VAR_0;
  goto error_parse;
 }
 VAR_7 += VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_6 + VAR_7, &VAR_3->bcast,
       VAR_4 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain broadcast "
   "address from WSS info in D2 message.\n");
  goto error_parse;
 }
 VAR_7 += VAR_8;
 VAR_8 = VAR_7;
error_parse:
 return VAR_8;
}
