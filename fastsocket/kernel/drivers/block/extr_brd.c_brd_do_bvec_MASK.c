
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct brd_device {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct brd_device*,int ,unsigned int) ;
 int FUNC_1 (struct brd_device*,void*,int ,unsigned int) ;
 int FUNC_2 (struct brd_device*,int ,unsigned int) ;
 int FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;

__attribute__((used)) static int FUNC_6(struct brd_device *VAR_2, struct page *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5, int VAR_6,
   sector_t VAR_7)
{
 void *VAR_8;
 int VAR_9 = 0;

 if (VAR_6 != VAR_1) {
  VAR_9 = FUNC_2(VAR_2, VAR_7, VAR_4);
  if (VAR_9)
   goto out;
 }

 VAR_8 = FUNC_4(VAR_3, VAR_0);
 if (VAR_6 == VAR_1) {
  FUNC_0(VAR_8 + VAR_5, VAR_2, VAR_7, VAR_4);
  FUNC_3(VAR_3);
 } else {
  FUNC_3(VAR_3);
  FUNC_1(VAR_2, VAR_8 + VAR_5, VAR_7, VAR_4);
 }
 FUNC_5(VAR_8, VAR_0);

out:
 return VAR_9;
}
