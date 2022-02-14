
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* file; } ;
struct TYPE_5__ {int startTime; int lastTime; int RoQPlayed; int roqFPS; int numQuads; int roq_id; int RoQFrameSize; int roq_flags; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_1( void )
{

 VAR_1[VAR_3].startTime = VAR_1[VAR_3].lastTime = FUNC_0()*VAR_2->value;

 VAR_1[VAR_3].RoQPlayed = 24;


 VAR_1[VAR_3].roqFPS = VAR_0.file[ 6] + VAR_0.file[ 7]*256;

 if (!VAR_1[VAR_3].roqFPS) VAR_1[VAR_3].roqFPS = 30;

 VAR_1[VAR_3].numQuads = -1;

 VAR_1[VAR_3].roq_id = VAR_0.file[ 8] + VAR_0.file[ 9]*256;
 VAR_1[VAR_3].RoQFrameSize = VAR_0.file[10] + VAR_0.file[11]*256 + VAR_0.file[12]*65536;
 VAR_1[VAR_3].roq_flags = VAR_0.file[14] + VAR_0.file[15]*256;

 if (VAR_1[VAR_3].RoQFrameSize > 65536 || !VAR_1[VAR_3].RoQFrameSize) {
  return;
 }

}
