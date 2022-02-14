
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ loopback; int clock_speed; } ;
struct mgsl_struct {scalar_t__ bus_type; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int ,int ) ;
 int FUNC_2 (struct mgsl_struct*,int ) ;
 int FUNC_3 (struct mgsl_struct*,int) ;
 int FUNC_4 (struct mgsl_struct*) ;
 int FUNC_5 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_6( struct mgsl_struct *VAR_4 )
{
 FUNC_4( VAR_4 );
 FUNC_5( VAR_4 );

 if (VAR_4->bus_type == VAR_2) {


  FUNC_1(VAR_4, VAR_3, (u16)((FUNC_0(VAR_4, VAR_3) | VAR_1) & ~VAR_0));
 }

 FUNC_2(VAR_4, VAR_4->params.clock_speed);

 if (VAR_4->params.loopback)
  FUNC_3(VAR_4,1);

}
