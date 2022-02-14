
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct urb {scalar_t__ actual_length; int transfer_buffer_length; int pipe; } ;
struct r8a66597_td {int pipenum; TYPE_1__* pipe; int maxpacket; struct urb* urb; } ;
struct r8a66597 {int dummy; } ;
struct TYPE_4__ {scalar_t__ pipetre; scalar_t__ pipetrn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct r8a66597*,int) ;
 int FUNC_2 (struct r8a66597*,struct urb*,int) ;
 int FUNC_3 (struct r8a66597*,struct r8a66597_td*) ;
 int FUNC_4 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_5 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_6 (struct r8a66597*,int ,int ) ;
 int FUNC_7 (struct r8a66597*,int ,scalar_t__) ;
 int FUNC_8 (struct r8a66597*,int ,int,int ) ;
 int FUNC_9 (struct r8a66597*,TYPE_1__*,int) ;
 int FUNC_10 (struct r8a66597*,int ,int,int ) ;
 int FUNC_11 (struct r8a66597*,int,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct r8a66597 *VAR_10,
    struct r8a66597_td *VAR_11)
{
 struct urb *VAR_12 = VAR_11->urb;

 if (FUNC_12(VAR_12->pipe)) {
  FUNC_6(VAR_10, VAR_7, VAR_5);
  FUNC_8(VAR_10, 0, VAR_6 | VAR_4, VAR_3);
  FUNC_10(VAR_10, VAR_3, VAR_4, 0);
  if (VAR_12->actual_length == 0) {
   FUNC_9(VAR_10, VAR_11->pipe, 1);
   FUNC_11(VAR_10, VAR_0, VAR_2);
  }
  FUNC_1(VAR_10, VAR_11->pipenum);
  FUNC_4(VAR_10, VAR_11->pipe);
  FUNC_2(VAR_10, VAR_12, VAR_11->pipenum);
 } else {
  if (VAR_12->actual_length == 0) {
   FUNC_1(VAR_10, VAR_11->pipenum);
   FUNC_3(VAR_10, VAR_11);
   FUNC_5(VAR_10, VAR_11->pipe);
   FUNC_11(VAR_10, ~(1 << VAR_11->pipenum), VAR_1);

   if (VAR_11->pipe->pipetre) {
    FUNC_11(VAR_10, VAR_8,
      VAR_11->pipe->pipetre);
    FUNC_11(VAR_10,
      FUNC_0
        (VAR_12->transfer_buffer_length,
         VAR_11->maxpacket),
      VAR_11->pipe->pipetrn);
    FUNC_7(VAR_10, VAR_9,
      VAR_11->pipe->pipetre);
   }

   FUNC_4(VAR_10, VAR_11->pipe);
   FUNC_2(VAR_10, VAR_12, VAR_11->pipenum);
  }
 }
}
