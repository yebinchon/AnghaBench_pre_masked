
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct floppy_struct** VAR_1 ;
 struct floppy_struct* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_3, int VAR_4, struct floppy_struct **VAR_5)
{
 if (VAR_4)
  *VAR_5 = &VAR_2[VAR_4];
 else {
  FUNC_1(VAR_3, 0);
  FUNC_0(FUNC_2(0, 0));
  FUNC_3();
  *VAR_5 = VAR_1[VAR_3];
 }
 if (!*VAR_5)
  return -VAR_0;
 return 0;
}
