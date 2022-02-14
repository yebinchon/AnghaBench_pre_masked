
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct timespec*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int,int,unsigned long long) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ,int ) ;
 struct timespec FUNC_6 (struct timespec,struct timespec) ;
 unsigned long long FUNC_7 (struct timespec*) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_11 = 0;
 struct timespec VAR_12, VAR_13, VAR_14;



 if (FUNC_2())
  return;



 if (FUNC_1()) {

  FUNC_5(0xffffffff, VAR_0, VAR_8);
  FUNC_5(0xffffffff, VAR_0, VAR_3);
  FUNC_5(0xffffffff, VAR_9, VAR_7);


  FUNC_5((0x01 << VAR_5) |
      VAR_4,
      VAR_1, VAR_6);
 } else {


  FUNC_5(VAR_4, VAR_1, VAR_6);
  VAR_11 = 1;
 }

 if (VAR_10) {
  FUNC_3(VAR_11 ? 2 : 1, 0, 0);
  FUNC_0(&VAR_12);
 }

 FUNC_4();

 if (VAR_10) {
  unsigned long long VAR_15;

  FUNC_0(&VAR_13);
  VAR_14 = FUNC_6(VAR_13, VAR_12);
  VAR_15 = FUNC_7(&VAR_14) * VAR_2;
  FUNC_3(VAR_11 ? 2 : 1, 1, VAR_15);
 }
}
