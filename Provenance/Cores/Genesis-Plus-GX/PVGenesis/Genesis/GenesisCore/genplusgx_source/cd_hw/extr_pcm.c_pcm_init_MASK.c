
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int blip_t ;
struct TYPE_2__ {int frame_rate; int sample_rate; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_0 (int *,double,int ) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1(blip_t* VAR_6, blip_t* VAR_7)
{

  double VAR_8 = VAR_4.frame_rate ? (VAR_2 * (VAR_5 ? 313 : 262) * VAR_4.frame_rate) : VAR_1;



  VAR_3[0] = VAR_6;
  VAR_3[1] = VAR_7;
  FUNC_0(VAR_6, VAR_8 / VAR_0, VAR_4.sample_rate);
  FUNC_0(VAR_7, VAR_8 / VAR_0, VAR_4.sample_rate);
}
