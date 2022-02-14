
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct urb {scalar_t__ actual_length; int pipe; } ;
struct r8a66597_td {int pipenum; TYPE_1__* pipe; struct urb* urb; } ;
struct r8a66597 {int dummy; } ;
struct TYPE_5__ {int fifoctr; scalar_t__ pipetre; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_1 (struct r8a66597*,int) ;
 int FUNC_2 (struct r8a66597*,struct urb*,int) ;
 int FUNC_3 (struct r8a66597*,struct r8a66597_td*) ;
 int FUNC_4 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_5 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_6 (struct r8a66597*,int ,scalar_t__) ;
 int FUNC_7 (struct r8a66597*,int ,int ) ;
 int FUNC_8 (struct r8a66597*,int,int,int ) ;
 int FUNC_9 (struct r8a66597*,TYPE_1__*,int) ;
 int FUNC_10 (struct r8a66597*,int ) ;
 int FUNC_11 (struct r8a66597*,int ,int,int ) ;
 int FUNC_12 (struct r8a66597*,int,int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct r8a66597 *VAR_10,
     struct r8a66597_td *VAR_11)
{
 u16 VAR_12;
 struct urb *VAR_13 = VAR_11->urb;

 if (FUNC_14(VAR_13->pipe)) {
  FUNC_5(VAR_10, VAR_11->pipe);
  FUNC_7(VAR_10, VAR_8, VAR_5);
  FUNC_8(VAR_10, VAR_7, VAR_7 | VAR_4, VAR_3);
  FUNC_11(VAR_10, VAR_3, VAR_4, 0);
  if (VAR_13->actual_length == 0) {
   FUNC_9(VAR_10, VAR_11->pipe, 1);
   FUNC_12(VAR_10, VAR_0, VAR_2);
  }
 } else {
  if (VAR_13->actual_length == 0)
   FUNC_3(VAR_10, VAR_11);
  if (VAR_11->pipe->pipetre)
   FUNC_6(VAR_10, VAR_9, VAR_11->pipe->pipetre);
 }
 FUNC_12(VAR_10, ~(1 << VAR_11->pipenum), VAR_1);

 FUNC_0(VAR_10, VAR_11->pipe);
 VAR_12 = FUNC_10(VAR_10, VAR_11->pipe->fifoctr);
 if (FUNC_13((VAR_12 & VAR_6) == 0))
  FUNC_2(VAR_10, VAR_13, VAR_11->pipenum);
 else
  FUNC_1(VAR_10, VAR_11->pipenum);
 FUNC_4(VAR_10, VAR_11->pipe);
}
