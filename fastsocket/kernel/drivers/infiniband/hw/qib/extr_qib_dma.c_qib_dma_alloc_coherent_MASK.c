
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (struct page*) ;

__attribute__((used)) static void *FUNC_3(struct ib_device *VAR_0, size_t VAR_1,
        u64 *VAR_2, gfp_t VAR_3)
{
 struct page *VAR_4;
 void *VAR_5 = ((void*)0);

 VAR_4 = FUNC_0(VAR_3, FUNC_1(VAR_1));
 if (VAR_4)
  VAR_5 = FUNC_2(VAR_4);
 if (VAR_2)
  *VAR_2 = (u64) VAR_5;
 return VAR_5;
}
