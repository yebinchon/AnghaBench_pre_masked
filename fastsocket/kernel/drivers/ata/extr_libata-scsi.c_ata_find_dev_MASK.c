
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ata_device* device; } ;
struct ata_port {int nr_pmp_links; TYPE_1__* pmp_link; TYPE_2__ link; } ;
struct ata_device {int dummy; } ;
struct TYPE_3__ {struct ata_device* device; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static struct ata_device *FUNC_3(struct ata_port *VAR_0, int VAR_1)
{
 if (!FUNC_2(VAR_0)) {
  if (FUNC_1(VAR_1 < FUNC_0(&VAR_0->link)))
   return &VAR_0->link.device[VAR_1];
 } else {
  if (FUNC_1(VAR_1 < VAR_0->nr_pmp_links))
   return &VAR_0->pmp_link[VAR_1].device[0];
 }

 return ((void*)0);
}
