
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * parent; int * type; int * bus; } ;
struct TYPE_6__ {int attrs; } ;
struct fw_unit {TYPE_1__ device; TYPE_2__ attribute_group; scalar_t__ directory; } ;
struct fw_device {int device; int * config_rom; } ;
struct fw_csr_iterator {scalar_t__ p; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (struct fw_csr_iterator*,int *) ;
 scalar_t__ FUNC_6 (struct fw_csr_iterator*,int*,int*) ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_9 (struct fw_unit*) ;
 struct fw_unit* FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct fw_device *VAR_7)
{
 struct fw_csr_iterator VAR_8;
 struct fw_unit *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = 0;
 FUNC_5(&VAR_8, &VAR_7->config_rom[5]);
 while (FUNC_6(&VAR_8, &VAR_10, &VAR_11)) {
  if (VAR_10 != (VAR_1 | VAR_0))
   continue;





  VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_2);
  if (VAR_9 == ((void*)0)) {
   FUNC_7("failed to allocate memory for unit\n");
   continue;
  }

  VAR_9->directory = VAR_8.p + VAR_11 - 1;
  VAR_9->device.bus = &VAR_4;
  VAR_9->device.type = &VAR_6;
  VAR_9->device.parent = &VAR_7->device;
  FUNC_3(&VAR_9->device, "%s.%d", FUNC_2(&VAR_7->device), VAR_12++);

  FUNC_1(FUNC_0(VAR_9->attribute_group.attrs) <
    FUNC_0(VAR_5) +
    FUNC_0(VAR_3));
  FUNC_8(&VAR_9->device,
     VAR_5,
     &VAR_9->attribute_group);

  if (FUNC_4(&VAR_9->device) < 0)
   goto skip_unit;

  continue;

 skip_unit:
  FUNC_9(VAR_9);
 }
}
