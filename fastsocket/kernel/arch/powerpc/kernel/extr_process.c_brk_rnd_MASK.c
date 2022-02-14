
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(void)
{
        unsigned long VAR_1 = 0;


 if (FUNC_1())
  VAR_1 = (long)(FUNC_0() % (1<<(23-VAR_0)));
 else
  VAR_1 = (long)(FUNC_0() % (1<<(30-VAR_0)));

 return VAR_1 << VAR_0;
}
