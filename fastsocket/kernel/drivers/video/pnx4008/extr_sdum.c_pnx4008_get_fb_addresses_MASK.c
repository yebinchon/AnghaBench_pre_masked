
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {scalar_t__ lcd_phys_start; scalar_t__ lcd_virt_start; } ;
struct TYPE_4__ {int fb_type; int fb_length; scalar_t__ addr_offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_1(int VAR_2, void **VAR_3,
        dma_addr_t *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7 = -1;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  if (VAR_1[VAR_6].fb_type == VAR_2) {
   *VAR_3 = (void *)(VAR_0.lcd_virt_start +
     VAR_1[VAR_6].addr_offset);
   *VAR_4 =
       VAR_0.lcd_phys_start + VAR_1[VAR_6].addr_offset;
   *VAR_5 = VAR_1[VAR_6].fb_length;
   VAR_7 = 0;
   break;
  }

 return VAR_7;
}
