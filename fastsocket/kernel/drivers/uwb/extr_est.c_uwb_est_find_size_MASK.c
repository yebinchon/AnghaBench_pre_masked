
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct uwb_rceb {int bEventType; scalar_t__ bEventContext; int wEvent; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef int ssize_t ;
struct TYPE_5__ {int type_event_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (struct uwb_rc*,TYPE_2__*,int,struct uwb_rceb const*,size_t) ;
 int VAR_3 ;
 unsigned int VAR_4 ;

ssize_t FUNC_5(struct uwb_rc *VAR_5, const struct uwb_rceb *VAR_6,
     size_t VAR_7)
{

 ssize_t VAR_8;
 struct device *VAR_9 = &VAR_5->uwb_dev.dev;
 unsigned long VAR_10;
 unsigned VAR_11;
 u16 VAR_12, VAR_13;
 u8 *VAR_14 = (u8 *) VAR_6;

 FUNC_2(&VAR_3, VAR_10);
 VAR_8 = -VAR_1;
 if (VAR_7 < sizeof(*VAR_6))
  goto out;
 VAR_13 = FUNC_1(VAR_6->wEvent);
 VAR_12 = VAR_6->bEventType << 8 | (VAR_13 & 0xff00) >> 8;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_2[VAR_11].type_event_high != VAR_12)
   continue;
  VAR_8 = FUNC_4(VAR_5, &VAR_2[VAR_11],
     VAR_13 & 0x00ff, VAR_6, VAR_7);

  if (VAR_8 != -VAR_0)
   goto out;
 }
 FUNC_0(VAR_9, "event 0x%02x/%04x/%02x: no handlers available; "
  "RCEB %02x %02x %02x %02x\n",
  (unsigned) VAR_6->bEventType,
  (unsigned) FUNC_1(VAR_6->wEvent),
  (unsigned) VAR_6->bEventContext,
  VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3]);
 VAR_8 = -VAR_0;
out:
 FUNC_3(&VAR_3, VAR_10);
 return VAR_8;
}
