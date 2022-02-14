
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int kperf_flags; int kpc_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(uint32_t VAR_8)
{
 uint32_t VAR_9;

 FUNC_5(&VAR_6);

 VAR_9 = FUNC_3(VAR_8);

 if( (VAR_8 == 0)
     || (VAR_9 == 0) )
 {

  VAR_7 = VAR_0;
 }
 else
 {

  VAR_4 = VAR_8;


  VAR_5 = VAR_9;
  FUNC_1(VAR_5 <= VAR_1);


  VAR_7 = VAR_2;


  if( !FUNC_2()->kpc_buf )
  {
   FUNC_2()->kperf_flags |= VAR_3;
   FUNC_0(FUNC_2());
  }
 }

    FUNC_4();
 FUNC_6(&VAR_6);

 return 0;
}
