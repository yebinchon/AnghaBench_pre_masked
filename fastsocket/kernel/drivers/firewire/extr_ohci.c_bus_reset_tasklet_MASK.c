
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct fw_ohci {int node_id; int* self_id_buffer; int generation; int request_generation; TYPE_1__ card; int lock; int next_header; int * config_rom; int * next_config_rom; int next_config_rom_bus; int config_rom_bus; scalar_t__ bus_reset_packet_quirk; int at_response_ctx; int at_request_ctx; int * self_id_cpu; } ;
typedef int dma_addr_t ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,void*,int ) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int,int,int*) ;
 int FUNC_8 (struct fw_ohci*,int ) ;
 int FUNC_9 (struct fw_ohci*,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_13)
{
 struct fw_ohci *VAR_14 = (struct fw_ohci *)VAR_13;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 unsigned long VAR_21;
 void *VAR_22 = ((void*)0);
 dma_addr_t VAR_23 = 0;

 VAR_18 = FUNC_8(VAR_14, VAR_4);
 if (!(VAR_18 & VAR_6)) {
  FUNC_6("node ID not valid, new bus reset in progress\n");
  return;
 }
 if ((VAR_18 & VAR_7) == 63) {
  FUNC_6("malconfigured bus\n");
  return;
 }
 VAR_14->node_id = VAR_18 & (VAR_5 |
          VAR_7);

 VAR_18 = FUNC_8(VAR_14, VAR_10);
 if (VAR_18 & VAR_11) {
  FUNC_6("inconsistent self IDs\n");
  return;
 }






 VAR_15 = (VAR_18 >> 3) & 0xff;
 if (VAR_15 == 0 || VAR_15 > 252) {
  FUNC_6("inconsistent self IDs\n");
  return;
 }
 VAR_19 = (FUNC_1(VAR_14->self_id_cpu[0]) >> 16) & 0xff;
 FUNC_10();

 for (VAR_16 = 1, VAR_17 = 0; VAR_17 < VAR_15; VAR_16 += 2, VAR_17++) {
  if (VAR_14->self_id_cpu[VAR_16] != ~VAR_14->self_id_cpu[VAR_16 + 1]) {
   FUNC_6("inconsistent self IDs\n");
   return;
  }
  VAR_14->self_id_buffer[VAR_17] =
    FUNC_1(VAR_14->self_id_cpu[VAR_16]);
 }
 FUNC_10();
 VAR_20 = (FUNC_8(VAR_14, VAR_10) >> 16) & 0xff;
 if (VAR_20 != VAR_19) {
  FUNC_6("recursive bus reset detected, "
     "discarding self ids\n");
  return;
 }


 FUNC_11(&VAR_14->lock, VAR_21);

 VAR_14->generation = VAR_19;
 FUNC_2(&VAR_14->at_request_ctx);
 FUNC_2(&VAR_14->at_response_ctx);
 FUNC_9(VAR_14, VAR_3, VAR_12);

 if (VAR_14->bus_reset_packet_quirk)
  VAR_14->request_generation = VAR_19;
 if (VAR_14->next_config_rom != ((void*)0)) {
  if (VAR_14->next_config_rom != VAR_14->config_rom) {
   VAR_22 = VAR_14->config_rom;
   VAR_23 = VAR_14->config_rom_bus;
  }
  VAR_14->config_rom = VAR_14->next_config_rom;
  VAR_14->config_rom_bus = VAR_14->next_config_rom_bus;
  VAR_14->next_config_rom = ((void*)0);







  FUNC_9(VAR_14, VAR_1,
     FUNC_0(VAR_14->config_rom[2]));
  VAR_14->config_rom[0] = FUNC_3(VAR_14->next_header);
  FUNC_9(VAR_14, VAR_2, VAR_14->next_header);
 }






 FUNC_12(&VAR_14->lock, VAR_21);

 if (VAR_22)
  FUNC_4(VAR_14->card.device, VAR_0,
      VAR_22, VAR_23);

 FUNC_7(VAR_14->node_id, VAR_19,
      VAR_15, VAR_14->self_id_buffer);

 FUNC_5(&VAR_14->card, VAR_14->node_id, VAR_19,
     VAR_15, VAR_14->self_id_buffer);
}
