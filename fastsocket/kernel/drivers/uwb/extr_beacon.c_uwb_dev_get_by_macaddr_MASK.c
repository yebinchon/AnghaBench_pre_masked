
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {TYPE_1__ uwb_beca; } ;
struct uwb_mac_addr {int dummy; } ;
struct uwb_dev {int dummy; } ;
struct uwb_beca_e {int uwb_dev; } ;


 struct uwb_beca_e* FUNC_0 (struct uwb_rc*,struct uwb_mac_addr const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct uwb_dev* FUNC_3 (struct uwb_rc*,int ) ;

struct uwb_dev *FUNC_4(struct uwb_rc *VAR_0,
           const struct uwb_mac_addr *VAR_1)
{
 struct uwb_dev *VAR_2 = ((void*)0);
 struct uwb_beca_e *VAR_3;

 FUNC_1(&VAR_0->uwb_beca.mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  VAR_2 = FUNC_3(VAR_0, VAR_3->uwb_dev);
 FUNC_2(&VAR_0->uwb_beca.mutex);

 return VAR_2;
}
