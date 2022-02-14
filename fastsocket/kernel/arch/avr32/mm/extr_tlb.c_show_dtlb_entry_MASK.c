
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,unsigned int,char,char,int,int,int,int,int,char,char,char,char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned long VAR_21;

 FUNC_5(VAR_21);
 VAR_20 = FUNC_7(VAR_5);
 VAR_17 = FUNC_7(VAR_8);
 VAR_19 = FUNC_1(VAR_3, VAR_15, VAR_20);
 FUNC_8(VAR_5, VAR_19);

 FUNC_2();
 FUNC_3();

 VAR_16 = FUNC_7(VAR_8);
 VAR_18 = FUNC_7(VAR_10);

 FUNC_6("%2u: %c %c %02x   %05x %05x %o  %o  %c %c %c %c\n",
        VAR_15,
        FUNC_0(VAR_9, VAR_16) ? '1' : '0',
        FUNC_0(VAR_4, VAR_18) ? '1' : '0',
        FUNC_0(VAR_1, VAR_16),
        FUNC_0(VAR_13, VAR_16) >> 2,
        FUNC_0(VAR_6, VAR_18) >> 2,
        FUNC_0(VAR_0, VAR_18),
        FUNC_0(VAR_7, VAR_18),
        FUNC_0(VAR_11, VAR_18) ? 'C' : ' ',
        FUNC_0(VAR_2, VAR_18) ? 'B' : ' ',
        FUNC_0(VAR_14, VAR_18) ? 'W' : ' ',
        FUNC_0(VAR_12, VAR_18) ? 'D' : ' ');

 FUNC_8(VAR_5, VAR_20);
 FUNC_8(VAR_8, VAR_17);
 FUNC_3();
 FUNC_4(VAR_21);
}
