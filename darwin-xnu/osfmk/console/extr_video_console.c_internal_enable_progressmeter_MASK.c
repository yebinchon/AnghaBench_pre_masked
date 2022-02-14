
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spl_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 int FUNC_0 (void*,int,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_8(int VAR_19)
{
    spl_t VAR_20;
    void * VAR_21;
    boolean_t VAR_22;

    VAR_22 = VAR_0;
    VAR_21 = ((void*)0);
    if (VAR_19)
    {
 VAR_21 = FUNC_1((VAR_8 * VAR_18)
              * (VAR_7 * VAR_18) * sizeof(int));
    }

    VAR_20 = FUNC_5();
    FUNC_3(&VAR_13);

    if (VAR_11 == VAR_19)
    {
 if (VAR_3 || !VAR_2 || !VAR_4
  || (VAR_9 == VAR_17)) VAR_19 = VAR_17;
    }

    if (VAR_19 != VAR_17)
    {
 if (VAR_19)
 {
     if (VAR_10 == VAR_17)
     {
  VAR_15 = VAR_21;
  FUNC_7(VAR_5 | VAR_12, 0, (VAR_8 * VAR_18), 0);
  VAR_21 = ((void*)0);
  VAR_16 = 0;
     }
     VAR_17 = VAR_19;
 }
 else if (VAR_15)
 {
     if (VAR_11 == VAR_17)
     {
  FUNC_7(VAR_6, 0, (VAR_8 * VAR_18), VAR_16);
     }
     else VAR_22 = VAR_1;
     VAR_21 = VAR_15;
     VAR_15 = ((void*)0);
     VAR_17 = VAR_0;
 }
    }

    FUNC_4(&VAR_13);
    FUNC_6(VAR_20);

    if (VAR_21)
    {
 if (VAR_22) FUNC_0(VAR_21,
                                       (VAR_8 * VAR_18)
                                       * (VAR_7 * VAR_18)
                                       * sizeof(int),
                                       VAR_14);
 FUNC_2(VAR_21, (VAR_8 * VAR_18)
   * (VAR_7 * VAR_18) * sizeof(int));
    }
}
