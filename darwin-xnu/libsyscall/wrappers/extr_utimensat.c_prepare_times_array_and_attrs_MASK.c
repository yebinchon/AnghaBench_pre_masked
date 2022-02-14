
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct timeval*) ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_3(struct timespec VAR_4[2],
  struct timespec VAR_5[2], size_t *VAR_6)
{
 if (VAR_4[0].tv_nsec == VAR_3 &&
   VAR_4[1].tv_nsec == VAR_3) {
  return 0;
 }

 if (VAR_4[0].tv_nsec == VAR_2 ||
   VAR_4[1].tv_nsec == VAR_2) {
  struct timespec VAR_7 = {};
  {



   struct timeval VAR_8;
   if (FUNC_1(&VAR_8) != 0) {
    FUNC_2(&VAR_8, ((void*)0));
   }
   FUNC_0(&VAR_8, &VAR_7);
  }

  if (VAR_4[0].tv_nsec == VAR_2) {
   VAR_4[0] = VAR_7;
  }
  if (VAR_4[1].tv_nsec == VAR_2) {
   VAR_4[1] = VAR_7;
  }
 }

 int VAR_9 = 0;
 *VAR_6 = 0;
 struct timespec *VAR_10 = VAR_5;
 if (VAR_4[1].tv_nsec != VAR_3) {
  VAR_9 |= VAR_1;
  *VAR_10++ = VAR_4[1];
  *VAR_6 += sizeof(struct timespec);
 }
 if (VAR_4[0].tv_nsec != VAR_3) {
  VAR_9 |= VAR_0;
  *VAR_10 = VAR_4[0];
  *VAR_6 += sizeof(struct timespec);
 }
 return VAR_9;
}
