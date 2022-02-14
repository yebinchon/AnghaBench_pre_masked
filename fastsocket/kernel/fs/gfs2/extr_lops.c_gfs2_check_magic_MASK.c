
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_page; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_2)
{
 void *VAR_3;
 __be32 *VAR_4;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_2->b_page, VAR_1);
 VAR_4 = VAR_3 + FUNC_0(VAR_2);
 if (*VAR_4 == FUNC_2(VAR_0))
  FUNC_5(VAR_2);
 FUNC_4(VAR_3, VAR_1);
}
