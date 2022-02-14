
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;struct asd_sas_phy** sas_phy; } ;
struct done_list_struct {int* status_block; } ;
struct asd_sas_phy {int sas_prim_lock; int sas_prim; } ;
struct asd_phy {int dummy; } ;
struct asd_ha_struct {struct asd_phy* phys; struct sas_ha_struct sas_ha; } ;
struct asd_ascb {struct asd_ha_struct* ha; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct asd_ha_struct*,struct asd_phy*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct asd_sas_phy*,int ) ;
 int FUNC_6 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static void FUNC_7(struct asd_ascb *VAR_2,
           struct done_list_struct *VAR_3,
           int VAR_4)
{
 unsigned long VAR_5;
 struct sas_ha_struct *VAR_6 = &VAR_2->ha->sas_ha;
 struct asd_sas_phy *VAR_7 = VAR_6->sas_phy[VAR_4];
 struct asd_ha_struct *VAR_8 = VAR_2->ha;
 struct asd_phy *VAR_9 = &VAR_8->phys[VAR_4];
 u8 VAR_10 = VAR_3->status_block[1];
 u32 VAR_11 = VAR_3->status_block[2] << ((VAR_10 & 3)*8);

 VAR_10 &= ~3;
 switch (VAR_10) {
 case 130:
  switch (VAR_11) {
  case 135:
  case 134:
  case 133:
  case 132:
   FUNC_0("phy%d: BROADCAST change received:%d\n",
        VAR_4, VAR_11);
   FUNC_3(&VAR_7->sas_prim_lock, VAR_5);
   VAR_7->sas_prim = FUNC_2(VAR_11);
   FUNC_4(&VAR_7->sas_prim_lock, VAR_5);
   VAR_6->notify_port_event(VAR_7,VAR_0);
   break;

  case 128:
   FUNC_0("phy%d: unknown BREAK\n", VAR_4);
   break;

  default:
   FUNC_0("phy%d: primitive reg:0x%x, cont:0x%04x\n",
        VAR_4, VAR_10, VAR_11);
   break;
  }
  break;
 case 129:
  switch (VAR_11) {
  case 131:
   FUNC_0("phy%d: HARD_RESET primitive rcvd\n",
        VAR_4);


   FUNC_1(VAR_8, VAR_9);
   VAR_6->notify_port_event(VAR_7, VAR_1);
   break;

  default:
   FUNC_0("phy%d: primitive reg:0x%x, cont:0x%04x\n",
        VAR_4, VAR_10, VAR_11);
   break;
  }
  break;
 default:
  FUNC_0("unknown primitive register:0x%x\n",
       VAR_3->status_block[1]);
  break;
 }
}
