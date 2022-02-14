
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct blk_integrity {int flags; int * generate_fn; int * verify_fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct blk_integrity* FUNC_0 (struct block_device*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_4, int VAR_5)
{
 struct blk_integrity *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6 == ((void*)0))
  return 0;

 if (VAR_5 == VAR_2 && VAR_6->verify_fn != ((void*)0) &&
     (VAR_6->flags & VAR_0))
  return 1;

 if (VAR_5 == VAR_3 && VAR_6->generate_fn != ((void*)0) &&
     (VAR_6->flags & VAR_1))
  return 1;

 return 0;
}
