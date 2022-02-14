
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_attr_hdr {int length; int type; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef enum wlp_attr_type { ____Placeholder_wlp_attr_type } wlp_attr_type ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wlp *VAR_1, struct wlp_attr_hdr *VAR_2,
         enum wlp_attr_type VAR_3, unsigned VAR_4)
{
 struct device *VAR_5 = &VAR_1->rc->uwb_dev.dev;

 if (FUNC_1(VAR_2->type) != VAR_3) {
  FUNC_0(VAR_5, "WLP: unexpected header type. Expected "
   "%u, got %u.\n", VAR_3, FUNC_1(VAR_2->type));
  return -VAR_0;
 }
 if (FUNC_1(VAR_2->length) != VAR_4) {
  FUNC_0(VAR_5, "WLP: unexpected length in header. Expected "
   "%u, got %u.\n", VAR_4, FUNC_1(VAR_2->length));
  return -VAR_0;
 }
 return 0;
}
