
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ mode; int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{


 if ((VAR_6.mode == VAR_3)
   && (FUNC_1(VAR_2) & VAR_0)) {
  unsigned VAR_11;


  VAR_11 = FUNC_0(FUNC_1(VAR_1));
  do {
   VAR_7 += VAR_8;
   VAR_6.event_handler(&VAR_6);
   VAR_11--;
  } while (VAR_11);

  return VAR_4;
 }

 return VAR_5;
}
