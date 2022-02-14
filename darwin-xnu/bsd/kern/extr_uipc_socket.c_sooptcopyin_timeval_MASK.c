
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv64 ;
typedef int tv32 ;
struct user64_timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct user32_timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct sockopt {scalar_t__ sopt_p; int sopt_valsize; int sopt_val; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct user64_timeval*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct user64_timeval*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct sockopt *VAR_5, struct timeval *VAR_6)
{
 int VAR_7;

 if (FUNC_3(VAR_5->sopt_p)) {
  struct user64_timeval VAR_8;

  if (VAR_5->sopt_valsize < sizeof (VAR_8))
   return (VAR_1);

  VAR_5->sopt_valsize = sizeof (VAR_8);
  if (VAR_5->sopt_p != VAR_4) {
   VAR_7 = FUNC_2(VAR_5->sopt_val, &VAR_8, sizeof (VAR_8));
   if (VAR_7 != 0)
    return (VAR_7);
  } else {
   FUNC_1(FUNC_0(VAR_3, VAR_5->sopt_val), &VAR_8,
       sizeof (VAR_8));
  }
  if (VAR_8 < 0 || VAR_8 > VAR_2 ||
      VAR_8 < 0 || VAR_8 >= 1000000)
   return (VAR_0);

  VAR_6->tv_sec = VAR_8;
  VAR_6->tv_usec = VAR_8;
 } else {
  struct user32_timeval VAR_9;

  if (VAR_5->sopt_valsize < sizeof (VAR_9))
   return (VAR_1);

  VAR_5->sopt_valsize = sizeof (VAR_9);
  if (VAR_5->sopt_p != VAR_4) {
   VAR_7 = FUNC_2(VAR_5->sopt_val, &VAR_9, sizeof (VAR_9));
   if (VAR_7 != 0) {
    return (VAR_7);
   }
  } else {
   FUNC_1(FUNC_0(VAR_3, VAR_5->sopt_val), &VAR_9,
       sizeof (VAR_9));
  }
  VAR_6->tv_sec = VAR_9;
  VAR_6->tv_usec = VAR_9;
 }
 return (0);
}
