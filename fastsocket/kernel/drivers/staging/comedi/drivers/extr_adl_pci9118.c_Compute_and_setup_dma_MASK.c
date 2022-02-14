
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int minor; } ;
struct TYPE_4__ {unsigned int* dmabuf_size; unsigned int ai_data_len; int ai_flags; int ai_n_realscanlen; int useeoshandle; int ai_scans; unsigned int* dmabuf_use_size; int ai_n_scanlen; int* dmabuf_panic_size; int* dmabuf_hw; scalar_t__ iobase_a; scalar_t__ dma_actbuf; int ai_neverending; } ;
struct TYPE_3__ {int half_fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,int ,unsigned int,...) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14;

 FUNC_0("adl_pci9118 EDBG: BGN: Compute_and_setup_dma()\n");
 VAR_12 = VAR_9->dmabuf_size[0];
 VAR_13 = VAR_9->dmabuf_size[1];
 FUNC_0("1 dmalen0=%d dmalen1=%d ai_data_len=%d\n", VAR_12, VAR_13,
  VAR_9->ai_data_len);

 if (VAR_12 > (VAR_9->ai_data_len)) {
  VAR_12 = VAR_9->ai_data_len & ~3L;
 }
 if (VAR_13 > (VAR_9->ai_data_len)) {
  VAR_13 = VAR_9->ai_data_len & ~3L;
 }
 FUNC_0("2 dmalen0=%d dmalen1=%d \n", VAR_12, VAR_13);


 if (VAR_9->ai_flags & VAR_8) {
  if (VAR_12 < (VAR_9->ai_n_realscanlen << 1)) {

   VAR_9->ai_flags &= (~VAR_8);
   FUNC_3
       ("comedi%d: WAR: DMA0 buf too short, cann't support TRIG_WAKE_EOS (%d<%d)\n",
        VAR_11->minor, VAR_12,
        VAR_9->ai_n_realscanlen << 1);
  } else {

   VAR_12 = VAR_9->ai_n_realscanlen << 1;
   FUNC_0
       ("21 dmalen0=%d ai_n_realscanlen=%d useeoshandle=%d\n",
        VAR_12, VAR_9->ai_n_realscanlen,
        VAR_9->useeoshandle);
   if (VAR_9->useeoshandle)
    VAR_12 += 2;
   if (VAR_12 < 4) {
    FUNC_3
        ("comedi%d: ERR: DMA0 buf len bug? (%d<4)\n",
         VAR_11->minor, VAR_12);
    VAR_12 = 4;
   }
  }
 }
 if (VAR_9->ai_flags & VAR_8) {
  if (VAR_13 < (VAR_9->ai_n_realscanlen << 1)) {

   VAR_9->ai_flags &= (~VAR_8);
   FUNC_3
       ("comedi%d: WAR: DMA1 buf too short, cann't support TRIG_WAKE_EOS (%d<%d)\n",
        VAR_11->minor, VAR_13,
        VAR_9->ai_n_realscanlen << 1);
  } else {

   VAR_13 = VAR_9->ai_n_realscanlen << 1;
   FUNC_0
       ("22 dmalen1=%d ai_n_realscanlen=%d useeoshandle=%d\n",
        VAR_13, VAR_9->ai_n_realscanlen,
        VAR_9->useeoshandle);
   if (VAR_9->useeoshandle)
    VAR_13 -= 2;
   if (VAR_13 < 4) {
    FUNC_3
        ("comedi%d: ERR: DMA1 buf len bug? (%d<4)\n",
         VAR_11->minor, VAR_13);
    VAR_13 = 4;
   }
  }
 }

 FUNC_0("3 dmalen0=%d dmalen1=%d \n", VAR_12, VAR_13);

 if (!(VAR_9->ai_flags & VAR_8)) {

  VAR_14 = VAR_12;
  VAR_12 =
      (VAR_12 / (VAR_9->ai_n_realscanlen << 1)) *
      (VAR_9->ai_n_realscanlen << 1);
  VAR_12 &= ~3L;
  if (!VAR_12)
   VAR_12 = VAR_14;
  VAR_14 = VAR_13;
  VAR_13 =
      (VAR_13 / (VAR_9->ai_n_realscanlen << 1)) *
      (VAR_9->ai_n_realscanlen << 1);
  VAR_13 &= ~3L;
  if (!VAR_13)
   VAR_13 = VAR_14;

  if (!VAR_9->ai_neverending) {

   if (VAR_12 >
       ((VAR_9->ai_n_realscanlen << 1) *
        VAR_9->ai_scans)) {
    FUNC_0
        ("3.0 ai_n_realscanlen=%d ai_scans=%d \n",
         VAR_9->ai_n_realscanlen,
         VAR_9->ai_scans);
    VAR_12 =
        (VAR_9->ai_n_realscanlen << 1) *
        VAR_9->ai_scans;
    FUNC_0("3.1 dmalen0=%d dmalen1=%d \n", VAR_12,
     VAR_13);
    VAR_12 &= ~3L;
   } else {
    if (VAR_13 >
        ((VAR_9->ai_n_realscanlen << 1) *
         VAR_9->ai_scans - VAR_12))
     VAR_13 =
         (VAR_9->ai_n_realscanlen << 1) *
         VAR_9->ai_scans - VAR_12;
    FUNC_0("3.2 dmalen0=%d dmalen1=%d \n", VAR_12,
     VAR_13);
    VAR_13 &= ~3L;
   }
  }
 }

 FUNC_0("4 dmalen0=%d dmalen1=%d \n", VAR_12, VAR_13);


 VAR_9->dma_actbuf = 0;
 VAR_9->dmabuf_use_size[0] = VAR_12;
 VAR_9->dmabuf_use_size[1] = VAR_13;

 FUNC_0("5 dmalen0=%d dmalen1=%d \n", VAR_12, VAR_13);
 FUNC_2(FUNC_1(VAR_9->iobase_a + VAR_3) & (~VAR_6), VAR_9->iobase_a + VAR_3);
 FUNC_2(VAR_9->dmabuf_hw[0], VAR_9->iobase_a + VAR_4);
 FUNC_2(VAR_9->dmabuf_use_size[0], VAR_9->iobase_a + VAR_5);

 FUNC_2(0x00000000 | VAR_1,
      VAR_9->iobase_a + VAR_2);


 FUNC_2(FUNC_1(VAR_9->iobase_a +
   VAR_3) | VAR_7 | VAR_0 |
      VAR_6, VAR_9->iobase_a + VAR_3);
 FUNC_2(FUNC_1(VAR_9->iobase_a + VAR_2) | VAR_6, VAR_9->iobase_a + VAR_2);

 FUNC_0("adl_pci9118 EDBG: END: Compute_and_setup_dma()\n");
 return 0;
}
