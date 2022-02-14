
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_debugfs_data {int bufsize; int pos; int buf; } ;


 int FUNC_0 (int,int,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct c4iw_debugfs_data *VAR_3 = VAR_2;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->bufsize - VAR_3->pos - 1;
 if (VAR_4 == 0)
  return 1;

 VAR_5 = FUNC_0(VAR_3->buf + VAR_3->pos, VAR_4, "0x%x\n", VAR_0<<8);
 if (VAR_5 < VAR_4)
  VAR_3->pos += VAR_5;
 return 0;
}
