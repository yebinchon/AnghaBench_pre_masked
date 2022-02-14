
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 void** VAR_8 ;
 void** VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,double,double,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int ,int ,double) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (void*,void*,void*,void*,void*,void*,int ,int,int ) ;
 int FUNC_15 (int,int,int,int) ;

void FUNC_16 (void)
{
 static int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 vec_t VAR_15, VAR_16;

 if (!VAR_10)
  return;

 if (!VAR_11)
 {
  VAR_11 = 1;
  FUNC_0 ();
 }

 FUNC_4 (1,0.8,0.8,0);
 FUNC_3 (VAR_1);

 VAR_12 = (VAR_8[0] - VAR_9[0]);
 VAR_13 = (VAR_8[1] - VAR_9[1]);

 VAR_15 = VAR_9[0] + VAR_12/2;
 VAR_16 = VAR_9[1] + VAR_13/2;

 VAR_14 = VAR_12 > VAR_13 ? VAR_12 : VAR_13;

 FUNC_11 ();
    FUNC_15 (90, 1, 2, 16384);
 FUNC_14 (VAR_15, VAR_16, VAR_8[2] + VAR_14/2, VAR_15 , VAR_16, VAR_8[2], 0, 1, 0);

 FUNC_5 (0,0,0);

 FUNC_12 (VAR_4, VAR_3);
 FUNC_7 (VAR_2);
 FUNC_8 (VAR_0);
 FUNC_2 (VAR_7, VAR_5);
 FUNC_10 ();

}
