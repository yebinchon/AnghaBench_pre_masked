
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv64 ;
typedef int tv32 ;
struct user64_timeval {int tv_usec; int tv_sec; } ;
struct user32_timeval {int tv_usec; int tv_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct sockopt {scalar_t__ sopt_p; size_t sopt_valsize; int sopt_val; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (void const*,int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (void const*,int ,size_t) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (size_t,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct sockopt *VAR_3, const struct timeval *VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 struct user64_timeval VAR_7 = {};
 struct user32_timeval VAR_8 = {};
 const void * VAR_9;
 size_t VAR_10;

 VAR_5 = 0;
 if (FUNC_4(VAR_3->sopt_p)) {
  VAR_6 = sizeof (VAR_7);
  VAR_7 = VAR_4->tv_sec;
  VAR_7 = VAR_4->tv_usec;
  VAR_9 = &VAR_7;
 } else {
  VAR_6 = sizeof (VAR_8);
  VAR_8 = VAR_4->tv_sec;
  VAR_8 = VAR_4->tv_usec;
  VAR_9 = &VAR_8;
 }
 VAR_10 = FUNC_3(VAR_6, VAR_3->sopt_valsize);
 VAR_3->sopt_valsize = VAR_10;
 if (VAR_3->sopt_val != VAR_0) {
  if (VAR_3->sopt_p != VAR_2)
   VAR_5 = FUNC_2(VAR_9, VAR_3->sopt_val, VAR_10);
  else
   FUNC_1(VAR_9, FUNC_0(VAR_1, VAR_3->sopt_val), VAR_10);
 }
 return (VAR_5);
}
