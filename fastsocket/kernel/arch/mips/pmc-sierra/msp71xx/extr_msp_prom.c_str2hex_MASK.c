
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned char *VAR_0)
{
 int VAR_1 = 0;

 while (*VAR_0) {
  VAR_1 = VAR_1 << 4;
  VAR_1 |= FUNC_0(*VAR_0++);
 }

 return VAR_1;
}
