
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct parisc_device_id {scalar_t__ sversion; scalar_t__ hversion_rev; scalar_t__ hversion; scalar_t__ hw_type; } ;
struct parisc_device {struct parisc_device_id id; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int) ;
 struct parisc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, char *VAR_1)
{
 const struct parisc_device *VAR_2 = FUNC_1(VAR_0);
 const struct parisc_device_id *VAR_3 = &VAR_2->id;

 return FUNC_0(VAR_1, "parisc:t%02Xhv%04Xrev%02Xsv%08X\n",
  (u8)VAR_3->hw_type, (u16)VAR_3->hversion, (u8)VAR_3->hversion_rev,
  (u32)VAR_3->sversion);
}
