
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wlp_attr_hdr {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct wlp*,struct wlp_attr_hdr*,int ,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct wlp *VAR_2, u16 VAR_3,
 struct wlp_attr_hdr *VAR_4, void *VAR_5, ssize_t VAR_6,
 ssize_t VAR_7)
{
 struct device *VAR_8 = &VAR_2->rc->uwb_dev.dev;
 ssize_t VAR_9 = sizeof(*VAR_4) + VAR_6;
 if (VAR_7 < 0)
  return -VAR_0;
 if (VAR_7 < VAR_9) {
  FUNC_0(VAR_8, "WLP: Not enough space in buffer to parse"
   " attribute field. Need %d, received %zu\n",
   (int)VAR_9, VAR_7);
  return -VAR_1;
 }
 if (FUNC_2(VAR_2, VAR_4, VAR_3, VAR_6) < 0) {
  FUNC_0(VAR_8, "WLP: Header verification failed. \n");
  return -VAR_0;
 }
 FUNC_1(VAR_5, (void *)VAR_4 + sizeof(*VAR_4), VAR_6);
 return VAR_9;
}
