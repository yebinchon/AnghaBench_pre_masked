
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t secondary_status; char* control; } ;
struct TYPE_7__ {size_t lower; char* upper; } ;
struct TYPE_6__ {int slot; size_t vendor_id; char* device_id; int * class_code; int secondary_bus; int function; int device; int bus; int segment; } ;
struct TYPE_5__ {size_t major; char* minor; } ;
struct cper_sec_pcie {int validation_bits; size_t port_type; size_t command; char* status; TYPE_4__ bridge; TYPE_3__ serial_number; TYPE_2__ device_id; TYPE_1__ version; } ;
struct acpi_hest_generic_data {int dummy; } ;
typedef int __u8 ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 int FUNC_1 (char*,char const*,size_t,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_8, const struct cper_sec_pcie *VAR_9,
       const struct acpi_hest_generic_data *VAR_10)
{
 if (VAR_9->validation_bits & VAR_4)
  FUNC_1("%s""port_type: %d, %s\n", VAR_8, VAR_9->port_type,
         VAR_9->port_type < FUNC_0(VAR_7) ?
         VAR_7[VAR_9->port_type] : "unknown");
 if (VAR_9->validation_bits & VAR_6)
  FUNC_1("%s""version: %d.%d\n", VAR_8,
         VAR_9->version.major, VAR_9->version.minor);
 if (VAR_9->validation_bits & VAR_2)
  FUNC_1("%s""command: 0x%04x, status: 0x%04x\n", VAR_8,
         VAR_9->command, VAR_9->status);
 if (VAR_9->validation_bits & VAR_3) {
  const __u8 *VAR_11;
  FUNC_1("%s""device_id: %04x:%02x:%02x.%x\n", VAR_8,
         VAR_9->device_id.segment, VAR_9->device_id.bus,
         VAR_9->device_id.device, VAR_9->device_id.function);
  FUNC_1("%s""slot: %d\n", VAR_8,
         VAR_9->device_id.slot >> VAR_0);
  FUNC_1("%s""secondary_bus: 0x%02x\n", VAR_8,
         VAR_9->device_id.secondary_bus);
  FUNC_1("%s""vendor_id: 0x%04x, device_id: 0x%04x\n", VAR_8,
         VAR_9->device_id.vendor_id, VAR_9->device_id.device_id);
  VAR_11 = VAR_9->device_id.class_code;
  FUNC_1("%s""class_code: %02x%02x%02x\n", VAR_8, VAR_11[0], VAR_11[1], VAR_11[2]);
 }
 if (VAR_9->validation_bits & VAR_5)
  FUNC_1("%s""serial number: 0x%04x, 0x%04x\n", VAR_8,
         VAR_9->serial_number.lower, VAR_9->serial_number.upper);
 if (VAR_9->validation_bits & VAR_1)
  FUNC_1(
 "%s""bridge: secondary_status: 0x%04x, control: 0x%04x\n",
 VAR_8, VAR_9->bridge.secondary_status, VAR_9->bridge.control);
}
