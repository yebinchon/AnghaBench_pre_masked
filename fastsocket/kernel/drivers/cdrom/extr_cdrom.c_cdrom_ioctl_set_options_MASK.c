
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int options; } ;


 unsigned long VAR_0 ;



 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_3,
  unsigned long VAR_4)
{
 FUNC_1(VAR_1, "entering CDROM_SET_OPTIONS\n");





 switch (VAR_4) {
 case 128:
 case 130:
  break;
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  break;
 case 0:
  return VAR_3->options;

 default:
  if (!FUNC_0(VAR_4))
   return -VAR_2;
 }
 VAR_3->options |= (int) VAR_4;
 return VAR_3->options;
}
