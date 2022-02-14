
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; int rid; } ;
struct TYPE_7__ {TYPE_1__ rid; } ;
struct prism2_hostapd_param {TYPE_2__ u; } ;
struct TYPE_9__ {int dev; TYPE_3__* func; } ;
typedef TYPE_4__ local_info_t ;
struct TYPE_8__ {int (* get_rid ) (int ,int ,int ,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(local_info_t *VAR_2,
    struct prism2_hostapd_param *VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4 - VAR_1;
 if (VAR_5 < 0)
  return -VAR_0;

 VAR_6 = VAR_2->func->get_rid(VAR_2->dev, VAR_3->u.rid.rid,
       VAR_3->u.rid.data, VAR_3->u.rid.len, 0);
 if (VAR_6 >= 0) {
  VAR_3->u.rid.len = VAR_6;
  return 0;
 }

 return VAR_6;
}
