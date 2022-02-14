
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int* aLabel; int readOnly; int nOp; int nLabel; int db; TYPE_3__* aOp; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_5__ {int xAdvance; } ;
struct TYPE_7__ {size_t opcode; int opflags; int p5; int p2; int p1; void* p4type; TYPE_1__ p4; } ;
typedef TYPE_3__ Op ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int*) ;
 int* VAR_14 ;

__attribute__((used)) static void FUNC_2(Vdbe *VAR_15, int *VAR_16){
  int VAR_17;
  int VAR_18 = *VAR_16;
  Op *VAR_19;
  int *VAR_20 = VAR_15->aLabel;
  VAR_15->readOnly = 1;
  for(VAR_19=VAR_15->aOp, VAR_17=VAR_15->nOp-1; VAR_17>=0; VAR_17--, VAR_19++){
    u8 VAR_21 = VAR_19->opcode;

    VAR_19->opflags = VAR_14[VAR_21];
    if( VAR_21==VAR_2 || VAR_21==VAR_1 ){
      if( VAR_19->p5>VAR_18 ) VAR_18 = VAR_19->p5;
    }else if( (VAR_21==VAR_7 && VAR_19->p2!=0) || VAR_21==VAR_10 ){
      VAR_15->readOnly = 0;

    }else if( VAR_21==VAR_9 ){
      if( VAR_19->p2>VAR_18 ) VAR_18 = VAR_19->p2;
    }else if( VAR_21==VAR_8 ){
      int VAR_22;
      FUNC_0( VAR_15->nOp - VAR_17 >= 3 );
      FUNC_0( VAR_19[-1].opcode==VAR_3 );
      VAR_22 = VAR_19[-1].p1;
      if( VAR_22>VAR_18 ) VAR_18 = VAR_22;

    }else if( VAR_21==VAR_4 || VAR_21==VAR_6 ){
      VAR_19->p4.xAdvance = VAR_12;
      VAR_19->p4type = VAR_11;
    }else if( VAR_21==VAR_5 ){
      VAR_19->p4.xAdvance = VAR_13;
      VAR_19->p4type = VAR_11;
    }

    if( (VAR_19->opflags & VAR_0)!=0 && VAR_19->p2<0 ){
      FUNC_0( -1-VAR_19->p2<VAR_15->nLabel );
      VAR_19->p2 = VAR_20[-1-VAR_19->p2];
    }
  }
  FUNC_1(VAR_15->db, VAR_15->aLabel);
  VAR_15->aLabel = 0;

  *VAR_16 = VAR_18;
}
