
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_8 (void)
{
 int VAR_8;

 FUNC_5 (VAR_3*2, VAR_6, VAR_0);



 FUNC_6 ();

 if (VAR_1) {
  FUNC_0();
 }
 else if ( VAR_2 ) {
  FUNC_3();
 }
 else if ( VAR_4 ) {
  FUNC_2();
 }
 else {
  FUNC_1();
 }



 FUNC_7("creating leaf vis...\n");
 for (VAR_8=0 ; VAR_8<VAR_5 ; VAR_8++)
  FUNC_4 (VAR_8);

 FUNC_7( "Total visible clusters: %i\n", VAR_7 );
 FUNC_7( "Average clusters visible: %i\n", VAR_7 / VAR_5 );
}
