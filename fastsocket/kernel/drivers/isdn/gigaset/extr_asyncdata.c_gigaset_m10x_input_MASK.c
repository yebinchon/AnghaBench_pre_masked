
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inbuf_t {unsigned int head; unsigned int tail; unsigned char* data; int inputstate; TYPE_1__* bcs; struct cardstate* cs; } ;
struct cardstate {scalar_t__ mstate; int dev; scalar_t__ dle; } ;
struct TYPE_2__ {scalar_t__ proto2; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned char,unsigned char*,unsigned int,struct inbuf_t*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;
 int FUNC_4 (unsigned char,unsigned char*,unsigned int,struct inbuf_t*) ;
 int FUNC_5 (unsigned char,unsigned char*,unsigned int,struct inbuf_t*) ;
 int FUNC_6 (unsigned char*,unsigned int,struct inbuf_t*) ;

void FUNC_7(struct inbuf_t *VAR_8)
{
 struct cardstate *VAR_9;
 unsigned VAR_10, VAR_11, VAR_12;
 unsigned char *VAR_13, VAR_14;
 int VAR_15;

 VAR_11 = VAR_8->head;
 VAR_10 = VAR_8->tail;
 FUNC_3(VAR_0, "buffer state: %u -> %u", VAR_11, VAR_10);

 if (VAR_11 != VAR_10) {
  VAR_9 = VAR_8->cs;
  VAR_13 = VAR_8->data + VAR_11;
  VAR_12 = (VAR_11 > VAR_10 ? VAR_7 : VAR_10) - VAR_11;
  FUNC_3(VAR_0, "processing %u bytes", VAR_12);

  while (VAR_12) {
   if (VAR_9->mstate == VAR_6) {
    VAR_15 = FUNC_6(VAR_13, VAR_12, VAR_8);
    VAR_13 += VAR_15;
    VAR_12 -= VAR_15;
   } else {
    VAR_14 = *VAR_13++;
    --VAR_12;
    if (VAR_14 == VAR_1 && (VAR_9->dle ||
        VAR_8->inputstate & VAR_3)) {
     if (!(VAR_8->inputstate & VAR_2)) {
      VAR_8->inputstate |= VAR_2;
      goto nextbyte;
     }

     VAR_8->inputstate &= ~VAR_2;
    }

    if (!(VAR_8->inputstate & VAR_2)) {


     if (VAR_8->inputstate & VAR_4)
      VAR_15 = FUNC_0(VAR_14, VAR_13, VAR_12, VAR_8);
     else if (VAR_8->bcs->proto2 == VAR_5)
      VAR_15 = FUNC_4(VAR_14, VAR_13, VAR_12, VAR_8);
     else
      VAR_15 = FUNC_5(VAR_14, VAR_13, VAR_12, VAR_8);

     VAR_13 += VAR_15;
     VAR_12 -= VAR_15;
    } else {
     VAR_8->inputstate &= ~VAR_2;
     switch (VAR_14) {
     case 'X':
      if (VAR_8->inputstate & VAR_4)
       FUNC_2(VAR_9->dev,
     "received <DLE> 'X' in command mode\n");
      VAR_8->inputstate |=
       VAR_4 | VAR_3;
      break;
     case '.':
      if (!(VAR_8->inputstate & VAR_4))
       FUNC_2(VAR_9->dev,
     "received <DLE> '.' in hdlc mode\n");
      VAR_8->inputstate &= VAR_9->dle ?
       ~(VAR_3|VAR_4)
       : ~VAR_3;
      break;

     default:
      FUNC_1(VAR_9->dev,
            "received 0x10 0x%02x!\n",
       (int) VAR_14);

     }
    }
   }
nextbyte:
   if (!VAR_12) {

    if (VAR_11 > VAR_10) {
     VAR_11 = 0;
     VAR_13 = VAR_8->data;
     VAR_12 = VAR_10;
    } else {
     VAR_11 = VAR_10;
     break;
    }
   }
  }

  FUNC_3(VAR_0, "setting head to %u", VAR_11);
  VAR_8->head = VAR_11;
 }
}
