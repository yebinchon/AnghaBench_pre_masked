
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rewindaftersend; } ;
struct connectdata {TYPE_1__ bits; } ;
struct SingleRequest {int keepon; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (struct connectdata*) ;
 int VAR_1 ;

CURLcode FUNC_3(struct connectdata *VAR_2,
                           struct SingleRequest *VAR_3)
{
  VAR_3->keepon &= ~VAR_1;


  FUNC_0(VAR_2);
  FUNC_1(VAR_2);

  if(VAR_2->bits.rewindaftersend) {
    CURLcode VAR_4 = FUNC_2(VAR_2);
    if(VAR_4)
      return VAR_4;
  }
  return VAR_0;
}
