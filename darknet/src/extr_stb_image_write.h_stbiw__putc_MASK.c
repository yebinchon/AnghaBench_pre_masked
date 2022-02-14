
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(stbi__write_context *VAR_0, unsigned char VAR_1)
{
   VAR_0->func(VAR_0->context, &VAR_1, 1);
}
