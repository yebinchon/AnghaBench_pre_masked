
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int class; scalar_t__ hdr_type; TYPE_2__* resource; TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_3__ {int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct pci_dev *VAR_4)
{
 int VAR_5, VAR_6 = VAR_4->class >> 8;

 if ((VAR_6 == VAR_2 ||
      VAR_6 == VAR_1) &&
  (VAR_4->hdr_type == VAR_3) &&
  (VAR_4->bus->parent == ((void*)0))) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4->resource[VAR_5].start = 0;
   VAR_4->resource[VAR_5].end = 0;
   VAR_4->resource[VAR_5].flags = 0;
  }
 }
}
