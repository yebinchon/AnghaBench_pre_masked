
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {unsigned int capacity; } ;
struct cdrom_changer_info {TYPE_1__* slots; } ;
struct TYPE_2__ {int change; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,struct cdrom_changer_info*) ;
 int FUNC_3 (struct cdrom_changer_info*) ;
 struct cdrom_changer_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct cdrom_device_info*,int) ;

__attribute__((used)) static int FUNC_6(struct cdrom_device_info *VAR_8,
  unsigned long VAR_9)
{
 struct cdrom_changer_info *VAR_10;
 int VAR_11;

 FUNC_1(VAR_3, "entering CDROM_MEDIA_CHANGED\n");

 if (!FUNC_0(VAR_0))
  return -VAR_6;


 if (!FUNC_0(VAR_1) || VAR_9 == VAR_2)
  return FUNC_5(VAR_8, 1);

 if ((unsigned int)VAR_9 >= VAR_8->capacity)
  return -VAR_4;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_7);
 if (!VAR_10)
  return -VAR_5;

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 if (!VAR_11)
  VAR_11 = VAR_10->slots[VAR_9].change;
 FUNC_3(VAR_10);
 return VAR_11;
}
