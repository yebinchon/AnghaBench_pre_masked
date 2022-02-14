
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ivtv_stream {scalar_t__ type; int s_flags; } ;
struct ivtv {int irqmask; int last_vsync_field; int irq_rr_idx; int dma_reg_lock; int irq_work_queue; int irq_work_queues; int i_flags; struct ivtv_stream* streams; int eos_waitq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (struct ivtv_stream*) ;
 int FUNC_5 (struct ivtv_stream*) ;
 int FUNC_6 (struct ivtv*) ;
 int FUNC_7 (struct ivtv*) ;
 int FUNC_8 (struct ivtv*) ;
 int FUNC_9 (struct ivtv*) ;
 int FUNC_10 (struct ivtv*) ;
 int FUNC_11 (struct ivtv*) ;
 int FUNC_12 (struct ivtv*) ;
 int FUNC_13 (struct ivtv*) ;
 int FUNC_14 (struct ivtv*) ;
 int FUNC_15 (struct ivtv*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int,int ) ;

irqreturn_t FUNC_25(int VAR_28, void *VAR_29)
{
 struct ivtv *VAR_30 = (struct ivtv *)VAR_29;
 u32 VAR_31;
 u32 VAR_32;
 int VAR_33;
 u8 VAR_34 = 0;

 FUNC_19(&VAR_30->dma_reg_lock);

 VAR_32 = FUNC_17(VAR_27);

 VAR_31 = ~VAR_30->irqmask & VAR_32;


 if (VAR_31) FUNC_24(VAR_31, VAR_27);

 if (0 == VAR_31) {



  if (~VAR_30->irqmask & VAR_15) {

   if ((VAR_30->last_vsync_field & 1) !=
       (FUNC_17(VAR_26) & 1)) {

    FUNC_3("VSync interrupt missed %d\n",
           FUNC_17(VAR_26) >> 16);
    VAR_34 = 1;
   }
  }

  if (!VAR_34) {

   FUNC_20(&VAR_30->dma_reg_lock);
   return VAR_1;
  }
 }



 if (VAR_31 & ~0xff6d0400)
  FUNC_0("======= valid IRQ bits: 0x%08x ======\n", VAR_31);

 if (VAR_31 & VAR_13) {
  FUNC_0("DEC DMA COMPLETE\n");
 }

 if (VAR_31 & VAR_18) {
  FUNC_9(VAR_30);
 }

 if (VAR_31 & VAR_19) {
  FUNC_10(VAR_30);
 }

 if (VAR_31 & VAR_21) {
  FUNC_11(VAR_30);
 }

 if (VAR_31 & VAR_17) {
  FUNC_8(VAR_30);
 }

 if (VAR_31 & VAR_22) {
  FUNC_12(VAR_30);
 }

 if (VAR_31 & VAR_23) {
  FUNC_13(VAR_30);
 }

 if (VAR_31 & VAR_14) {
  FUNC_7(VAR_30);
 }

 if (VAR_31 & VAR_20) {
  FUNC_2("ENC EOS\n");
  FUNC_18(VAR_5, &VAR_30->i_flags);
  FUNC_23(&VAR_30->eos_waitq);
 }

 if (VAR_31 & VAR_12) {
  FUNC_6(VAR_30);
 }


 if (~VAR_30->irqmask & VAR_15) {
  FUNC_14(VAR_30);
 }

 if (VAR_31 & VAR_24) {
  FUNC_2("VIM RST\n");

 }

 if (VAR_31 & VAR_11) {
  FUNC_1("Stereo mode changed\n");
 }

 if ((VAR_31 & VAR_16) && !FUNC_22(VAR_4, &VAR_30->i_flags)) {
  VAR_30->irq_rr_idx++;
  for (VAR_33 = 0; VAR_33 < VAR_25; VAR_33++) {
   int VAR_35 = (VAR_33 + VAR_30->irq_rr_idx) % VAR_25;
   struct ivtv_stream *VAR_36 = &VAR_30->streams[VAR_35];

   if (!FUNC_21(VAR_9, &VAR_36->s_flags))
    continue;
   if (VAR_36->type >= VAR_2)
    FUNC_4(VAR_36);
   else
    FUNC_5(VAR_36);
   break;
  }

  if (VAR_33 == VAR_25 &&
      FUNC_22(VAR_8, &VAR_30->i_flags))
   FUNC_15(VAR_30);
 }

 if ((VAR_31 & VAR_16) && !FUNC_22(VAR_7, &VAR_30->i_flags)) {
  VAR_30->irq_rr_idx++;
  for (VAR_33 = 0; VAR_33 < VAR_25; VAR_33++) {
   int VAR_37 = (VAR_33 + VAR_30->irq_rr_idx) % VAR_25;
   struct ivtv_stream *VAR_38 = &VAR_30->streams[VAR_37];

   if (!FUNC_21(VAR_10, &VAR_38->s_flags))
    continue;
   if (VAR_38->type == VAR_3 || VAR_38->type < VAR_2)
    FUNC_5(VAR_38);
   break;
  }
 }

 if (FUNC_21(VAR_6, &VAR_30->i_flags)) {
  FUNC_16(VAR_30->irq_work_queues, &VAR_30->irq_work_queue);
 }

 FUNC_20(&VAR_30->dma_reg_lock);





 return VAR_34 ? VAR_1 : VAR_0;
}
