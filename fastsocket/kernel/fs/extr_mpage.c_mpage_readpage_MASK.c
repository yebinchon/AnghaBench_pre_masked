
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_state; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int get_block_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (struct bio*,struct page*,int,int *,struct buffer_head*,unsigned long*,int ) ;
 int FUNC_1 (int ,struct bio*) ;

int FUNC_2(struct page *VAR_1, get_block_t VAR_2)
{
 struct bio *VAR_3 = ((void*)0);
 sector_t VAR_4 = 0;
 struct buffer_head VAR_5;
 unsigned long VAR_6 = 0;

 VAR_5.b_state = 0;
 VAR_5.b_size = 0;
 VAR_3 = FUNC_0(VAR_3, VAR_1, 1, &VAR_4,
   &VAR_5, &VAR_6, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_0, VAR_3);
 return 0;
}
