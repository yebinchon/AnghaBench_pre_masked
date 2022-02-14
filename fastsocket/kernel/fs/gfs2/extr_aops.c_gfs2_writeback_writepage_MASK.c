
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,int ,struct writeback_control*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*,struct writeback_control*) ;
 int FUNC_2 (struct page*,int ,struct writeback_control*) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_2,
        struct writeback_control *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 <= 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (VAR_4 == -VAR_0)
  VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 return VAR_4;
}
