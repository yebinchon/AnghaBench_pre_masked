
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int* setup_packet; } ;
struct r8a66597_td {int pipe; struct urb* urb; } ;
struct r8a66597 {int dummy; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct r8a66597*,int ) ;
 int FUNC_1 (struct r8a66597*,int ) ;
 int FUNC_2 (struct r8a66597*,int ) ;
 int FUNC_3 (struct r8a66597*,int ) ;
 int FUNC_4 (struct r8a66597*,int ) ;
 int FUNC_5 (struct r8a66597*,int ,int ) ;
 int FUNC_6 (struct r8a66597*,int ,int ) ;
 int FUNC_7 (struct r8a66597*,int,int,int ) ;
 int FUNC_8 (struct r8a66597*,int ,int) ;
 int FUNC_9 (struct r8a66597*,int ,int,int ) ;
 int FUNC_10 (struct r8a66597*,int,int ) ;

__attribute__((used)) static void FUNC_11(struct r8a66597 *VAR_11,
      struct r8a66597_td *VAR_12)
{
 struct urb *VAR_13 = VAR_12->urb;

 FUNC_8(VAR_11, VAR_12->pipe, 1);
 FUNC_4(VAR_11, VAR_12->pipe);

 if (VAR_13->setup_packet[0] & VAR_10) {
  FUNC_6(VAR_11, VAR_9, VAR_7);
  FUNC_7(VAR_11, VAR_8, VAR_8 | VAR_6, VAR_5);
  FUNC_9(VAR_11, VAR_5, VAR_6, 0);
  FUNC_10(VAR_11, ~VAR_1, VAR_2);
  FUNC_10(VAR_11, VAR_0 | VAR_3, VAR_4);
  FUNC_0(VAR_11, 0);
 } else {
  FUNC_5(VAR_11, VAR_9, VAR_7);
  FUNC_7(VAR_11, 0, VAR_8 | VAR_6, VAR_5);
  FUNC_9(VAR_11, VAR_5, VAR_6, 0);
  FUNC_10(VAR_11, VAR_0, VAR_4);
  FUNC_2(VAR_11, 0);
 }
 FUNC_1(VAR_11, 0);
 FUNC_3(VAR_11, VAR_12->pipe);
}
