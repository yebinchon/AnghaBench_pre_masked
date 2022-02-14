
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int erasesize; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_5)
{
 size_t VAR_6;

 if (!VAR_3)
  return 0;
 VAR_4 = FUNC_1(VAR_5->size, VAR_5->erasesize);
 VAR_6 = VAR_4 * sizeof(unsigned long);
 if (VAR_6 / sizeof(unsigned long) != VAR_4) {
  FUNC_0("Too many erase blocks for wear reporting\n");
  return -VAR_0;
 }
 VAR_2 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_2) {
  FUNC_0("Too many erase blocks for wear reporting\n");
  return -VAR_0;
 }
 return 0;
}
