
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct stir_cb {TYPE_1__ rx_time; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (long) ;

__attribute__((used)) static void FUNC_3(const struct stir_cb *VAR_2, long VAR_3)
{
 long VAR_4;
 struct timeval VAR_5;

 if (VAR_3 <= 0)
  return;

 FUNC_0(&VAR_5);
 if (VAR_5.tv_sec - VAR_2->rx_time.tv_sec > 0)
  VAR_3 -= VAR_1;
 VAR_3 -= VAR_5.tv_usec - VAR_2->rx_time.tv_usec;
 if (VAR_3 < 10)
  return;

 VAR_4 = VAR_3 / (1000000 / VAR_0);
 if (VAR_4 > 0)
  FUNC_1(1 + VAR_4);
 else
  FUNC_2(VAR_3);
}
