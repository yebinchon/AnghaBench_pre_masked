
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (size_t) ;
 void* FUNC_5 (struct page*) ;

__attribute__((used)) static void *FUNC_6(struct ib_device *VAR_0, size_t VAR_1,
         u64 *VAR_2, gfp_t VAR_3)
{
 struct page *VAR_4;
 void *VAR_5 = ((void*)0);
 u64 VAR_6;

 VAR_4 = FUNC_0(VAR_3, FUNC_4(VAR_1));
 if (VAR_4) {
  VAR_5 = FUNC_5(VAR_4);
  VAR_6 = FUNC_2(VAR_5);
  if (FUNC_1(VAR_0, VAR_6)) {
   FUNC_3((unsigned long)VAR_5, FUNC_4(VAR_1));
   return ((void*)0);
  }
  if (VAR_2)
   *VAR_2 = VAR_6;
  return VAR_5;
 }
 return ((void*)0);
}
