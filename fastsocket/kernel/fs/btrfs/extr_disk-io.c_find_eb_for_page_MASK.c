
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {int start; int len; } ;


 scalar_t__ VAR_0 ;
 struct extent_buffer* FUNC_0 (struct extent_io_tree*,int,int ) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct page*) ;

struct extent_buffer *FUNC_3(struct extent_io_tree *VAR_1,
           struct page *VAR_2, int VAR_3)
{
 struct extent_buffer *VAR_4;
 u64 VAR_5 = FUNC_2(VAR_2);
 u64 VAR_6 = VAR_5;
 u64 VAR_7;

 if (VAR_5 < VAR_3)
  VAR_7 = 0;
 else
  VAR_7 = VAR_5 - VAR_3;

 while (VAR_5 >= VAR_7) {
  VAR_4 = FUNC_0(VAR_1, VAR_5, 0);
  if (VAR_4) {




   if (VAR_4->start <= VAR_6 &&
       VAR_4->start + VAR_4->len > VAR_6)
    return VAR_4;


   FUNC_1(VAR_4);
   return ((void*)0);
  }
  if (VAR_5 == 0)
   break;
  VAR_5 -= VAR_0;
 }
 return ((void*)0);
}
