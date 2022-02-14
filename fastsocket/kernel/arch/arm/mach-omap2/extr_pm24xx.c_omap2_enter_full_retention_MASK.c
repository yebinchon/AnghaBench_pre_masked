
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timespec*) ;
 int VAR_13 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ,int,unsigned long long) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_15 ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 struct timespec FUNC_19 (struct timespec,struct timespec) ;
 unsigned long long FUNC_20 (struct timespec*) ;

__attribute__((used)) static void FUNC_21(void)
{
 u32 VAR_16;
 struct timespec VAR_17, VAR_18, VAR_19;






 FUNC_1(VAR_15);



 FUNC_15(0xffffffff, VAR_0, VAR_8);
 FUNC_15(0xffffffff, VAR_0, VAR_3);
 FUNC_15(0xffffffff, VAR_12, VAR_7);





 FUNC_16(VAR_13, VAR_9);
 FUNC_17(VAR_13, VAR_9);


 VAR_16 = FUNC_8(VAR_5) | VAR_4;
 FUNC_9(VAR_16, VAR_5);

 FUNC_4();

 if (VAR_14) {
  FUNC_6(0, 0, 0);
  FUNC_3(&VAR_17);
 }



 if (FUNC_10())
  goto no_sleep;

 FUNC_11(0);
 FUNC_11(1);
 FUNC_11(2);


 FUNC_7(FUNC_18(VAR_10),
      FUNC_0(VAR_10),
      FUNC_0(VAR_11));

 FUNC_12(2);
 FUNC_12(1);
 FUNC_12(0);

no_sleep:
 if (VAR_14) {
  unsigned long long VAR_20;

  FUNC_3(&VAR_18);
  VAR_19 = FUNC_19(VAR_18, VAR_17);
  VAR_20 = FUNC_20(&VAR_19) * VAR_1;
  FUNC_6(0, 1, VAR_20);
 }
 FUNC_5();

 FUNC_2(VAR_15);


 FUNC_15(0xffffffff, VAR_0, VAR_8);
 FUNC_15(0xffffffff, VAR_0, VAR_3);


 FUNC_13(0x4 | 0x1, VAR_12, VAR_7);


 VAR_16 = FUNC_14(VAR_2, VAR_6);
 if (VAR_16 & 0x01)
  FUNC_15(0x01, VAR_2,
      VAR_6);
 if (VAR_16 & 0x20)
  FUNC_15(0x20, VAR_2,
      VAR_6);


 FUNC_15(0x0, VAR_2, VAR_6);
}
