
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scatter_walk {int offset; TYPE_1__* sg; } ;
struct page {int dummy; } ;
struct TYPE_3__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct scatter_walk*,int ) ;
 struct page* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct scatter_walk *VAR_3, int VAR_4,
     unsigned int VAR_5)
{
 if (VAR_4) {
  struct page *VAR_6;

  VAR_6 = FUNC_4(VAR_3->sg) + ((VAR_3->offset - 1) >> VAR_1);
  if (!FUNC_0(VAR_6))
   FUNC_1(VAR_6);
 }

 if (VAR_5) {
  VAR_3->offset += VAR_2 - 1;
  VAR_3->offset &= VAR_0;
  if (VAR_3->offset >= VAR_3->sg->offset + VAR_3->sg->length)
   FUNC_3(VAR_3, FUNC_2(VAR_3->sg));
 }
}
