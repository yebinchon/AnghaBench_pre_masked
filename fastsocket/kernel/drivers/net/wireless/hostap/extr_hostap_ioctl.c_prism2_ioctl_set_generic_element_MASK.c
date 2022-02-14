
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
struct TYPE_6__ {TYPE_1__ generic_elem; } ;
struct prism2_hostapd_param {TYPE_2__ u; } ;
struct TYPE_7__ {int dev; } ;
typedef TYPE_3__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(local_info_t *VAR_2,
         struct prism2_hostapd_param *VAR_3,
         int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_3->u.generic_elem.len;
 VAR_5 = VAR_4 - VAR_1;
 if (VAR_5 < 0 || VAR_5 < VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_2->dev,
      VAR_3->u.generic_elem.data, VAR_6);
}
