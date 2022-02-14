
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ipath_devdata {int ipath_flags; int * ipath_statusp; int ipath_unit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct ipath_devdata*,char*,...) ;
 scalar_t__ FUNC_3 (struct ipath_devdata*,int) ;
 scalar_t__ FUNC_4 (char const*,scalar_t__*) ;
 int FUNC_5 (struct ipath_devdata*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_2);
 ssize_t VAR_7;
 u16 VAR_8 = 0;

 VAR_7 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6, "attempt to use non-numeric on enable\n");
  goto bail;
 }

 if (VAR_8) {
  if (!(VAR_6->ipath_flags & VAR_0))
   goto bail;

  FUNC_1(VAR_2, "Enabling unit %d\n", VAR_6->ipath_unit);

  VAR_7 = FUNC_3(VAR_6, 1);
  if (VAR_7)
   FUNC_2(VAR_6, "Failed to enable unit %d\n",
          VAR_6->ipath_unit);
  else {
   VAR_6->ipath_flags &= ~VAR_0;
   *VAR_6->ipath_statusp &= ~VAR_1;
  }
 }
 else if (!(VAR_6->ipath_flags & VAR_0)) {
  FUNC_1(VAR_2, "Disabling unit %d\n", VAR_6->ipath_unit);
  FUNC_5(VAR_6);
  VAR_6->ipath_flags |= VAR_0;
  *VAR_6->ipath_statusp |= VAR_1;
 }

bail:
 return VAR_7;
}
