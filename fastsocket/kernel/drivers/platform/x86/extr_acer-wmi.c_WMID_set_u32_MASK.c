
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_interface {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int mailled; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static acpi_status FUNC_4(u32 VAR_8, u32 VAR_9, struct wmi_interface *VAR_10)
{
 u32 VAR_11 = 0;
 char VAR_12;

 switch (VAR_9) {
 case 131:
  if (VAR_8 > VAR_6)
   return VAR_4;
  VAR_11 = VAR_1;
  break;
 case 128:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_11 = VAR_3;
  break;
 case 132:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_11 = VAR_0;
  break;
 case 129:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_11 = VAR_2;
  break;
 case 130:
  if (VAR_8 > 1)
   return VAR_4;
  if (VAR_7->mailled == 1) {
   VAR_12 = VAR_8 ? 0x92 : 0x93;
   FUNC_2();
   FUNC_1(&VAR_12, 0x1059);
   FUNC_3();
   return 0;
  }
  break;
 default:
  return VAR_5;
 }
 return FUNC_0(VAR_11, (u32)VAR_8, ((void*)0));
}
