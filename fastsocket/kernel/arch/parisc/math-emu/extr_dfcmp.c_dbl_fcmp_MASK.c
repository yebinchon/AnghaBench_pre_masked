
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,unsigned int,int) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (unsigned int) ;
 int VAR_2 ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (unsigned int) ;

int
FUNC_19 (dbl_floating_point * VAR_3, dbl_floating_point * VAR_4,
   unsigned int VAR_5, unsigned int *VAR_6)



    {
    register unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
    register int VAR_11;


    FUNC_2(VAR_3,VAR_7,VAR_8);
    FUNC_2(VAR_4,VAR_9,VAR_10);



    if( (FUNC_3(VAR_7) == VAR_0)
        || (FUNC_3(VAR_9) == VAR_0) )
 {



        if( ((FUNC_3(VAR_7) == VAR_0)
     && FUNC_5(VAR_7,VAR_8)
     && (FUNC_12(VAR_5) || FUNC_7(VAR_7)))
    ||
     ((FUNC_3(VAR_9) == VAR_0)
     && FUNC_5(VAR_9,VAR_10)
     && (FUNC_12(VAR_5) || FUNC_7(VAR_9))) )
     {
     if( FUNC_14() ) {
      FUNC_17(FUNC_18(VAR_5));
  return(VAR_1);
     }
     else FUNC_16();
     FUNC_17(FUNC_18(VAR_5));
     return(VAR_2);
     }


        else if( ((FUNC_3(VAR_7) == VAR_0)
     && FUNC_5(VAR_7,VAR_8))
    ||
     ((FUNC_3(VAR_9) == VAR_0)
     && FUNC_5(VAR_9,VAR_10)) )
     {

     FUNC_17(FUNC_18(VAR_5));
     return(VAR_2);
     }

 }


    FUNC_10(VAR_7,VAR_9,VAR_11);
    if( VAR_11 < 0 )
        {


        if( FUNC_8(VAR_7,VAR_8)
   && FUNC_8(VAR_9,VAR_10) )
            {
     FUNC_17(FUNC_11(VAR_5));
     }
 else if( FUNC_6(VAR_7) )
     {
     FUNC_17(FUNC_15(VAR_5));
     }
 else
     {
     FUNC_17(FUNC_13(VAR_5));
     }
        }


    else if(FUNC_4(VAR_7,VAR_8,VAR_9,VAR_10))
        {
        FUNC_17(FUNC_11(VAR_5));
        }
    else if( FUNC_9(VAR_7) )
        {

 if( FUNC_0(VAR_7) < FUNC_0(VAR_9) )
     {
     FUNC_17(FUNC_15(VAR_5));
     }
 else if( FUNC_0(VAR_7) > FUNC_0(VAR_9) )
     {
     FUNC_17(FUNC_13(VAR_5));
     }
 else
     {


     if( FUNC_1(VAR_8) < FUNC_1(VAR_10) )
  {
  FUNC_17(FUNC_15(VAR_5));
  }
     else
  {
  FUNC_17(FUNC_13(VAR_5));
  }
     }
 }
    else
        {



 if( FUNC_0(VAR_7) > FUNC_0(VAR_9) )
     {
     FUNC_17(FUNC_15(VAR_5));
     }
 else if( FUNC_0(VAR_7) < FUNC_0(VAR_9) )
     {
     FUNC_17(FUNC_13(VAR_5));
     }
 else
     {


     if( FUNC_1(VAR_8) > FUNC_1(VAR_10) )
  {
  FUNC_17(FUNC_15(VAR_5));
  }
     else
  {
  FUNC_17(FUNC_13(VAR_5));
  }
     }
        }
 return(VAR_2);
    }
