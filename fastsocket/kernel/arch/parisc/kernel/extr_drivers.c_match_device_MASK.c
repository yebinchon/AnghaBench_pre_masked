
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parisc_driver {struct parisc_device_id* id_table; } ;
struct parisc_device_id {scalar_t__ sversion; scalar_t__ hw_type; scalar_t__ hversion; } ;
struct TYPE_2__ {scalar_t__ sversion; scalar_t__ hw_type; scalar_t__ hversion; } ;
struct parisc_device {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct parisc_driver *VAR_3, struct parisc_device *VAR_4)
{
 const struct parisc_device_id *VAR_5;

 for (VAR_5 = VAR_3->id_table; VAR_5->sversion; VAR_5++) {
  if ((VAR_5->sversion != VAR_2) &&
      (VAR_5->sversion != VAR_4->id.sversion))
   continue;

  if ((VAR_5->hw_type != VAR_1) &&
      (VAR_5->hw_type != VAR_4->id.hw_type))
   continue;

  if ((VAR_5->hversion != VAR_0) &&
      (VAR_5->hversion != VAR_4->id.hversion))
   continue;

  return 1;
 }
 return 0;
}
