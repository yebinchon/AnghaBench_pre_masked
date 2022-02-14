
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_7__ {scalar_t__ blk0_len; scalar_t__ len; } ;
struct TYPE_5__ {size_t scp_data_len; scalar_t__ scp_data; } ;
struct TYPE_6__ {TYPE_1__ fcp; } ;
struct TYPE_8__ {TYPE_3__ hdr; TYPE_2__ ipl_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,char*,size_t) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_6, struct kobject *VAR_7,
           struct bin_attribute *VAR_8,
           char *VAR_9, loff_t VAR_10, size_t VAR_11)
{
 size_t VAR_12;
 size_t VAR_13;

 if (VAR_10 < 0)
  return -VAR_1;

 if (VAR_10 >= VAR_0)
  return -VAR_2;

 if (VAR_11 > VAR_0 - VAR_10)
  VAR_11 = VAR_0 - VAR_10;

 FUNC_0(VAR_5->ipl_info.fcp.scp_data, VAR_9 + VAR_10, VAR_11);
 VAR_13 = VAR_10 + VAR_11;

 if (VAR_13 % 8) {
  VAR_12 = 8 - (VAR_13 % 8);
  FUNC_1(VAR_5->ipl_info.fcp.scp_data + VAR_13,
         0, VAR_12);
  VAR_13 += VAR_12;
 }

 VAR_5->ipl_info.fcp.scp_data_len = VAR_13;
 VAR_5->hdr.len = VAR_4 + VAR_13;
 VAR_5->hdr.blk0_len = VAR_3 + VAR_13;

 return VAR_11;
}
