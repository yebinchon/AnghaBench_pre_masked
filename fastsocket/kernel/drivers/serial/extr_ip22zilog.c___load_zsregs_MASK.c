
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int control; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 int FUNC_0 () ;
 int FUNC_1 (struct zilog_channel*) ;
 int FUNC_2 (struct zilog_channel*) ;
 unsigned char FUNC_3 (struct zilog_channel*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct zilog_channel*,size_t,unsigned char) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct zilog_channel *VAR_22, unsigned char *VAR_23)
{
 int VAR_24;


 for (VAR_24 = 0; VAR_24 < 1000; VAR_24++) {
  unsigned char VAR_25 = FUNC_3(VAR_22, VAR_5);
  if (VAR_25 & VAR_0)
   break;
  FUNC_4(100);
 }

 FUNC_6(VAR_2, &VAR_22->control);
 FUNC_0();
 FUNC_1(VAR_22);

 FUNC_2(VAR_22);


 FUNC_5(VAR_22, VAR_5,
      VAR_23[VAR_5] & ~(VAR_19 | VAR_21 | VAR_3));


 FUNC_5(VAR_22, VAR_13, VAR_23[VAR_13]);


 FUNC_5(VAR_22, VAR_6, VAR_23[VAR_6]);


 FUNC_5(VAR_22, VAR_12, VAR_23[VAR_12] & ~VAR_18);
 FUNC_5(VAR_22, VAR_14, VAR_23[VAR_14] & ~VAR_20);


 FUNC_5(VAR_22, VAR_15, VAR_23[VAR_15]);
 FUNC_5(VAR_22, VAR_16, VAR_23[VAR_16]);







 FUNC_5(VAR_22, VAR_10, VAR_23[VAR_10] & ~VAR_1);


 FUNC_5(VAR_22, VAR_7, VAR_23[VAR_7]);


 FUNC_5(VAR_22, VAR_8, VAR_23[VAR_8]);
 FUNC_5(VAR_22, VAR_9, VAR_23[VAR_9]);


 FUNC_5(VAR_22, VAR_10, VAR_23[VAR_10]);


 FUNC_5(VAR_22, VAR_11, VAR_23[VAR_11]);


 FUNC_5(VAR_22, VAR_4, VAR_17);
 FUNC_5(VAR_22, VAR_4, VAR_17);


 FUNC_5(VAR_22, VAR_12, VAR_23[VAR_12]);
 FUNC_5(VAR_22, VAR_14, VAR_23[VAR_14]);


 FUNC_5(VAR_22, VAR_5, VAR_23[VAR_5]);
}
