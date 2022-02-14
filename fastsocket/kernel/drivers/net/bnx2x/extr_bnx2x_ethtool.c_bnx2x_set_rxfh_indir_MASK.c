
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__* ind_table; } ;
struct bnx2x {TYPE_2__* fp; TYPE_1__ rss_conf_obj; } ;
struct TYPE_4__ {scalar_t__ const cl_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bnx2x*,int) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const u32 *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_1(VAR_1);
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->rss_conf_obj.ind_table[VAR_4] = VAR_2[VAR_4] + VAR_3->fp->cl_id;
 }

 return FUNC_0(VAR_3, 0);
}
