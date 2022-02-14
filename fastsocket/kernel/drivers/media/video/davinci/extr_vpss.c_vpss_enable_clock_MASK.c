
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vpss_clock_sel { ____Placeholder_vpss_clock_sel } vpss_clock_sel ;
struct TYPE_3__ {int (* enable_clock ) (int,int) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int) ;

int FUNC_1(enum vpss_clock_sel VAR_1, int VAR_2)
{
 if (!VAR_0.hw_ops.enable_clock)
  return -1;

 return VAR_0.hw_ops.enable_clock(VAR_1, VAR_2);
}
