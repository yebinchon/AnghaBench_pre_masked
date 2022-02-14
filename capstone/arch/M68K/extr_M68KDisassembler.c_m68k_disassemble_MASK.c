
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int type; } ;
struct TYPE_18__ {TYPE_2__* operands; TYPE_1__ op_size; } ;
struct TYPE_17__ {size_t ir; unsigned int pc; TYPE_4__ extension; TYPE_5__* inst; } ;
typedef TYPE_3__ m68k_info ;
typedef TYPE_4__ cs_m68k ;
struct TYPE_19__ {int Opcode; } ;
struct TYPE_16__ {int type; } ;
struct TYPE_14__ {int (* instruction ) (TYPE_3__*) ;} ;
typedef TYPE_5__ MCInst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_13__* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 size_t FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 size_t FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static unsigned int FUNC_7(m68k_info *VAR_5, uint64_t VAR_6)
{
 MCInst *VAR_7 = VAR_5->inst;
 cs_m68k* VAR_8 = &VAR_5->extension;
 int VAR_9;
 unsigned int VAR_10;

 VAR_7->Opcode = VAR_0;

 FUNC_0();

 FUNC_2(VAR_8, 0, sizeof(cs_m68k));
 VAR_8->op_size.type = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9)
  VAR_8->operands[VAR_9].type = VAR_2;

 VAR_5->ir = FUNC_3(VAR_5);
 if (FUNC_1(VAR_5, FUNC_4(VAR_5) & 0xffff)) {
  VAR_5->ir = FUNC_5(VAR_5);
  VAR_4[VAR_5->ir].instruction(VAR_5);
 }

 VAR_10 = VAR_5->pc - (unsigned int)VAR_6;
 VAR_5->pc = (unsigned int)VAR_6;

 return VAR_10;
}
