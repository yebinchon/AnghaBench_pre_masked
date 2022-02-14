
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct sysctl_req {int newptr; scalar_t__ oldptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sysctl_req*,int,int,int*,int *) ;

__attribute__((used)) static int
FUNC_2(struct sysctl_req *VAR_0,
 int (*VAR_1)(void), int (*VAR_2)(int))
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 int VAR_3 = 0;
 if (VAR_0->oldptr) {
  VAR_3 = VAR_1();
 }

 int VAR_4 = FUNC_1(VAR_0, VAR_3, sizeof(VAR_3), &VAR_3, ((void*)0));

 if (VAR_4 || !VAR_0->newptr) {
  return VAR_4;
 }

 return VAR_2(VAR_3);
}
