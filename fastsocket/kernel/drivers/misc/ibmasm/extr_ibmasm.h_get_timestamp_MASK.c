
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (char*,char*,int ,int ) ;

__attribute__((used)) static inline char *FUNC_2(char *VAR_0)
{
 struct timeval VAR_1;
 FUNC_0(&VAR_1);
 FUNC_1(VAR_0, "%lu.%lu", VAR_1.tv_sec, VAR_1.tv_usec);
 return VAR_0;
}
