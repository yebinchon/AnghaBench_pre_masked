
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void**) ;
 int FUNC_1 (void*,int ,int ,int,float*) ;
 float* FUNC_2 (int,int) ;

__attribute__((used)) static inline void FUNC_3(unsigned int VAR_2)
{
 void *VAR_3;
 FUNC_0(VAR_0, &VAR_3);

 float *VAR_4 = FUNC_2(
  4 * sizeof(float),
  sizeof(float));

 VAR_4[0] = ((VAR_2 >> 8*0) & 0xFF)/255.0f;
 VAR_4[1] = ((VAR_2 >> 8*1) & 0xFF)/255.0f;
 VAR_4[2] = ((VAR_2 >> 8*2) & 0xFF)/255.0f;
 VAR_4[3] = ((VAR_2 >> 8*3) & 0xFF)/255.0f;

 FUNC_1(VAR_3, VAR_1, 0, 4, VAR_4);
}
