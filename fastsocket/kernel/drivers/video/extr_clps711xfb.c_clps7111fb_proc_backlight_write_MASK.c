
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,char const*,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, const char *VAR_5,
  unsigned long VAR_6, void *VAR_7)
{
 unsigned char VAR_8;
 int VAR_9;

 if (VAR_6 < 1) {
  return -VAR_2;
 }

 if (FUNC_2(&VAR_8, VAR_5, 1))
  return -VAR_1;

 VAR_9 = VAR_8 - '0';

 if (FUNC_3()) {
  unsigned char VAR_10;

  VAR_10 = FUNC_0(VAR_3);

  if (VAR_9) {
   VAR_10 |= VAR_0;
  } else {
   VAR_10 &= ~VAR_0;
  }

  FUNC_1(VAR_10, VAR_3);
 }

 return VAR_6;
}
