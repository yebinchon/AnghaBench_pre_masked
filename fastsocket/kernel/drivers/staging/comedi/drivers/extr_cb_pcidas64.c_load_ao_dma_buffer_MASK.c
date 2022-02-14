
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {TYPE_3__* write_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_6__ {int async; } ;
struct TYPE_5__ {unsigned int ao_dma_index; unsigned int ao_count; TYPE_1__* ao_dma_desc; int * ao_buffer; int * ao_buffer_bus_addr; } ;
struct TYPE_4__ {void* next; void* transfer_size; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (TYPE_3__*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (void*) ;
 unsigned int FUNC_5 (struct comedi_device*) ;
 TYPE_2__* FUNC_6 (struct comedi_device*) ;

__attribute__((used)) static unsigned int FUNC_7(struct comedi_device *VAR_5,
           const struct comedi_cmd *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_6(VAR_5)->ao_dma_index;
 VAR_9 = FUNC_5(VAR_5);

 FUNC_0("attempting to load ao buffer %i (0x%x)\n", VAR_8,
      FUNC_6(VAR_5)->ao_buffer_bus_addr[VAR_8]);

 VAR_7 = FUNC_2(VAR_5->write_subdev->async);
 if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 if (VAR_6->stop_src == VAR_3 && VAR_7 > FUNC_6(VAR_5)->ao_count)
  VAR_7 = FUNC_6(VAR_5)->ao_count;
 VAR_7 -= VAR_7 % VAR_4;

 if (VAR_7 == 0)
  return 0;

 FUNC_0("loading %i bytes\n", VAR_7);

 VAR_7 = FUNC_1(VAR_5->write_subdev,
            FUNC_6(VAR_5)->
            ao_buffer[VAR_8],
            VAR_7);
 FUNC_6(VAR_5)->ao_dma_desc[VAR_8].transfer_size =
     FUNC_3(VAR_7);

 VAR_10 = FUNC_4(FUNC_6(VAR_5)->ao_dma_desc[VAR_8].next);
 VAR_10 |= VAR_2;
 FUNC_6(VAR_5)->ao_dma_desc[VAR_8].next = FUNC_3(VAR_10);


 VAR_10 = FUNC_4(FUNC_6(VAR_5)->ao_dma_desc[VAR_9].next);
 VAR_10 &= ~VAR_2;
 FUNC_6(VAR_5)->ao_dma_desc[VAR_9].next = FUNC_3(VAR_10);

 FUNC_6(VAR_5)->ao_dma_index = (VAR_8 + 1) % VAR_0;
 FUNC_6(VAR_5)->ao_count -= VAR_7;

 return VAR_7;
}
