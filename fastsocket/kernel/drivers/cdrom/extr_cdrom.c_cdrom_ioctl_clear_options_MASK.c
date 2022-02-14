
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int options; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_1,
  unsigned long VAR_2)
{
 FUNC_0(VAR_0, "entering CDROM_CLEAR_OPTIONS\n");

 VAR_1->options &= ~(int) VAR_2;
 return VAR_1->options;
}
