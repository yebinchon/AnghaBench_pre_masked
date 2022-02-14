
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_7,
  unsigned long VAR_8)
{
 FUNC_1(VAR_3, "entering CDROMEJECT_SW\n");

 if (!FUNC_0(VAR_0))
  return -VAR_5;
 if (VAR_6)
  return -VAR_4;

 VAR_7->options &= ~(VAR_1 | VAR_2);
 if (VAR_8)
  VAR_7->options |= VAR_1 | VAR_2;
 return 0;
}
