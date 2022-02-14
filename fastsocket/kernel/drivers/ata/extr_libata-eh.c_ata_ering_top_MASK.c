
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_ering_entry {scalar_t__ err_mask; } ;
struct ata_ering {size_t cursor; struct ata_ering_entry* ring; } ;



__attribute__((used)) static struct ata_ering_entry *FUNC_0(struct ata_ering *VAR_0)
{
 struct ata_ering_entry *VAR_1 = &VAR_0->ring[VAR_0->cursor];

 if (VAR_1->err_mask)
  return VAR_1;
 return ((void*)0);
}
