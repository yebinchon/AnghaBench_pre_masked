
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned char generation; int lock; TYPE_3__* rom; } ;
struct hpsb_host {TYPE_4__ csr; TYPE_2__* driver; } ;
typedef int quadlet_t ;
struct TYPE_7__ {int bus_info_data; TYPE_1__* cache_head; } ;
struct TYPE_6__ {int (* set_hw_config_rom ) (struct hpsb_host*,int ) ;} ;
struct TYPE_5__ {size_t size; size_t len; int data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct hpsb_host*,int ) ;

int FUNC_5(struct hpsb_host *VAR_0, const quadlet_t *VAR_1,
 size_t VAR_2, unsigned char VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0("hpsb_update_config_rom() is deprecated");

        FUNC_2(&VAR_0->csr.lock, VAR_4);
 if (VAR_3 != VAR_0->csr.generation)
                VAR_5 = -1;
 else if (VAR_2 > VAR_0->csr.rom->cache_head->size)
  VAR_5 = -2;
        else {


  FUNC_1(VAR_0->csr.rom->cache_head->data, VAR_1, VAR_2);
  VAR_0->csr.rom->cache_head->len = VAR_2;

  if (VAR_0->driver->set_hw_config_rom)
   VAR_0->driver->set_hw_config_rom(VAR_0, VAR_0->csr.rom->bus_info_data);


  VAR_0->csr.generation++;
  if (VAR_0->csr.generation > 0xf || VAR_0->csr.generation < 2)
   VAR_0->csr.generation = 2;
  VAR_5=0;
        }
        FUNC_3(&VAR_0->csr.lock, VAR_4);
        return VAR_5;
}
