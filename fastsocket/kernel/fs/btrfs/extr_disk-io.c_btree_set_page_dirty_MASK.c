
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ private; } ;
struct extent_buffer {int refs; int bflags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_1)
{
 struct extent_buffer *VAR_2;

 FUNC_0(!FUNC_1(VAR_1));
 VAR_2 = (struct extent_buffer *)VAR_1->private;
 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_5(VAR_0, &VAR_2->bflags));
 FUNC_0(!FUNC_3(&VAR_2->refs));
 FUNC_4(VAR_2);
 return FUNC_2(VAR_1);
}
