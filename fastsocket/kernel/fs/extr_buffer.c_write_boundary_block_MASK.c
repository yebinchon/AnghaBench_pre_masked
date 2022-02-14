
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (struct block_device*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int,struct buffer_head**) ;
 int FUNC_3 (struct buffer_head*) ;

void FUNC_4(struct block_device *VAR_1,
   sector_t VAR_2, unsigned VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_0(VAR_1, VAR_2 + 1, VAR_3);
 if (VAR_4) {
  if (FUNC_1(VAR_4))
   FUNC_2(VAR_0, 1, &VAR_4);
  FUNC_3(VAR_4);
 }
}
