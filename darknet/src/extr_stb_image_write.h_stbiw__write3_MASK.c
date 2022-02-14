
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(stbi__write_context *VAR_0, unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
   unsigned char VAR_4[3];
   VAR_4[0] = VAR_1, VAR_4[1] = VAR_2, VAR_4[2] = VAR_3;
   VAR_0->func(VAR_0->context, VAR_4, 3);
}
