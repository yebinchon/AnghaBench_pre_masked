
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct loop_device {int (* transfer ) (struct loop_device*,int,struct page*,unsigned int,struct page*,unsigned int,int,int ) ;} ;
typedef int sector_t ;


 int FUNC_0 (struct loop_device*,int,struct page*,unsigned int,struct page*,unsigned int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct loop_device *VAR_0, int VAR_1,
        struct page *VAR_2, unsigned VAR_3,
        struct page *VAR_4, unsigned VAR_5,
        int VAR_6, sector_t VAR_7)
{
 if (FUNC_1(!VAR_0->transfer))
  return 0;

 return VAR_0->transfer(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
