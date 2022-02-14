
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ib_port_modify {int set_port_cap_mask; int clr_port_cap_mask; } ;
struct ib_port_attr {int port_cap_flags; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int cap_mask_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
          struct ib_port_modify *VAR_4)
{
 struct ib_port_attr VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_2(&FUNC_4(VAR_1)->cap_mask_mutex);

 VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_5);
 if (VAR_7)
  goto out;

 VAR_6 = (VAR_5.port_cap_flags | VAR_4->set_port_cap_mask) &
  ~VAR_4->clr_port_cap_mask;

 VAR_7 = FUNC_0(FUNC_4(VAR_1), VAR_2,
       !!(VAR_3 & VAR_0),
       VAR_6);

out:
 FUNC_3(&FUNC_4(VAR_1)->cap_mask_mutex);
 return VAR_7;
}
