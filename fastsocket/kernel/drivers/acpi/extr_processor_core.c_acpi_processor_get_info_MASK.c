
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int value; } ;
struct TYPE_8__ {unsigned long long proc_id; int pblk_length; scalar_t__ pblk_address; } ;
union acpi_object {TYPE_4__ integer; TYPE_2__ processor; int member_0; } ;
struct TYPE_9__ {scalar_t__ address; int duty_width; int duty_offset; } ;
struct TYPE_7__ {int bm_control; } ;
struct acpi_processor {unsigned long long acpi_id; int id; int handle; TYPE_3__ throttling; scalar_t__ pblk; TYPE_1__ flags; } ;
struct acpi_device {int dev; } ;
struct acpi_buffer {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
struct TYPE_12__ {int duty_width; int duty_offset; scalar_t__ pm2_control_length; scalar_t__ pm2_control_block; } ;
struct TYPE_11__ {int smp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 struct acpi_processor* FUNC_5 (struct acpi_device*) ;
 int FUNC_6 (int ,int ,int *,unsigned long long*) ;
 int FUNC_7 (int ,char*,int *,struct acpi_buffer*) ;
 TYPE_6__ VAR_6 ;
 int FUNC_8 (struct acpi_processor*) ;
 int FUNC_9 (struct acpi_processor*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int *,char*,int) ;
 TYPE_5__ VAR_7 ;
 int FUNC_12 (int ,int,unsigned long long) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,int,char*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct acpi_device *VAR_8)
{
 acpi_status VAR_9 = 0;
 union acpi_object VAR_10 = { 0 };
 struct acpi_buffer VAR_11 = { sizeof(union acpi_object), &VAR_10 };
 struct acpi_processor *VAR_12;
 int VAR_13, VAR_14 = 0;
 static int VAR_15;

 VAR_12 = FUNC_5(VAR_8);
 if (!VAR_12)
  return -VAR_2;

 if (FUNC_13() > 1)
  VAR_7.smp = VAR_5;

 FUNC_8(VAR_12);





 if (VAR_6.pm2_control_block && VAR_6.pm2_control_length) {
  VAR_12->flags.bm_control = 1;
  FUNC_0((VAR_0,
      "Bus mastering arbitration control present\n"));
 } else
  FUNC_0((VAR_0,
      "No bus mastering arbitration control\n"));

 if (!FUNC_16(FUNC_4(VAR_8), VAR_1)) {

  VAR_9 = FUNC_7(VAR_12->handle, ((void*)0), ((void*)0), &VAR_11);
  if (FUNC_1(VAR_9)) {
   FUNC_11(&VAR_8->dev,
    "Failed to evaluate processor object (0x%x)\n",
    VAR_9);
   return -VAR_3;
  }






  VAR_12->acpi_id = VAR_10.processor.proc_id;
 } else {




  unsigned long long VAR_16;
  VAR_9 = FUNC_6(VAR_12->handle, VAR_4,
      ((void*)0), &VAR_16);
  if (FUNC_1(VAR_9)) {
   FUNC_11(&VAR_8->dev,
    "Failed to evaluate processor _UID (0x%x)\n",
    VAR_9);
   return -VAR_3;
  }
  VAR_14 = 1;
  VAR_12->acpi_id = VAR_16;
 }
 VAR_13 = FUNC_12(VAR_12->handle, VAR_14, VAR_12->acpi_id);


 if (!VAR_15 && (VAR_13 == -1) &&
     (FUNC_13() == 1)) {
  VAR_13 = 0;
 }

 VAR_15 = 1;

 VAR_12->id = VAR_13;






 if (VAR_12->id == -1) {
  if (FUNC_1(FUNC_9(VAR_12)))
   return -VAR_3;
 }
 FUNC_15(FUNC_3(VAR_8), "CPU%X", VAR_12->id);
 FUNC_0((VAR_0, "Processor [%d:%d]\n", VAR_12->id,
     VAR_12->acpi_id));

 if (!VAR_10.processor.pblk_address)
  FUNC_0((VAR_0, "No PBLK (NULL address)\n"));
 else if (VAR_10.processor.pblk_length != 6)
  FUNC_11(&VAR_8->dev, "Invalid PBLK length [%d]\n",
       VAR_10.processor.pblk_length);
 else {
  VAR_12->throttling.address = VAR_10.processor.pblk_address;
  VAR_12->throttling.duty_offset = VAR_6.duty_offset;
  VAR_12->throttling.duty_width = VAR_6.duty_width;

  VAR_12->pblk = VAR_10.processor.pblk_address;
  FUNC_14(VAR_12->throttling.address, 6, "ACPI CPU throttle");
 }






 VAR_9 = FUNC_7(VAR_12->handle, "_SUN", ((void*)0), &VAR_11);
 if (FUNC_2(VAR_9))
  FUNC_10(VAR_12->id, VAR_10.integer.value);

 return 0;
}
