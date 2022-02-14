
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long mode; } ;
struct mgsl_struct {TYPE_1__ params; scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct mgsl_struct*) ;
 int FUNC_2 (struct mgsl_struct*) ;
 int FUNC_3 (struct mgsl_struct*,int ) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;
 int FUNC_5 (struct mgsl_struct*,int ) ;
 int FUNC_6 (struct mgsl_struct*,int ,int) ;
 int FUNC_7 (struct mgsl_struct*,int ) ;
 int FUNC_8 (struct mgsl_struct*,int ) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int) ;
 int FUNC_11 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_12( struct mgsl_struct *VAR_15 )
{
 int VAR_16;
 unsigned long VAR_17 = VAR_15->params.mode;

 VAR_15->params.mode = VAR_7;

 FUNC_1( VAR_15 );

 FUNC_11( VAR_15 );
 FUNC_10( VAR_15, 1 );


 FUNC_6( VAR_15, VAR_11, 0 );
 FUNC_6( VAR_15, VAR_4, 0x0100 );


 FUNC_7( VAR_15, VAR_9 );
 FUNC_3(VAR_15,VAR_6);




 FUNC_6( VAR_15, VAR_12, 2 );
 FUNC_7( VAR_15, VAR_10 );


 FUNC_9(VAR_15,VAR_14);
 FUNC_0(0,VAR_15->io_base + VAR_5);


 FUNC_8( VAR_15, VAR_13 );
 FUNC_4(VAR_15,VAR_6);


 for (VAR_16=0 ; VAR_16<1000 ; VAR_16++)
  if (FUNC_5( VAR_15, VAR_8 ) & (VAR_3 + VAR_2 + VAR_1 + VAR_0))
   break;


 FUNC_10(VAR_15, 0);

 FUNC_2(VAR_15);

 VAR_15->params.mode = VAR_17;

}
