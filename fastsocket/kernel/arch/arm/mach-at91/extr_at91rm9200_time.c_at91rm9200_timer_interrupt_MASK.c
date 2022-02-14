
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 u32 VAR_12 = FUNC_0(VAR_3) & VAR_8;


 if (VAR_12 & VAR_0) {
  VAR_7.event_handler(&VAR_7);
  return VAR_4;
 }


 if (VAR_12 & VAR_2) {
  u32 VAR_13 = FUNC_1();

  while (((VAR_13 - VAR_9) & VAR_1) >= VAR_6) {
   VAR_9 += VAR_6;
   VAR_7.event_handler(&VAR_7);
  }
  return VAR_4;
 }


 return VAR_5;
}
