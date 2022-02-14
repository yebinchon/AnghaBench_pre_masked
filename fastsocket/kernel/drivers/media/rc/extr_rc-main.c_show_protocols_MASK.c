
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int rc_type; } ;
struct rc_dev {scalar_t__ driver_type; int allowed_protos; TYPE_2__* raw; TYPE_1__ rc_map; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {int type; char* name; } ;
struct TYPE_6__ {int enabled_protocols; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,long long,long long) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (char*,char*,char*) ;
 struct rc_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct rc_dev *VAR_6 = FUNC_4(VAR_3);
 u64 VAR_7, VAR_8;
 char *VAR_9 = VAR_5;
 int VAR_10;


 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->driver_type == VAR_1) {
  VAR_8 = VAR_6->rc_map.rc_type;
  VAR_7 = VAR_6->allowed_protos;
 } else {
  VAR_8 = VAR_6->raw->enabled_protocols;
  VAR_7 = FUNC_2();
 }

 FUNC_1(1, "allowed - 0x%llx, enabled - 0x%llx\n",
     (long long)VAR_7,
     (long long)VAR_8);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  if (VAR_7 & VAR_8 & VAR_2[VAR_10].type)
   VAR_9 += FUNC_3(VAR_9, "[%s] ", VAR_2[VAR_10].name);
  else if (VAR_7 & VAR_2[VAR_10].type)
   VAR_9 += FUNC_3(VAR_9, "%s ", VAR_2[VAR_10].name);
 }

 if (VAR_9 != VAR_5)
  VAR_9--;
 *VAR_9 = '\n';
 return VAR_9 + 1 - VAR_5;
}
