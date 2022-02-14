
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inter_packet; } ;
struct TYPE_4__ {TYPE_1__ blkt; } ;
struct qeth_card {TYPE_2__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*,char const*,size_t,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_2, VAR_3,
       &VAR_4->info.blkt.inter_packet, 1000);
}
