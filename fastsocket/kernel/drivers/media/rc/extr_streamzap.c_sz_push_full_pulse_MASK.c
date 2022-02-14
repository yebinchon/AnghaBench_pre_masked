
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long tv_sec; scalar_t__ tv_usec; } ;
struct streamzap_ir {int idle; scalar_t__ sum; TYPE_3__ signal_last; TYPE_3__ signal_start; } ;
struct TYPE_5__ {int pulse; int duration; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct streamzap_ir*,TYPE_1__) ;

__attribute__((used)) static void FUNC_4(struct streamzap_ir *VAR_3,
          unsigned char VAR_4)
{
 FUNC_0(VAR_2);

 if (VAR_3->idle) {
  long VAR_5;

  VAR_3->signal_last = VAR_3->signal_start;
  FUNC_2(&VAR_3->signal_start);

  VAR_5 = VAR_3->signal_start.tv_sec - VAR_3->signal_last.tv_sec;
  VAR_2.pulse = 0;
  if (VAR_5 > 15) {

   VAR_2.duration = VAR_0;
  } else {
   VAR_2.duration = (int)(VAR_5 * 1000000 +
    VAR_3->signal_start.tv_usec -
    VAR_3->signal_last.tv_usec);
   VAR_2.duration -= VAR_3->sum;
   VAR_2.duration = FUNC_1(VAR_2.duration);
   VAR_2.duration &= VAR_0;
  }
  FUNC_3(VAR_3, VAR_2);

  VAR_3->idle = 0;
  VAR_3->sum = 0;
 }

 VAR_2.pulse = 1;
 VAR_2.duration = ((int) VAR_4) * VAR_1;
 VAR_2.duration += VAR_1 / 2;
 VAR_3->sum += VAR_2.duration;
 VAR_2.duration = FUNC_1(VAR_2.duration);
 VAR_2.duration &= VAR_0;
 FUNC_3(VAR_3, VAR_2);
}
