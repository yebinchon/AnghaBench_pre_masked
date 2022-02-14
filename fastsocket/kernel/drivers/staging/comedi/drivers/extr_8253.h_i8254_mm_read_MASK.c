
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (VAR_3 > 2)
  return -1;


 VAR_4 = VAR_3 << 6;
 FUNC_1(VAR_4, VAR_1 + (VAR_0 << VAR_2));


 VAR_5 = FUNC_0(VAR_1 + (VAR_3 << VAR_2));

 VAR_5 += FUNC_0(VAR_1 + (VAR_3 << VAR_2)) << 8;

 return VAR_5;
}
