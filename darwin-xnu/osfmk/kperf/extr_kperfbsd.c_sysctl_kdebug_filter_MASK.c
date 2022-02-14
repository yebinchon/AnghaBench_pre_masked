
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sysctl_req {scalar_t__ oldptr; scalar_t__ newptr; scalar_t__ newlen; } ;
struct kperf_kdebug_filter {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sysctl_req*,struct kperf_kdebug_filter*,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kperf_kdebug_filter**) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct sysctl_req *VAR_2)
{
 FUNC_2(VAR_2 != ((void*)0));

 if (VAR_2->oldptr != VAR_1) {
  struct kperf_kdebug_filter *VAR_3 = ((void*)0);
  uint32_t VAR_4 = FUNC_3(&VAR_3);
  size_t VAR_5 = FUNC_0(VAR_4);

  if (VAR_4 == 0) {
   return VAR_0;
  }

  return FUNC_1(VAR_2, VAR_3, VAR_5);
 } else if (VAR_2->newptr != VAR_1) {
  return FUNC_4(VAR_2->newptr, (uint32_t)VAR_2->newlen);
 } else {
  return VAR_0;
 }
}
