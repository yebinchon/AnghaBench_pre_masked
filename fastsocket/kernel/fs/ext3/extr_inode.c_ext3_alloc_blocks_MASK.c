
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext3_fsblk_t ;


 int FUNC_0 (int *,struct inode*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,struct inode*,scalar_t__,unsigned long*,int*) ;

__attribute__((used)) static int FUNC_2(handle_t *VAR_0, struct inode *VAR_1,
   ext3_fsblk_t VAR_2, int VAR_3, int VAR_4,
   ext3_fsblk_t VAR_5[4], int *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10 = 0;
 ext3_fsblk_t VAR_11 = 0;
 int VAR_12 = 0;
 VAR_7 = VAR_4 + VAR_3;

 while (1) {
  VAR_9 = VAR_7;

  VAR_11 = FUNC_1(VAR_0,VAR_1,VAR_2,&VAR_9,VAR_6);
  if (*VAR_6)
   goto failed_out;

  VAR_7 -= VAR_9;

  while (VAR_10 < VAR_3 && VAR_9) {
   VAR_5[VAR_10++] = VAR_11++;
   VAR_9--;
  }

  if (VAR_9 > 0)
   break;
 }


 VAR_5[VAR_10] = VAR_11;


 VAR_12 = VAR_9;
 *VAR_6 = 0;
 return VAR_12;
failed_out:
 for (VAR_8 = 0; VAR_8 <VAR_10; VAR_8++)
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_8], 1);
 return VAR_12;
}
