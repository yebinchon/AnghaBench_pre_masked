
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_2__ {int last_progress; } ;


 int FUNC_0 (char*,unsigned long long,unsigned long long,double) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct timeval*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned long long VAR_2, unsigned long long VAR_3)
{
 int VAR_4;
 struct timeval VAR_5;
 double VAR_6;

 FUNC_2(&VAR_5, ((void*)0));
 VAR_4 = VAR_5.tv_sec;
 if ((VAR_4 < VAR_0.last_progress) && (VAR_2 != VAR_3) && (VAR_2 != 0))
  return;
 VAR_0.last_progress = VAR_4 + 10;
 VAR_6 = ((double) VAR_2 / (double) VAR_3) * 100.0;
 FUNC_0(" %4lli MB of %4lli MB (%5.1f%% )\n", VAR_2 >> 20, VAR_3 >> 20,
  VAR_6);
 FUNC_1(VAR_1);
}
