
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int) ;

__attribute__((used)) static int FUNC_1(struct cx18 *VAR_0)
{



 int VAR_1 = FUNC_0(VAR_0, 0x8d5) & 0x7f;

 if ((FUNC_0(VAR_0, 0x8d5) & 0x80) == 0)
  VAR_1 = 0x80 - VAR_1;
 else
  VAR_1 = 0x80 + VAR_1;
 return VAR_1 << 8;
}
