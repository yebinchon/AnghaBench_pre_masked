
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct fuse_copy_state {int write; int len; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned int FUNC_1 (struct fuse_copy_state*,void**,unsigned int*) ;
 int FUNC_2 (struct fuse_copy_state*) ;
 void* FUNC_3 (struct page*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct fuse_copy_state *VAR_2, struct page *VAR_3,
     unsigned VAR_4, unsigned VAR_5, int VAR_6)
{
 if (VAR_3 && VAR_6 && VAR_5 < VAR_1) {
  void *VAR_7 = FUNC_3(VAR_3, VAR_0);
  FUNC_5(VAR_7, 0, VAR_1);
  FUNC_4(VAR_7, VAR_0);
 }
 while (VAR_5) {
  if (!VAR_2->len) {
   int VAR_8 = FUNC_2(VAR_2);
   if (VAR_8)
    return VAR_8;
  }
  if (VAR_3) {
   void *VAR_9 = FUNC_3(VAR_3, VAR_0);
   void *VAR_10 = VAR_9 + VAR_4;
   VAR_4 += FUNC_1(VAR_2, &VAR_10, &VAR_5);
   FUNC_4(VAR_9, VAR_0);
  } else
   VAR_4 += FUNC_1(VAR_2, ((void*)0), &VAR_5);
 }
 if (VAR_3 && !VAR_2->write)
  FUNC_0(VAR_3);
 return 0;
}
