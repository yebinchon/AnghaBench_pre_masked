
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {int tv_usec; int tv_sec; } ;
struct frame {int sent_jiffs; TYPE_1__ sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct frame *VAR_3)
{
 struct timeval VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4);
 VAR_5 = VAR_4.tv_usec - VAR_3->sent.tv_usec;
 VAR_5 += (VAR_4.tv_sec - VAR_3->sent.tv_sec) * VAR_1;

 if (VAR_5 < 0)
  VAR_5 = -VAR_5;
 if (VAR_5 > VAR_1 / 4) {
  VAR_5 = ((u32) VAR_2) - VAR_3->sent_jiffs;
  VAR_5 *= VAR_1 / VAR_0;
 }

 return VAR_5;
}
