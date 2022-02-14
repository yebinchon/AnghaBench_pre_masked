
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cper_sec_mem_err {int validation_bits; size_t error_type; int target_id; int responder_id; int requestor_id; int bit_pos; int column; int row; int device; int bank; int module; int card; int node; int physical_addr_mask; int physical_addr; int error_status; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char** VAR_15 ;
 int FUNC_1 (char*,char const*,size_t,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_16, const struct cper_sec_mem_err *VAR_17)
{
 if (VAR_17->validation_bits & VAR_5)
  FUNC_1("%s""error_status: 0x%016llx\n", VAR_16, VAR_17->error_status);
 if (VAR_17->validation_bits & VAR_9)
  FUNC_1("%s""physical_address: 0x%016llx\n",
         VAR_16, VAR_17->physical_addr);
 if (VAR_17->validation_bits & VAR_10)
  FUNC_1("%s""physical_address_mask: 0x%016llx\n",
         VAR_16, VAR_17->physical_addr_mask);
 if (VAR_17->validation_bits & VAR_8)
  FUNC_1("%s""node: %d\n", VAR_16, VAR_17->node);
 if (VAR_17->validation_bits & VAR_2)
  FUNC_1("%s""card: %d\n", VAR_16, VAR_17->card);
 if (VAR_17->validation_bits & VAR_7)
  FUNC_1("%s""module: %d\n", VAR_16, VAR_17->module);
 if (VAR_17->validation_bits & VAR_0)
  FUNC_1("%s""bank: %d\n", VAR_16, VAR_17->bank);
 if (VAR_17->validation_bits & VAR_4)
  FUNC_1("%s""device: %d\n", VAR_16, VAR_17->device);
 if (VAR_17->validation_bits & VAR_13)
  FUNC_1("%s""row: %d\n", VAR_16, VAR_17->row);
 if (VAR_17->validation_bits & VAR_3)
  FUNC_1("%s""column: %d\n", VAR_16, VAR_17->column);
 if (VAR_17->validation_bits & VAR_1)
  FUNC_1("%s""bit_position: %d\n", VAR_16, VAR_17->bit_pos);
 if (VAR_17->validation_bits & VAR_11)
  FUNC_1("%s""requestor_id: 0x%016llx\n", VAR_16, VAR_17->requestor_id);
 if (VAR_17->validation_bits & VAR_12)
  FUNC_1("%s""responder_id: 0x%016llx\n", VAR_16, VAR_17->responder_id);
 if (VAR_17->validation_bits & VAR_14)
  FUNC_1("%s""target_id: 0x%016llx\n", VAR_16, VAR_17->target_id);
 if (VAR_17->validation_bits & VAR_6) {
  u8 VAR_18 = VAR_17->error_type;
  FUNC_1("%s""error_type: %d, %s\n", VAR_16, VAR_18,
         VAR_18 < FUNC_0(VAR_15) ?
         VAR_15[VAR_18] : "unknown");
 }
}
