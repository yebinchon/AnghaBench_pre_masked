
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx18_av_state {scalar_t__ aud_input; int audclk_freq; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int,int) ;
 int FUNC_2 (struct cx18*,int,int) ;
 int FUNC_3 (struct cx18*,int,int,int,int) ;
 int FUNC_4 (struct cx18*,int ) ;

void FUNC_5(struct cx18 *VAR_1)
{
 struct cx18_av_state *VAR_2 = &VAR_1->av_state;
 u8 VAR_3;


 VAR_3 = FUNC_0(VAR_1, 0x803) & ~0x10;
 FUNC_3(VAR_1, 0x803, VAR_3, VAR_3, 0x1f);


 VAR_3 = FUNC_0(VAR_1, 0x810) | 0x01;
 FUNC_3(VAR_1, 0x810, VAR_3, VAR_3, 0x0f);


 FUNC_1(VAR_1, 0x8d3, 0x1f);

 if (VAR_2->aud_input <= VAR_0) {

  FUNC_2(VAR_1, 0x8d0, 0x01011012);




 } else {

  FUNC_2(VAR_1, 0x8d0, 0x1f063870);
 }

 FUNC_4(VAR_1, VAR_2->audclk_freq);


 VAR_3 = FUNC_0(VAR_1, 0x810) & ~0x01;
 FUNC_3(VAR_1, 0x810, VAR_3, VAR_3, 0x0f);

 if (VAR_2->aud_input > VAR_0) {


  VAR_3 = FUNC_0(VAR_1, 0x803) | 0x10;
  FUNC_3(VAR_1, 0x803, VAR_3, VAR_3, 0x1f);
 }
}
