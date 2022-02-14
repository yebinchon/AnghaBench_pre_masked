
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pcc_acpi {TYPE_2__* input_dev; int * keymap; } ;
struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_7__ {int keybit; int setkeycode; int getkeycode; TYPE_1__ id; int phys; int name; int * evbit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct pcc_acpi*) ;
 int FUNC_9 (int *,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct pcc_acpi *VAR_10)
{
 int VAR_11, VAR_12;

 VAR_10->input_dev = FUNC_5();
 if (!VAR_10->input_dev) {
  FUNC_0((VAR_0,
      "Couldn't allocate input device for hotkey"));
  return -VAR_4;
 }

 VAR_10->input_dev->evbit[0] = FUNC_2(VAR_5);

 VAR_10->input_dev->name = VAR_1;
 VAR_10->input_dev->phys = VAR_2;
 VAR_10->input_dev->id.bustype = VAR_3;
 VAR_10->input_dev->id.vendor = 0x0001;
 VAR_10->input_dev->id.product = 0x0001;
 VAR_10->input_dev->id.version = 0x0100;
 VAR_10->input_dev->getkeycode = VAR_8;
 VAR_10->input_dev->setkeycode = VAR_9;


 FUNC_9(VAR_10->keymap, VAR_7, sizeof(VAR_10->keymap));

 for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_10->keymap); VAR_11++)
  FUNC_4(VAR_10->keymap[VAR_11], VAR_10->input_dev->keybit);
 FUNC_3(VAR_6, VAR_10->input_dev->keybit);

 FUNC_8(VAR_10->input_dev, VAR_10);

 VAR_12 = FUNC_7(VAR_10->input_dev);
 if (VAR_12 < 0)
  FUNC_6(VAR_10->input_dev);

 return VAR_12;
}
