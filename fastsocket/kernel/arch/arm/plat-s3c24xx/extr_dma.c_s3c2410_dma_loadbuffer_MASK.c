
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int load_state; unsigned long dcon; unsigned long xfer_unit; int * next; int addr_reg; } ;
struct s3c2410_dma_buf {int data; unsigned long size; int * next; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct s3c2410_dma_chan*,int ,unsigned long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,struct s3c2410_dma_buf*,...) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct s3c2410_dma_chan *VAR_6,
         struct s3c2410_dma_buf *VAR_7)
{
 unsigned long VAR_8;

 if (VAR_7 == ((void*)0)) {
  FUNC_1("buffer is NULL\n");
  return -VAR_0;
 }

 FUNC_2("s3c2410_chan_loadbuffer: loading buff %p (0x%08lx,0x%06x)\n",
   VAR_7, (unsigned long)VAR_7->data, VAR_7->size);



 if (VAR_6->load_state == VAR_3) {
  FUNC_1("load_state is S3C2410_DMALOAD_1LOADED\n");
 }

 if (VAR_6->load_state == VAR_4) {
  FUNC_1("state is S3C2410_DMALOAD_1LOADED_1RUNNING\n");
 }





 if (VAR_6->load_state == 128) {
  FUNC_2("load_state is none, checking for noreload (next=%p)\n",
    VAR_7->next);
  VAR_8 = (VAR_7->next == ((void*)0)) ? VAR_2 : 0;
 } else {

  VAR_8 = VAR_1;
 }

 if ((VAR_7->data & 0xf0000000) != 0x30000000) {
  FUNC_1("dmaload: buffer is %p\n", (void *)VAR_7->data);
 }

 FUNC_3(VAR_7->data, VAR_6->addr_reg);

 FUNC_0(VAR_6, VAR_5,
    VAR_6->dcon | VAR_8 | (VAR_7->size/VAR_6->xfer_unit));

 VAR_6->next = VAR_7->next;



 switch (VAR_6->load_state) {
 case 128:
  VAR_6->load_state = VAR_3;
  break;

 case 129:
  VAR_6->load_state = VAR_4;
  break;

 default:
  FUNC_1("dmaload: unknown state %d in loadbuffer\n",
   VAR_6->load_state);
  break;
 }

 return 0;
}
