
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,char*,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 VAR_3[VAR_2] = FUNC_0(VAR_1,
  (void *)(unsigned long)VAR_2,
  "power_saving/%d", VAR_2);
 if (VAR_3[VAR_2]) {
  VAR_2++;
  return 0;
 }
 return -VAR_0;
}
