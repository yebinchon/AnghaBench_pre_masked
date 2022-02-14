
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{

 FUNC_2(VAR_6);


 if (VAR_7) {





  FUNC_5(&VAR_5);
  FUNC_3(0x0c, VAR_2);

  FUNC_0(VAR_3);
  FUNC_6(&VAR_5);
 }

 VAR_4->event_handler(VAR_4);


 if (VAR_1)
  FUNC_4(FUNC_1(0x61)| 0x80, 0x61);

 return VAR_0;
}
