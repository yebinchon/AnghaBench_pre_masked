
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;

void FUNC_4(stbi__write_context *VAR_0, int VAR_1, unsigned char VAR_2)
{
   unsigned char VAR_3 = FUNC_1(VAR_1+128);
   FUNC_0(VAR_1+128 <= 255);
   VAR_0->func(VAR_0->context, &VAR_3, 1);
   VAR_0->func(VAR_0->context, &VAR_2, 1);
}
