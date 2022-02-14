
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int entries ;
struct TYPE_2__ {int len; scalar_t__* entries; scalar_t__ refcount; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2, VAR_3 = 0;
 u64 *VAR_4;

 if (VAR_1.refcount)
  return;

 VAR_4 = VAR_1.entries;
 for (VAR_2 = 0; VAR_2 < VAR_1.len; VAR_2++) {
  if (VAR_4[VAR_2] == VAR_0)
   continue;
  if (VAR_3 != VAR_2)
   FUNC_0(&VAR_4[VAR_3], &VAR_4[VAR_2], sizeof(VAR_4[VAR_2]));
  VAR_3++;
 }
 VAR_1.len = VAR_3;
}
