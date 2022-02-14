
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct block_device*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct buffer_head*) ;

void FUNC_6(struct block_device *VAR_0, sector_t VAR_1)
{
 struct buffer_head *VAR_2;

 FUNC_4();

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_5(VAR_2);
  FUNC_3(VAR_2);
  FUNC_0(VAR_2);
 }
}
