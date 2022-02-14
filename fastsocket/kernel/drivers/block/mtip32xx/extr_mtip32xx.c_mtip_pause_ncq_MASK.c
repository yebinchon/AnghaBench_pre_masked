
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {void* ic_pause_timer; int flags; TYPE_1__* dd; scalar_t__ mmio; struct host_to_dev_fis* rxfis; } ;
struct host_to_dev_fis {int command; int features; } ;
struct TYPE_2__ {int dd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 void* VAR_8 ;
 int FUNC_1 (struct mtip_port*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct mtip_port *VAR_9,
    struct host_to_dev_fis *VAR_10)
{
 struct host_to_dev_fis *VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_9->rxfis + VAR_7;
 VAR_12 = FUNC_2(VAR_9->mmio+VAR_6);

 if (VAR_10->command == VAR_2)
  FUNC_0(VAR_3, &VAR_9->dd->dd_flag);

 if ((VAR_12 & 1))
  return 0;

 if (VAR_10->command == VAR_1) {
  FUNC_3(VAR_5, &VAR_9->flags);
  FUNC_3(VAR_3, &VAR_9->dd->dd_flag);
  VAR_9->ic_pause_timer = VAR_8;
  return 1;
 } else if ((VAR_10->command == VAR_0) &&
     (VAR_10->features == 0x03)) {
  FUNC_3(VAR_4, &VAR_9->flags);
  VAR_9->ic_pause_timer = VAR_8;
  return 1;
 } else if ((VAR_10->command == VAR_2) ||
  ((VAR_10->command == 0xFC) &&
   (VAR_10->features == 0x27 || VAR_10->features == 0x72 ||
    VAR_10->features == 0x62 || VAR_10->features == 0x26))) {

  FUNC_1(VAR_9);
  return 0;
 }

 return 0;
}
