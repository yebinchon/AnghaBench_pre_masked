
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct ptp_clock_info {int dummy; } ;


 int FUNC_0 (struct ptp_clock_info*,int ) ;
 int FUNC_1 (struct ptp_clock_info*,struct timespec*) ;
 struct timespec FUNC_2 (struct timespec const,struct timespec) ;
 int FUNC_3 (struct timespec*) ;

__attribute__((used)) static int FUNC_4(struct ptp_clock_info *VAR_0,
      const struct timespec *VAR_1)
{




 int VAR_2;
 struct timespec VAR_3;
 struct timespec VAR_4;

 VAR_2 = FUNC_1(VAR_0, &VAR_3);
 if (VAR_2 != 0)
  return VAR_2;

 VAR_4 = FUNC_2(*VAR_1, VAR_3);

 VAR_2 = FUNC_0(VAR_0, FUNC_3(&VAR_4));
 if (VAR_2 != 0)
  return VAR_2;

 return 0;
}
