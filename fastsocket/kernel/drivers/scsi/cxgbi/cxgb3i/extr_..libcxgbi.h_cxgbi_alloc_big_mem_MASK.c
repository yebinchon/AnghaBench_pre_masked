
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 void* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (void*,int ,unsigned int) ;
 void* FUNC_2 (unsigned int) ;

__attribute__((used)) static inline void *FUNC_3(unsigned int VAR_0,
     gfp_t VAR_1)
{
 void *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_2, 0, VAR_0);
 return VAR_2;
}
