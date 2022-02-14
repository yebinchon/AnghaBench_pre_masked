
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_attr_hdr {int length; int type; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wlp *VAR_3,
           struct wlp_attr_hdr *VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = &VAR_3->rc->uwb_dev.dev;
 size_t VAR_7;
 int VAR_8 = 0;

 if (VAR_5 < sizeof(*VAR_4)) {
  FUNC_0(VAR_6, "WLP: Not enough space in buffer to parse"
   " WSS information attribute header.\n");
  VAR_8 = -VAR_0;
  goto out;
 }
 if (FUNC_1(VAR_4->type) != VAR_2) {

  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_7 = FUNC_1(VAR_4->length);
 if (VAR_5 < sizeof(*VAR_4) + VAR_7) {
  FUNC_0(VAR_6, "WLP: Not enough space in buffer to parse "
   "variable data. Got %d, expected %d.\n",
   (int)VAR_5, (int)(sizeof(*VAR_4) + VAR_7));
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_8 = VAR_7;
out:
 return VAR_8;
}
