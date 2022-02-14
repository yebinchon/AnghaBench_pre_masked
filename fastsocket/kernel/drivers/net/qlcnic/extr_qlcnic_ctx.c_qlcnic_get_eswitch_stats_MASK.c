
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct qlcnic_adapter {TYPE_2__* npars; TYPE_1__* ahw; } ;
struct __qlcnic_esw_statistics {size_t context_id; void* numbytes; void* local_frames; void* errors; void* dropped_frames; void* broadcast_frames; void* multicast_frames; void* unicast_frames; int version; int size; } ;
struct TYPE_4__ {size_t const phy_port; int pci_func; } ;
struct TYPE_3__ {scalar_t__ op_mode; size_t act_pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct __qlcnic_esw_statistics*,int ,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,int ,size_t const,struct __qlcnic_esw_statistics*) ;

int FUNC_3(struct qlcnic_adapter *VAR_4, const u8 VAR_5,
  const u8 VAR_6, struct __qlcnic_esw_statistics *VAR_7) {

 struct __qlcnic_esw_statistics VAR_8;
 u8 VAR_9;
 int VAR_10 = -VAR_0;

 if (VAR_7 == ((void*)0))
  return -VAR_1;
 if (VAR_4->ahw->op_mode != VAR_2)
  return -VAR_0;
 if (VAR_4->npars == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_7, 0, sizeof(u64));
 VAR_7->unicast_frames = VAR_3;
 VAR_7->multicast_frames = VAR_3;
 VAR_7->broadcast_frames = VAR_3;
 VAR_7->dropped_frames = VAR_3;
 VAR_7->errors = VAR_3;
 VAR_7->local_frames = VAR_3;
 VAR_7->numbytes = VAR_3;
 VAR_7->context_id = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_4->ahw->act_pci_func; VAR_9++) {
  if (VAR_4->npars[VAR_9].phy_port != VAR_5)
   continue;

  FUNC_1(&VAR_8, 0, sizeof(struct __qlcnic_esw_statistics));
  if (FUNC_2(VAR_4, VAR_4->npars[VAR_9].pci_func,
       VAR_6, &VAR_8))
   continue;

  VAR_7->size = VAR_8.size;
  VAR_7->version = VAR_8.version;
  FUNC_0(VAR_7->unicast_frames,
      VAR_8.unicast_frames);
  FUNC_0(VAR_7->multicast_frames,
      VAR_8.multicast_frames);
  FUNC_0(VAR_7->broadcast_frames,
      VAR_8.broadcast_frames);
  FUNC_0(VAR_7->dropped_frames,
      VAR_8.dropped_frames);
  FUNC_0(VAR_7->errors,
      VAR_8.errors);
  FUNC_0(VAR_7->local_frames,
      VAR_8.local_frames);
  FUNC_0(VAR_7->numbytes,
      VAR_8.numbytes);
  VAR_10 = 0;
 }
 return VAR_10;
}
