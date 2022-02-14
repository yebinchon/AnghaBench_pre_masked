
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mptsas_enclosure {int enclosure_logical_id; } ;
struct mptsas_devinfo {int slot; int device_info; int sas_address; int id; int channel; int handle_enclosure; } ;
typedef int MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mptsas_enclosure*,int ,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,struct mptsas_devinfo*,int,int) ;
 int FUNC_3 (int *,struct mptsas_enclosure*,int,int ) ;

__attribute__((used)) static void
FUNC_4(MPT_ADAPTER *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct mptsas_devinfo VAR_7;
 struct mptsas_enclosure VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, &VAR_7,
     (VAR_0 <<
      VAR_1),
     (VAR_5 << 8) + VAR_6);
 if (VAR_9)
  return;

 FUNC_0(&VAR_8, 0, sizeof(struct mptsas_enclosure));
 FUNC_3(VAR_4, &VAR_8,
     (VAR_2 <<
      VAR_3),
      VAR_7.handle_enclosure);

 FUNC_1(VAR_4, VAR_7.channel,
     VAR_7.id, VAR_7.sas_address, VAR_7.device_info,
     VAR_7.slot, VAR_8.enclosure_logical_id);
}
