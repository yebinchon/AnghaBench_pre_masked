
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct journal_head {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_4__ {int j_blocksize; int j_dev; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 struct buffer_head* FUNC_1 (int ,unsigned long long,int ) ;
 struct journal_head* FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (TYPE_1__*,unsigned long long*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

struct journal_head *FUNC_8(journal_t *VAR_0)
{
 struct buffer_head *VAR_1;
 unsigned long long VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, &VAR_2);

 if (VAR_3)
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_0->j_dev, VAR_2, VAR_0->j_blocksize);
 if (!VAR_1)
  return ((void*)0);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1->b_data, 0, VAR_0->j_blocksize);
 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 FUNC_0(VAR_1, "return this buffer");
 return FUNC_2(VAR_1);
}
