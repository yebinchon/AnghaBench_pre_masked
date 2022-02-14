
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct atom_context {scalar_t__ cmd_table; } ;
struct TYPE_4__ {int ps_shift; int start; int abort; int * ws; scalar_t__ last_jump; int * ps; struct atom_context* ctx; } ;
typedef TYPE_1__ atom_exec_context ;
struct TYPE_5__ {int arg; int (* func ) (TYPE_1__*,int*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,...) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_6 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static int FUNC_7(struct atom_context *VAR_13, int VAR_14, uint32_t * VAR_15)
{
 int VAR_16 = FUNC_0(VAR_13->cmd_table + 4 + 2 * VAR_14);
 int VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned char VAR_21;
 atom_exec_context VAR_22;
 int VAR_23 = 0;

 if (!VAR_16)
  return -VAR_8;

 VAR_17 = FUNC_0(VAR_16 + VAR_3);
 VAR_18 = FUNC_1(VAR_16 + VAR_4);
 VAR_19 = FUNC_1(VAR_16 + VAR_2) & VAR_1;
 VAR_20 = VAR_16 + VAR_0;

 FUNC_3(">> execute %04X (len %d, WS %d, PS %d)\n", VAR_16, VAR_17, VAR_18, VAR_19);

 VAR_22.ctx = VAR_13;
 VAR_22.ps_shift = VAR_19 / 4;
 VAR_22.start = VAR_16;
 VAR_22.ps = VAR_15;
 VAR_22.abort = 0;
 VAR_22.last_jump = 0;
 if (VAR_18)
  VAR_22.ws = FUNC_5(4 * VAR_18, VAR_9);
 else
  VAR_22.ws = ((void*)0);

 VAR_11++;
 while (1) {
  VAR_21 = FUNC_1(VAR_20++);
  if (VAR_21 < VAR_7)
   FUNC_3("%s @ 0x%04X\n", VAR_10[VAR_21], VAR_20 - 1);
  else
   FUNC_3("[%d] @ 0x%04X\n", VAR_21, VAR_20 - 1);
  if (VAR_22.abort) {
   FUNC_2("atombios stuck executing %04X (len %d, WS %d, PS %d) @ 0x%04X\n",
    VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 - 1);
   VAR_23 = -VAR_8;
   goto free;
  }

  if (VAR_21 < VAR_5 && VAR_21 > 0)
   VAR_12[VAR_21].func(&VAR_22, &VAR_20,
           VAR_12[VAR_21].arg);
  else
   break;

  if (VAR_21 == VAR_6)
   break;
 }
 VAR_11--;
 FUNC_3("<<\n");

free:
 if (VAR_18)
  FUNC_4(VAR_22.ws);
 return VAR_23;
}
