
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lun {scalar_t__ info_valid; scalar_t__ sense_data_info; int unit_attention_data; int sense_data; scalar_t__ prevent_medium_removal; } ;
struct fsg_dev {scalar_t__ state; int intreq_busy; unsigned int exception_req_tag; int nluns; unsigned int ep0_req_tag; int lock; int ep0; int bulk_in; int atomic_bitflags; struct lun* luns; int new_config; struct fsg_buffhd* buffhds; struct fsg_buffhd* next_buffhd_to_drain; struct fsg_buffhd* next_buffhd_to_fill; int intr_in; scalar_t__ intr_in_enabled; int bulk_out; scalar_t__ bulk_out_enabled; scalar_t__ bulk_in_enabled; int intreq; } ;
struct fsg_buffhd {int state; scalar_t__ outreq_busy; scalar_t__ inreq_busy; int outreq; int inreq; } ;
typedef int siginfo_t ;
typedef enum fsg_state { ____Placeholder_fsg_state } fsg_state ;
struct TYPE_3__ {int blocked; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_dev*,char*) ;




 void* VAR_1 ;


 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (struct fsg_dev*,int ) ;
 int FUNC_3 (struct fsg_dev*,int ) ;
 int FUNC_4 (struct fsg_dev*) ;
 int FUNC_5 (struct fsg_dev*,int ) ;
 int FUNC_6 (struct fsg_dev*) ;
 int FUNC_7 (struct fsg_dev*,scalar_t__) ;
 int FUNC_8 (struct fsg_dev*) ;
 scalar_t__ FUNC_9 (struct fsg_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct fsg_dev *VAR_8)
{
 siginfo_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct fsg_buffhd *VAR_13;
 enum fsg_state VAR_14;
 u8 VAR_15;
 struct lun *VAR_16;
 unsigned int VAR_17;
 int VAR_18;



 for (;;) {
  VAR_10 = FUNC_1(VAR_7, &VAR_7->blocked, &VAR_9);
  if (!VAR_10)
   break;
  if (VAR_10 != VAR_5) {
   if (VAR_8->state < 131)
    FUNC_0(VAR_8, "Main thread exiting on signal\n");
   FUNC_7(VAR_8, 131);
  }
 }


 if (VAR_8->intreq_busy)
  FUNC_16(VAR_8->intr_in, VAR_8->intreq);
 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  VAR_13 = &VAR_8->buffhds[VAR_11];
  if (VAR_13->inreq_busy)
   FUNC_16(VAR_8->bulk_in, VAR_13->inreq);
  if (VAR_13->outreq_busy)
   FUNC_16(VAR_8->bulk_out, VAR_13->outreq);
 }


 for (;;) {
  VAR_12 = VAR_8->intreq_busy;
  for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
   VAR_13 = &VAR_8->buffhds[VAR_11];
   VAR_12 += VAR_13->inreq_busy + VAR_13->outreq_busy;
  }
  if (VAR_12 == 0)
   break;
  if (FUNC_9(VAR_8))
   return;
 }


 if (VAR_8->bulk_in_enabled)
  FUNC_17(VAR_8->bulk_in);
 if (VAR_8->bulk_out_enabled)
  FUNC_17(VAR_8->bulk_out);
 if (VAR_8->intr_in_enabled)
  FUNC_17(VAR_8->intr_in);



 FUNC_10(&VAR_8->lock);

 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  VAR_13 = &VAR_8->buffhds[VAR_11];
  VAR_13->state = VAR_0;
 }
 VAR_8->next_buffhd_to_fill = VAR_8->next_buffhd_to_drain =
   &VAR_8->buffhds[0];

 VAR_17 = VAR_8->exception_req_tag;
 VAR_15 = VAR_8->new_config;
 VAR_14 = VAR_8->state;

 if (VAR_14 == 134)
  VAR_8->state = VAR_2;
 else {
  for (VAR_11 = 0; VAR_11 < VAR_8->nluns; ++VAR_11) {
   VAR_16 = &VAR_8->luns[VAR_11];
   VAR_16->prevent_medium_removal = 0;
   VAR_16->sense_data = VAR_16->unit_attention_data =
     VAR_6;
   VAR_16->sense_data_info = 0;
   VAR_16->info_valid = 0;
  }
  VAR_8->state = VAR_1;
 }
 FUNC_11(&VAR_8->lock);


 switch (VAR_14) {
 default:
  break;

 case 134:
  FUNC_8(VAR_8);
  FUNC_10(&VAR_8->lock);
  if (VAR_8->state == VAR_2)
   VAR_8->state = VAR_1;
  FUNC_11(&VAR_8->lock);
  break;

 case 129:



  if (FUNC_12(VAR_3, &VAR_8->atomic_bitflags))
   FUNC_15(VAR_8->bulk_in);

  if (FUNC_13()) {
   if (VAR_8->ep0_req_tag == VAR_17)
    FUNC_4(VAR_8);

  } else if (FUNC_14())
   FUNC_8(VAR_8);






  break;

 case 130:
  VAR_18 = FUNC_3(VAR_8, 0);
  if (VAR_8->ep0_req_tag != VAR_17)
   break;
  if (VAR_18 != 0)
   FUNC_5(VAR_8, VAR_8->ep0);
  else
   FUNC_4(VAR_8);
  break;

 case 133:
  VAR_18 = FUNC_2(VAR_8, VAR_15);
  if (VAR_8->ep0_req_tag != VAR_17)
   break;
  if (VAR_18 != 0)
   FUNC_5(VAR_8, VAR_8->ep0);
  else
   FUNC_4(VAR_8);
  break;

 case 132:
  FUNC_6(VAR_8);
  FUNC_2(VAR_8, 0);
  break;

 case 131:
 case 128:
  FUNC_2(VAR_8, 0);
  FUNC_10(&VAR_8->lock);
  VAR_8->state = 128;
  FUNC_11(&VAR_8->lock);
  break;
 }
}
