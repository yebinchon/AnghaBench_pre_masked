
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {scalar_t__ port_state; int fast_io_fail_tmo; int dev_loss_tmo; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char**,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 struct fc_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_6,
    struct device_attribute *VAR_7, const char *VAR_8,
    size_t VAR_9)
{
 int VAR_10;
 char *VAR_11;
 struct fc_rport *VAR_12 = FUNC_2(VAR_6);

 if ((VAR_12->port_state == VAR_2) ||
     (VAR_12->port_state == VAR_3) ||
     (VAR_12->port_state == VAR_4))
  return -VAR_0;
 if (FUNC_1(VAR_8, "off", 3) == 0)
  VAR_12->fast_io_fail_tmo = -1;
 else {
  VAR_10 = FUNC_0(VAR_8, &VAR_11, 0);
  if ((*VAR_11 && (*VAR_11 != '\n')) || (VAR_10 < 0))
   return -VAR_1;




  if ((VAR_10 >= VAR_12->dev_loss_tmo) ||
      (VAR_10 > VAR_5))
   return -VAR_1;

  VAR_12->fast_io_fail_tmo = VAR_10;
 }
 return VAR_9;
}
