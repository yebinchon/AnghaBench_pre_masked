
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (void*) ;
 size_t* VAR_0 ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_1, u32 VAR_2, u32 VAR_3,
           u32 VAR_4[8], u32 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_1 += VAR_2)
  FUNC_2(FUNC_0(VAR_4[VAR_0[VAR_6]],
     FUNC_1(VAR_1), VAR_5),
       VAR_1);
}
