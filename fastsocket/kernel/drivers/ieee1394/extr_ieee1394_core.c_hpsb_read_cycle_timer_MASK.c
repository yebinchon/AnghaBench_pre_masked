
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct timeval {unsigned long long tv_sec; scalar_t__ tv_usec; } ;
struct hpsb_host {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* devctl ) (struct hpsb_host*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct hpsb_host*,int ,int ) ;

int FUNC_6(struct hpsb_host *VAR_3, u32 *VAR_4,
     u64 *VAR_5)
{
 int VAR_6;
 struct timeval VAR_7;
 unsigned long VAR_8;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_0;

 FUNC_3();
 FUNC_2(VAR_8);

 VAR_6 = VAR_3->driver->devctl(VAR_3, VAR_2, 0);
 if (VAR_6)
  FUNC_0(&VAR_7);

 FUNC_1(VAR_8);
 FUNC_4();

 if (!VAR_6)
  return -VAR_1;
 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7.tv_sec * 1000000ULL + VAR_7.tv_usec;
 return 0;
}
