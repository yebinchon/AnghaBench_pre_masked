
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {size_t product; int version; int vendor; int bustype; } ;
struct input_dev {int* evbit; int keybit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
struct grip {size_t* mode; struct input_dev** dev; int * phys; struct gameport* gameport; } ;
struct gameport_driver {int dummy; } ;
struct gameport {char* phys; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,struct gameport_driver*,int ) ;
 int FUNC_3 (struct gameport*,struct grip*) ;
 int FUNC_4 (struct gameport*,int ) ;
 int FUNC_5 (struct gameport*,int) ;
 int** VAR_13 ;
 int* VAR_14 ;
 int** VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct gameport*,int,unsigned int*) ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct gameport*,int,unsigned int*) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int,int,int,int,int) ;
 int FUNC_12 (struct input_dev*,struct grip*) ;
 int FUNC_13 (struct input_dev*) ;
 int FUNC_14 (struct grip*) ;
 struct grip* FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int ,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_18(struct gameport *VAR_21, struct gameport_driver *VAR_22)
{
 struct grip *VAR_23;
 struct input_dev *VAR_24;
 unsigned int VAR_25[VAR_8];
 int VAR_26, VAR_27, VAR_28;
 int VAR_29;

 if (!(VAR_23 = FUNC_15(sizeof(struct grip), VAR_7)))
  return -VAR_2;

 VAR_23->gameport = VAR_21;

 FUNC_3(VAR_21, VAR_23);

 VAR_29 = FUNC_2(VAR_21, VAR_22, VAR_6);
 if (VAR_29)
  goto fail1;

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  if (!FUNC_6(VAR_21, (VAR_26 << 1) + 4, VAR_25)) {
   VAR_23->mode[VAR_26] = VAR_11;
   continue;
  }
  if (!FUNC_7(VAR_21, (VAR_26 << 1) + 4, VAR_25)) {
   if (!(VAR_25[3] & 7)) {
    VAR_23->mode[VAR_26] = VAR_9;
    continue;
   }
   if (!(VAR_25[2] & 0xf0)) {
    VAR_23->mode[VAR_26] = VAR_12;
    continue;
   }
   VAR_23->mode[VAR_26] = VAR_10;
   continue;
  }
 }

 if (!VAR_23->mode[0] && !VAR_23->mode[1]) {
  VAR_29 = -VAR_1;
  goto fail2;
 }

 FUNC_4(VAR_21, VAR_20);
 FUNC_5(VAR_21, 20);

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  if (!VAR_23->mode[VAR_26])
   continue;

  VAR_23->dev[VAR_26] = VAR_24 = FUNC_8();
  if (!VAR_24) {
   VAR_29 = -VAR_2;
   goto fail3;
  }

  FUNC_17(VAR_23->phys[VAR_26], sizeof(VAR_23->phys[VAR_26]),
    "%s/input%d", VAR_21->phys, VAR_26);

  VAR_24->name = VAR_18[VAR_23->mode[VAR_26]];
  VAR_24->phys = VAR_23->phys[VAR_26];
  VAR_24->id.bustype = VAR_0;
  VAR_24->id.vendor = VAR_5;
  VAR_24->id.product = VAR_23->mode[VAR_26];
  VAR_24->id.version = 0x0100;
  VAR_24->dev.parent = &VAR_21->dev;

  FUNC_12(VAR_24, VAR_23);

  VAR_24->open = VAR_19;
  VAR_24->close = VAR_17;

  VAR_24->evbit[0] = FUNC_0(VAR_4) | FUNC_0(VAR_3);

  for (VAR_27 = 0; (VAR_28 = VAR_13[VAR_23->mode[VAR_26]][VAR_27]) >= 0; VAR_27++) {

   if (VAR_27 < VAR_16[VAR_23->mode[VAR_26]])
    FUNC_11(VAR_24, VAR_28, 14, 52, 1, 2);
   else if (VAR_27 < VAR_14[VAR_23->mode[VAR_26]])
    FUNC_11(VAR_24, VAR_28, 3, 57, 1, 0);
   else
    FUNC_11(VAR_24, VAR_28, -1, 1, 0, 0);
  }

  for (VAR_27 = 0; (VAR_28 = VAR_15[VAR_23->mode[VAR_26]][VAR_27]) >= 0; VAR_27++)
   if (VAR_28 > 0)
    FUNC_16(VAR_28, VAR_24->keybit);

  VAR_29 = FUNC_10(VAR_23->dev[VAR_26]);
  if (VAR_29)
   goto fail4;
 }

 return 0;

 fail4: FUNC_9(VAR_23->dev[VAR_26]);
 fail3: while (--VAR_26 >= 0)
  if (VAR_23->dev[VAR_26])
   FUNC_13(VAR_23->dev[VAR_26]);
 fail2: FUNC_1(VAR_21);
 fail1: FUNC_3(VAR_21, ((void*)0));
 FUNC_14(VAR_23);
 return VAR_29;
}
