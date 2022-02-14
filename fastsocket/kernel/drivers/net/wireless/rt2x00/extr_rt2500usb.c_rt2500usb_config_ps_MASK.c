
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rt2x00lib_conf {TYPE_1__* conf; } ;
struct rt2x00_dev {int beacon_int; TYPE_3__* ops; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;
struct TYPE_6__ {TYPE_2__* lib; } ;
struct TYPE_5__ {int (* set_device_state ) (struct rt2x00_dev*,int) ;} ;
struct TYPE_4__ {int flags; int listen_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_7,
    struct rt2x00lib_conf *VAR_8)
{
 enum dev_state VAR_9 =
     (VAR_8->conf->flags & VAR_0) ?
  VAR_6 : VAR_5;
 u16 VAR_10;

 if (VAR_9 == VAR_6) {
  FUNC_0(VAR_7, VAR_1, &VAR_10);
  FUNC_2(&VAR_10, VAR_4,
       VAR_7->beacon_int - 20);
  FUNC_2(&VAR_10, VAR_3,
       VAR_8->conf->listen_interval - 1);


  FUNC_2(&VAR_10, VAR_2, 0);
  FUNC_1(VAR_7, VAR_1, VAR_10);

  FUNC_2(&VAR_10, VAR_2, 1);
  FUNC_1(VAR_7, VAR_1, VAR_10);
 } else {
  FUNC_0(VAR_7, VAR_1, &VAR_10);
  FUNC_2(&VAR_10, VAR_2, 0);
  FUNC_1(VAR_7, VAR_1, VAR_10);
 }

 VAR_7->ops->lib->set_device_state(VAR_7, VAR_9);
}
