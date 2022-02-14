
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tz ;
typedef int tv ;
struct timezone {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef unsigned long long UINT64 ;
typedef scalar_t__ UINT32 ;


 int FUNC_0 (struct timezone*,struct timezone*) ;
 int FUNC_1 (struct timezone*,int ,int) ;

UINT64 FUNC_2()
{
 struct timeval VAR_0;
 struct timezone VAR_1;
 UINT64 VAR_2;

 FUNC_1(&VAR_0, 0, sizeof(VAR_0));
 FUNC_1(&VAR_1, 0, sizeof(VAR_1));

 FUNC_0(&VAR_0, &VAR_1);

 if (sizeof(VAR_0.tv_sec) != 4)
 {
  VAR_2 = (UINT64)VAR_0.tv_sec * 1000ULL + (UINT64)VAR_0.tv_usec / 1000ULL;
 }
 else
 {
  VAR_2 = (UINT64)((UINT64)((UINT32)VAR_0.tv_sec)) * 1000ULL + (UINT64)VAR_0.tv_usec / 1000ULL;
 }

 return VAR_2;
}
