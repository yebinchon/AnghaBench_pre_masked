
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* vector_clipf ) (float*,float*,unsigned int,int ,int ) ;} ;
typedef TYPE_1__ AudioDSPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(AudioDSPContext *VAR_2, float *VAR_3,
                              unsigned int VAR_4)
{
    VAR_2->vector_clipf(VAR_3, VAR_3, VAR_4, VAR_1, VAR_0);
}
