
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nsec; scalar_t__ sec; } ;
struct TYPE_3__ {int mode; } ;
struct pps_device {int assert_sequence; TYPE_2__ assert_tu; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pps_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,long long,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct pps_device *VAR_4 = FUNC_0(VAR_1);

 if (!(VAR_4->info.mode & VAR_0))
  return 0;

 return FUNC_1(VAR_3, "%lld.%09d#%d\n",
   (long long) VAR_4->assert_tu.sec, VAR_4->assert_tu.nsec,
   VAR_4->assert_sequence);
}
