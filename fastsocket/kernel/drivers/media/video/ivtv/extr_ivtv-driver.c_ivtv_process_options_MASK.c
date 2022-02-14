
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* kilobytes; int cardtype; int i2c_clock_period; int newi2c; int radio; int tuner; } ;
struct ivtv {size_t instance; scalar_t__ std; int has_cx23415; TYPE_2__* card; int card_i2c; int card_name; int v4l2_cap; TYPE_3__* pdev; TYPE_1__ options; } ;
struct TYPE_8__ {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct TYPE_7__ {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; int vendor; } ;
struct TYPE_6__ {int i2c; int name; int v4l2_capabilities; TYPE_4__* pci_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int* VAR_24 ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ivtv*) ;
 int VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void FUNC_5(struct ivtv *VAR_29)
{
 const char *VAR_30;
 int VAR_31, VAR_32;

 VAR_29->options.kilobytes[VAR_6] = VAR_20 * 1024;
 VAR_29->options.kilobytes[VAR_9] = VAR_23 * 1024;
 VAR_29->options.kilobytes[VAR_8] = VAR_22 * 1024;
 VAR_29->options.kilobytes[VAR_7] = VAR_21;
 VAR_29->options.kilobytes[VAR_2] = VAR_17 * 1024;
 VAR_29->options.kilobytes[VAR_4] = VAR_19 * 1024;
 VAR_29->options.kilobytes[VAR_3] = VAR_18;
 VAR_29->options.cardtype = VAR_16[VAR_29->instance];
 VAR_29->options.tuner = VAR_27[VAR_29->instance];
 VAR_29->options.radio = VAR_26[VAR_29->instance];

 VAR_29->options.i2c_clock_period = VAR_24[VAR_29->instance];
 if (VAR_29->options.i2c_clock_period == -1)
  VAR_29->options.i2c_clock_period = VAR_5;
 else if (VAR_29->options.i2c_clock_period < 10)
  VAR_29->options.i2c_clock_period = 10;
 else if (VAR_29->options.i2c_clock_period > 4500)
  VAR_29->options.i2c_clock_period = 4500;

 VAR_29->options.newi2c = VAR_25;
 if (VAR_28 < -1 || VAR_28 > 1) {
  FUNC_2("Invalid tunertype argument, will autodetect instead\n");
  VAR_28 = -1;
 }
 VAR_29->std = FUNC_4(VAR_29);
 if (VAR_29->std == 0 && VAR_28 >= 0)
  VAR_29->std = VAR_28 ? VAR_15 : (VAR_14 & ~VAR_15);
 VAR_29->has_cx23415 = (VAR_29->pdev->device == VAR_13);
 VAR_30 = VAR_29->has_cx23415 ? "cx23415" : "cx23416";
 if (VAR_29->options.cardtype == -1) {
  FUNC_1("Ignore card (detected %s based chip)\n", VAR_30);
  return;
 }
 if ((VAR_29->card = FUNC_3(VAR_29->options.cardtype - 1))) {
  FUNC_1("User specified %s card (detected %s based chip)\n",
    VAR_29->card->name, VAR_30);
 } else if (VAR_29->options.cardtype != 0) {
  FUNC_0("Unknown user specified type, trying to autodetect card\n");
 }
 if (VAR_29->card == ((void*)0)) {
  if (VAR_29->pdev->subsystem_vendor == VAR_10 ||
      VAR_29->pdev->subsystem_vendor == VAR_11 ||
      VAR_29->pdev->subsystem_vendor == VAR_12) {
   VAR_29->card = FUNC_3(VAR_29->has_cx23415 ? VAR_1 : VAR_0);
   FUNC_1("Autodetected Hauppauge card (%s based)\n",
     VAR_30);
  }
 }
 if (VAR_29->card == ((void*)0)) {
  for (VAR_31 = 0; (VAR_29->card = FUNC_3(VAR_31)); VAR_31++) {
   if (VAR_29->card->pci_list == ((void*)0))
    continue;
   for (VAR_32 = 0; VAR_29->card->pci_list[VAR_32].device; VAR_32++) {
    if (VAR_29->pdev->device !=
        VAR_29->card->pci_list[VAR_32].device)
     continue;
    if (VAR_29->pdev->subsystem_vendor !=
        VAR_29->card->pci_list[VAR_32].subsystem_vendor)
     continue;
    if (VAR_29->pdev->subsystem_device !=
        VAR_29->card->pci_list[VAR_32].subsystem_device)
     continue;
    FUNC_1("Autodetected %s card (%s based)\n",
      VAR_29->card->name, VAR_30);
    goto done;
   }
  }
 }
done:

 if (VAR_29->card == ((void*)0)) {
  VAR_29->card = FUNC_3(VAR_0);
  FUNC_0("Unknown card: vendor/device: [%04x:%04x]\n",
       VAR_29->pdev->vendor, VAR_29->pdev->device);
  FUNC_0("              subsystem vendor/device: [%04x:%04x]\n",
       VAR_29->pdev->subsystem_vendor, VAR_29->pdev->subsystem_device);
  FUNC_0("              %s based\n", VAR_30);
  FUNC_0("Defaulting to %s card\n", VAR_29->card->name);
  FUNC_0("Please mail the vendor/device and subsystem vendor/device IDs and what kind of\n");
  FUNC_0("card you have to the ivtv-devel mailinglist (www.ivtvdriver.org)\n");
  FUNC_0("Prefix your subject line with [UNKNOWN IVTV CARD].\n");
 }
 VAR_29->v4l2_cap = VAR_29->card->v4l2_capabilities;
 VAR_29->card_name = VAR_29->card->name;
 VAR_29->card_i2c = VAR_29->card->i2c;
}
