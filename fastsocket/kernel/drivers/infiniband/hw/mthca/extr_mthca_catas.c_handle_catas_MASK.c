
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int list; scalar_t__ map; } ;
struct mthca_dev {int active; TYPE_2__ catas_err; int ib_dev; } ;
struct TYPE_3__ {scalar_t__ port_num; } ;
struct ib_event {TYPE_1__ element; int event; int * device; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ib_event*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mthca_dev*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct mthca_dev *VAR_6)
{
 struct ib_event VAR_7;
 unsigned long VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_7.device = &VAR_6->ib_dev;
 VAR_7.event = VAR_0;
 VAR_7.element.port_num = 0;
 VAR_6->active = 0;

 FUNC_0(&VAR_7);

 switch (FUNC_7(FUNC_4(VAR_6->catas_err.map)) >> 24) {
 case 130:
  VAR_9 = "internal error";
  break;
 case 128:
  VAR_9 = "uplink bus error";
  break;
 case 131:
  VAR_9 = "DDR data error";
  break;
 case 129:
  VAR_9 = "internal parity error";
  break;
 default:
  VAR_9 = "unknown error";
  break;
 }

 FUNC_2(VAR_6, "Catastrophic error detected: %s\n", VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_6->catas_err.size; ++VAR_10)
  FUNC_2(VAR_6, "  buf[%02x]: %08x\n",
     VAR_10, FUNC_7(FUNC_4(VAR_6->catas_err.map + VAR_10)));

 if (VAR_3)
  return;

 FUNC_5(&VAR_2, VAR_8);
 FUNC_1(&VAR_6->catas_err.list, &VAR_1);
 FUNC_3(VAR_5, &VAR_4);
 FUNC_6(&VAR_2, VAR_8);
}
