
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int* file; scalar_t__ linbuf; scalar_t__* qStatus; } ;
struct TYPE_5__ {int RoQFrameSize; scalar_t__ RoQPlayed; scalar_t__ ROQSize; scalar_t__ holdAtEnd; scalar_t__ status; int roq_id; int numQuads; char roqF0; char roqF1; int samplesPerLine; int ysize; int roq_flags; int startTime; int lastTime; int inMemory; scalar_t__ looping; int silent; int dirty; scalar_t__ screenDelta; scalar_t__ buf; int (* VQ0 ) (int*,int*) ;int * t; int normalBuffer0; int (* VQ1 ) (int*,int*) ;int iFile; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;






 int FUNC_3 (int*,short*,int,int ,unsigned short) ;
 int FUNC_4 (int*,short*,int,int ,unsigned short) ;
 int FUNC_5 (char,char) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int,int,int*,float) ;
 int FUNC_8 () ;
 int FUNC_9 (int*,int,int,int ) ;


 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_10 (int*,unsigned short) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int*,int*) ;
 int FUNC_14 (int*,int*) ;

__attribute__((used)) static void FUNC_15(void)
{
 byte *VAR_10;
        short VAR_11[32768];
        int VAR_12;

 if (VAR_5 < 0) return;

 FUNC_9( VAR_2.file, VAR_3[VAR_5].RoQFrameSize+8, 1, VAR_3[VAR_5].iFile );
 if ( VAR_3[VAR_5].RoQPlayed >= VAR_3[VAR_5].ROQSize ) {
  if (VAR_3[VAR_5].holdAtEnd==VAR_6) {
   if (VAR_3[VAR_5].looping) {
    FUNC_6();
   } else {
    VAR_3[VAR_5].status = VAR_0;
   }
  } else {
   VAR_3[VAR_5].status = VAR_1;
  }
  return;
 }

 VAR_10 = VAR_2.file;



redump:
 switch(VAR_3[VAR_5].roq_id)
 {
  case 130:
   if ((VAR_3[VAR_5].numQuads&1)) {
    VAR_3[VAR_5].normalBuffer0 = VAR_3[VAR_5].t[1];
    FUNC_5( VAR_3[VAR_5].roqF0, VAR_3[VAR_5].roqF1 );
    VAR_3[VAR_5].VQ1( (byte *)VAR_2.qStatus[1], VAR_10);
    VAR_3[VAR_5].buf = VAR_2.linbuf + VAR_3[VAR_5].screenDelta;
   } else {
    VAR_3[VAR_5].normalBuffer0 = VAR_3[VAR_5].t[0];
    FUNC_5( VAR_3[VAR_5].roqF0, VAR_3[VAR_5].roqF1 );
    VAR_3[VAR_5].VQ0( (byte *)VAR_2.qStatus[0], VAR_10 );
    VAR_3[VAR_5].buf = VAR_2.linbuf;
   }
   if (VAR_3[VAR_5].numQuads == 0) {
    FUNC_2(VAR_2.linbuf+VAR_3[VAR_5].screenDelta, VAR_2.linbuf, VAR_3[VAR_5].samplesPerLine*VAR_3[VAR_5].ysize);
   }
   VAR_3[VAR_5].numQuads++;
   VAR_3[VAR_5].dirty = VAR_7;
   break;
  case 135:
   FUNC_10( VAR_10, (unsigned short)VAR_3[VAR_5].roq_flags );
   break;
  case 129:
   if (!VAR_3[VAR_5].silent) {
    VAR_12 = FUNC_3( VAR_10, VAR_11, VAR_3[VAR_5].RoQFrameSize, 0, (unsigned short)VAR_3[VAR_5].roq_flags);
                                FUNC_7( VAR_12, 22050, 2, 1, (byte *)VAR_11, 1.0f );
   }
   break;
  case 128:
   if (!VAR_3[VAR_5].silent) {
    if (VAR_3[VAR_5].numQuads == -1) {
     FUNC_8();
     VAR_8 = VAR_9;
    }
    VAR_12 = FUNC_4( VAR_10, VAR_11, VAR_3[VAR_5].RoQFrameSize, 0, (unsigned short)VAR_3[VAR_5].roq_flags);
                                FUNC_7( VAR_12, 22050, 2, 2, (byte *)VAR_11, 1.0f );
   }
   break;
  case 132:
   if (VAR_3[VAR_5].numQuads == -1) {
    FUNC_11( VAR_10 );
    FUNC_12( 0, 0 );

    VAR_3[VAR_5].startTime = VAR_3[VAR_5].lastTime = FUNC_0()*VAR_4->value;
   }
   if (VAR_3[VAR_5].numQuads != 1) VAR_3[VAR_5].numQuads = 0;
   break;
  case 134:
   VAR_3[VAR_5].inMemory = VAR_3[VAR_5].roq_flags;
   VAR_3[VAR_5].RoQFrameSize = 0;
   break;
  case 133:
   VAR_3[VAR_5].RoQFrameSize = 0;
   break;
  case 131:
   break;
  default:
   VAR_3[VAR_5].status = VAR_0;
   break;
 }



 if ( VAR_3[VAR_5].RoQPlayed >= VAR_3[VAR_5].ROQSize ) {
  if (VAR_3[VAR_5].holdAtEnd==VAR_6) {
   if (VAR_3[VAR_5].looping) {
    FUNC_6();
   } else {
    VAR_3[VAR_5].status = VAR_0;
   }
  } else {
   VAR_3[VAR_5].status = VAR_1;
  }
  return;
 }

 VAR_10 += VAR_3[VAR_5].RoQFrameSize;
 VAR_3[VAR_5].roq_id = VAR_10[0] + VAR_10[1]*256;
 VAR_3[VAR_5].RoQFrameSize = VAR_10[2] + VAR_10[3]*256 + VAR_10[4]*65536;
 VAR_3[VAR_5].roq_flags = VAR_10[6] + VAR_10[7]*256;
 VAR_3[VAR_5].roqF0 = (char)VAR_10[7];
 VAR_3[VAR_5].roqF1 = (char)VAR_10[6];

 if (VAR_3[VAR_5].RoQFrameSize>65536||VAR_3[VAR_5].roq_id==0x1084) {
  FUNC_1("roq_size>65536||roq_id==0x1084\n");
  VAR_3[VAR_5].status = VAR_0;
  if (VAR_3[VAR_5].looping) {
   FUNC_6();
  }
  return;
 }
 if (VAR_3[VAR_5].inMemory && (VAR_3[VAR_5].status != VAR_0)) { VAR_3[VAR_5].inMemory--; VAR_10 += 8; goto redump; }





 VAR_3[VAR_5].RoQPlayed += VAR_3[VAR_5].RoQFrameSize+8;
}
