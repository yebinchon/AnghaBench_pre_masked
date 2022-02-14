
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_4__ {int io_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_2(atom_exec_context *VAR_6, int *VAR_7, int VAR_8)
{
 int VAR_9;
 switch (VAR_8) {
 case 130:
  VAR_9 = FUNC_1(*VAR_7);
  if (VAR_9 < VAR_2)
   FUNC_0("   port: %d (%s)\n", VAR_9, VAR_5[VAR_9]);
  else
   FUNC_0("   port: %d\n", VAR_9);
  if (!VAR_9)
   VAR_6->ctx->io_mode = VAR_1;
  else
   VAR_6->ctx->io_mode = VAR_0 | VAR_9;
  (*VAR_7) += 2;
  break;
 case 129:
  VAR_6->ctx->io_mode = VAR_3;
  (*VAR_7)++;
  break;
 case 128:
  VAR_6->ctx->io_mode = VAR_4;
  (*VAR_7)++;
  break;
 }
}
