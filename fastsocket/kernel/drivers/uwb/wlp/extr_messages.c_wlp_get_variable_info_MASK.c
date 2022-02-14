
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int category; int subID; } ;
struct wlp_device_info {TYPE_3__ prim_dev_type; int serial; int model_nr; int model_name; int manufacturer; } ;
struct wlp_attr_hdr {int type; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;





 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct wlp*,void*,int ,size_t) ;
 size_t FUNC_3 (struct wlp*,void*,int ,size_t) ;
 size_t FUNC_4 (struct wlp*,void*,int ,size_t) ;
 size_t FUNC_5 (struct wlp*,void*,TYPE_3__*,size_t) ;
 size_t FUNC_6 (struct wlp*,void*,int ,size_t) ;

__attribute__((used)) static
int FUNC_7(struct wlp *VAR_1, void *VAR_2,
     struct wlp_device_info *VAR_3, ssize_t VAR_4)
{
 struct device *VAR_5 = &VAR_1->rc->uwb_dev.dev;
 size_t VAR_6 = 0;
 struct wlp_attr_hdr *VAR_7;
 ssize_t VAR_8 = 0;
 unsigned VAR_9 = 0;

 while (VAR_4 - VAR_6 > 0) {
  if (VAR_4 - VAR_6 < sizeof(*VAR_7)) {
   FUNC_0(VAR_5, "WLP: Partial data in frame, cannot "
    "parse. \n");
   goto error_parse;
  }
  VAR_7 = VAR_2 + VAR_6;
  switch (FUNC_1(VAR_7->type)) {
  case 132:
   if (VAR_9 >= 132) {
    FUNC_0(VAR_5, "WLP: Incorrect order of "
     "attribute values in D1 msg.\n");
    goto error_parse;
   }
   VAR_8 = FUNC_2(VAR_1, VAR_2 + VAR_6,
            VAR_3->manufacturer,
            VAR_4 - VAR_6);
   if (VAR_8 < 0) {
    FUNC_0(VAR_5, "WLP: Unable to obtain "
     "Manufacturer attribute from D1 "
     "message.\n");
    goto error_parse;
   }
   VAR_9 = 132;
   VAR_6 += VAR_8;
   break;
  case 131:
   if (VAR_9 >= 131) {
    FUNC_0(VAR_5, "WLP: Incorrect order of "
     "attribute values in D1 msg.\n");
    goto error_parse;
   }
   VAR_8 = FUNC_3(VAR_1, VAR_2 + VAR_6,
          VAR_3->model_name,
          VAR_4 - VAR_6);
   if (VAR_8 < 0) {
    FUNC_0(VAR_5, "WLP: Unable to obtain Model "
     "name attribute from D1 message.\n");
    goto error_parse;
   }
   VAR_9 = 131;
   VAR_6 += VAR_8;
   break;
  case 130:
   if (VAR_9 >= 130) {
    FUNC_0(VAR_5, "WLP: Incorrect order of "
     "attribute values in D1 msg.\n");
    goto error_parse;
   }
   VAR_8 = FUNC_4(VAR_1, VAR_2 + VAR_6,
        VAR_3->model_nr,
        VAR_4 - VAR_6);
   if (VAR_8 < 0) {
    FUNC_0(VAR_5, "WLP: Unable to obtain Model "
     "number attribute from D1 message.\n");
    goto error_parse;
   }
   VAR_9 = 130;
   VAR_6 += VAR_8;
   break;
  case 128:
   if (VAR_9 >= 128) {
    FUNC_0(VAR_5, "WLP: Incorrect order of "
     "attribute values in D1 msg.\n");
    goto error_parse;
   }
   VAR_8 = FUNC_6(VAR_1, VAR_2 + VAR_6,
      VAR_3->serial, VAR_4 - VAR_6);
   if (VAR_8 < 0) {
    FUNC_0(VAR_5, "WLP: Unable to obtain Serial "
     "number attribute from D1 message.\n");
    goto error_parse;
   }
   VAR_9 = 128;
   VAR_6 += VAR_8;
   break;
  case 129:
   if (VAR_9 >= 129) {
    FUNC_0(VAR_5, "WLP: Incorrect order of "
     "attribute values in D1 msg.\n");
    goto error_parse;
   }
   VAR_8 = FUNC_5(VAR_1, VAR_2 + VAR_6,
             &VAR_3->prim_dev_type,
             VAR_4 - VAR_6);
   if (VAR_8 < 0) {
    FUNC_0(VAR_5, "WLP: Unable to obtain Primary "
     "device type attribute from D1 "
     "message.\n");
    goto error_parse;
   }
   VAR_3->prim_dev_type.category =
    FUNC_1(VAR_3->prim_dev_type.category);
   VAR_3->prim_dev_type.subID =
    FUNC_1(VAR_3->prim_dev_type.subID);
   VAR_9 = 129;
   VAR_6 += VAR_8;
   break;
  default:

   goto out;
   break;
  }
 }
out:
 return VAR_6;
error_parse:
 return -VAR_0;
}
