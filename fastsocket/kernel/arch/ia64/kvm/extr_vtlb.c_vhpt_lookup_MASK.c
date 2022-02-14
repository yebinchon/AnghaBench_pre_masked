
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thash_data {scalar_t__ etag; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

struct thash_data *FUNC_2(u64 VAR_0)
{
 struct thash_data *VAR_1;
 u64 VAR_2;

 VAR_1 = (struct thash_data *)FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_1->etag == VAR_2)
  return VAR_1;
 return ((void*)0);
}
