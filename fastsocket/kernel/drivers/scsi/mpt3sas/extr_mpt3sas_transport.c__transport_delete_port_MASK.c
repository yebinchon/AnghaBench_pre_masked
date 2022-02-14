
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int device_type; scalar_t__ sas_address; } ;
struct _sas_port {TYPE_2__* port; TYPE_1__ remote_identify; } ;
struct MPT3SAS_ADAPTER {int logging_level; } ;
typedef enum sas_device_type { ____Placeholder_sas_device_type } sas_device_type ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,char*,unsigned long long) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_5,
 struct _sas_port *VAR_6)
{
 u64 VAR_7 = VAR_6->remote_identify.sas_address;
 enum sas_device_type VAR_8 =
     VAR_6->remote_identify.device_type;

 FUNC_0(VAR_0, &VAR_6->port->dev,
     "remove: sas_addr(0x%016llx)\n",
     (unsigned long long) VAR_7);

 VAR_5->logging_level |= VAR_1;
 if (VAR_8 == VAR_3)
  FUNC_1(VAR_5, VAR_7);
 else if (VAR_8 == VAR_2 ||
     VAR_8 == VAR_4)
  FUNC_2(VAR_5, VAR_7);
 VAR_5->logging_level &= ~VAR_1;
}
