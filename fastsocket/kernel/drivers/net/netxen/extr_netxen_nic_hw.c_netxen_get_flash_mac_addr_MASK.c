
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct netxen_adapter {int portnum; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,scalar_t__,int,int *) ;

int FUNC_1(struct netxen_adapter *VAR_2, u64 *VAR_3)
{
 __le32 *VAR_4 = (__le32 *) VAR_3;
 u32 VAR_5;

 VAR_5 = VAR_0 + (VAR_2->portnum * sizeof(u64));

 if (FUNC_0(VAR_2, VAR_5, sizeof(u64), VAR_4) == -1)
  return -1;

 if (*VAR_3 == ~0ULL) {

  VAR_5 = VAR_1 +
   (VAR_2->portnum * sizeof(u64));

  if (FUNC_0(VAR_2,
     VAR_5, sizeof(u64), VAR_4) == -1)
   return -1;

  if (*VAR_3 == ~0ULL)
   return -1;
 }
 return 0;
}
