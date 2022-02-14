
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned short u8 ;
struct ipath_devdata {int ipath_nguid; TYPE_2__* verbs_dev; scalar_t__ ipath_guid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ __be64 ;
struct TYPE_3__ {scalar_t__ node_guid; } ;
struct TYPE_4__ {TYPE_1__ ibdev; } ;


 int VAR_0 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,char*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
     const char *VAR_3,
     size_t VAR_4)
{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_1);
 ssize_t VAR_6;
 unsigned short VAR_7[8];
 __be64 VAR_8;
 u8 *VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_3, "%hx:%hx:%hx:%hx:%hx:%hx:%hx:%hx",
     &VAR_7[0], &VAR_7[1], &VAR_7[2], &VAR_7[3],
     &VAR_7[4], &VAR_7[5], &VAR_7[6], &VAR_7[7]) != 8)
  goto invalid;

 VAR_9 = (u8 *) &VAR_8;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  if (VAR_7[VAR_10] > 0xff)
   goto invalid;
  VAR_9[VAR_10] = VAR_7[VAR_10];
 }

 if (VAR_8 == 0)
  goto invalid;

 VAR_5->ipath_guid = VAR_8;
 VAR_5->ipath_nguid = 1;
 if (VAR_5->verbs_dev)
  VAR_5->verbs_dev->ibdev.node_guid = VAR_8;

 VAR_6 = FUNC_3(VAR_3);
 goto bail;

invalid:
 FUNC_1(VAR_5, "attempt to set invalid GUID\n");
 VAR_6 = -VAR_0;

bail:
 return VAR_6;
}
