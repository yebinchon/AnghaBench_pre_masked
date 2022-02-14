
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int clock_speed; } ;
struct slgt_info {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*,int) ;
 int FUNC_2 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_3 (struct slgt_info*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct slgt_info *VAR_4)
{

 FUNC_2(VAR_4, VAR_3, (unsigned short)(FUNC_0(VAR_4, VAR_3) | VAR_0));

 if (VAR_4->params.mode != VAR_2) {
  FUNC_3(VAR_4, VAR_1, 0x49);


  if (VAR_4->params.clock_speed)
   FUNC_1(VAR_4, VAR_4->params.clock_speed);
  else
   FUNC_1(VAR_4, 3686400);
 }
}
