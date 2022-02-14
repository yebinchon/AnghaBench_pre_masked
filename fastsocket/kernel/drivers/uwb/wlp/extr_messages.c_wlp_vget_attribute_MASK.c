
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct wlp_attr_hdr {int length; int type; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct wlp *VAR_3, u16 VAR_4,
 struct wlp_attr_hdr *VAR_5, void *VAR_6, ssize_t VAR_7,
 ssize_t VAR_8)
{
 struct device *VAR_9 = &VAR_3->rc->uwb_dev.dev;
 size_t VAR_10;
 if (VAR_8 < 0)
  return -VAR_1;
 if (VAR_8 < sizeof(*VAR_5)) {
  FUNC_0(VAR_9, "WLP: Not enough space in buffer to parse"
   " header.\n");
  return -VAR_2;
 }
 if (FUNC_1(VAR_5->type) != VAR_4) {
  FUNC_0(VAR_9, "WLP: Unexpected attribute type. Got %u, "
   "expected %u.\n", FUNC_1(VAR_5->type),
   VAR_4);
  return -VAR_1;
 }
 VAR_10 = FUNC_1(VAR_5->length);
 if (VAR_10 > VAR_7) {
  FUNC_0(VAR_9, "WLP: Attribute larger than maximum "
   "allowed. Received %zu, max is %d.\n", VAR_10,
   (int)VAR_7);
  return -VAR_0;
 }
 if (VAR_8 < sizeof(*VAR_5) + VAR_10) {
  FUNC_0(VAR_9, "WLP: Not enough space in buffer to parse "
   "variable data.\n");
  return -VAR_2;
 }
 FUNC_2(VAR_6, (void *)VAR_5 + sizeof(*VAR_5), VAR_10);
 return sizeof(*VAR_5) + VAR_10;
}
