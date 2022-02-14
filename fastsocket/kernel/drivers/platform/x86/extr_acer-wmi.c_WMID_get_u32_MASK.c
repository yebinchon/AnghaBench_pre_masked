
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_interface {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int mailled; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int,int*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static acpi_status FUNC_3(u32 *VAR_6, u32 VAR_7,
struct wmi_interface *VAR_8)
{
 acpi_status VAR_9;
 u8 VAR_10;
 u32 VAR_11, VAR_12 = 0;

 switch (VAR_7) {
 case 128:
  VAR_12 = VAR_3;
  break;
 case 132:
  VAR_12 = VAR_0;
  break;
 case 131:
  VAR_12 = VAR_1;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 case 130:
  if (VAR_5->mailled == 1) {
   FUNC_2(0x9f, &VAR_10);
   *VAR_6 = VAR_10 & 0x1;
   return 0;
  }
 default:
  return VAR_4;
 }
 VAR_9 = FUNC_1(VAR_12, 0, &VAR_11);

 if (FUNC_0(VAR_9))
  *VAR_6 = (u8)VAR_11;

 return VAR_9;
}
