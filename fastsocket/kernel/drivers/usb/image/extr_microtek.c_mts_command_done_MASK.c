
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; } ;
struct TYPE_4__ {TYPE_1__* srb; int data_length; scalar_t__ data; int data_pipe; } ;
struct TYPE_3__ {int result; scalar_t__* cmnd; scalar_t__ sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7( struct urb *VAR_7 )

{
 int VAR_8 = VAR_7->status;
 FUNC_1();

 if ( FUNC_6(VAR_8) ) {
         if (VAR_8 == -VAR_2) {

   FUNC_0();
   VAR_4->srb->result = VAR_0<<16;
                } else {

   FUNC_0();

          VAR_4->srb->result = VAR_1<<16;
                }
  FUNC_4(VAR_7);

  return;
 }

 if (VAR_4->srb->cmnd[0] == VAR_3) {
  FUNC_3(VAR_7,
       VAR_4->data_pipe,
       VAR_4->srb->sense_buffer,
       VAR_4->data_length,
       VAR_5);
 } else { if ( VAR_4->data ) {
   FUNC_3(VAR_7,
        VAR_4->data_pipe,
        VAR_4->data,
        VAR_4->data_length,
        FUNC_5(VAR_4->srb) > 1 ?
                VAR_6 : VAR_5);
  } else {
   FUNC_2(VAR_7);
  }
 }

 return;
}
