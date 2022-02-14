
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stbi_write_func ;
struct TYPE_3__ {void* context; int * func; } ;
typedef TYPE_1__ stbi__write_context ;



__attribute__((used)) static void FUNC_0(stbi__write_context *VAR_0, stbi_write_func *VAR_1, void *VAR_2)
{
   VAR_0->func = VAR_1;
   VAR_0->context = VAR_2;
}
