
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct timeval {int tv_usec; int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long,int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_8)
{
 struct tty_struct* VAR_9 = (struct tty_struct*) VAR_8;

 struct timeval VAR_10 = { .tv_sec = 0, .tv_usec = 0 };
 int VAR_11 = 0;
 unsigned char VAR_12;

 FUNC_2(&VAR_7);

 while (FUNC_0(VAR_2, 0, VAR_4, (int)&VAR_10,0,0)){
  FUNC_0 (VAR_1, 0, (unsigned long)&VAR_12, 1, 0, 0);
  FUNC_5(VAR_9, VAR_12, VAR_3);
  VAR_11++;
 }

 if (VAR_11)
  FUNC_4(VAR_9);


 FUNC_1(&VAR_6, VAR_5 + VAR_0);
 FUNC_3(&VAR_7);
}
