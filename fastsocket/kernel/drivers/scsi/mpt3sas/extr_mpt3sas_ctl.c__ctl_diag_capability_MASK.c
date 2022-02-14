
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int IOCCapabilities; } ;
struct MPT3SAS_ADAPTER {TYPE_1__ facts; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8
FUNC_0(struct MPT3SAS_ADAPTER *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = 0;

 switch (VAR_4) {
 case 128:
  if (VAR_3->facts.IOCCapabilities &
      VAR_0)
   VAR_5 = 1;
  break;
 case 129:
  if (VAR_3->facts.IOCCapabilities &
      VAR_2)
   VAR_5 = 1;
  break;
 case 130:
  if (VAR_3->facts.IOCCapabilities &
      VAR_1)
   VAR_5 = 1;
 }

 return VAR_5;
}
