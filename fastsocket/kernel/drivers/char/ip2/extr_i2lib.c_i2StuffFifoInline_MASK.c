
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_3__* i2eBordStrPtr ;
typedef int i2DataHeader ;
typedef int i2CmdHeader ;
typedef TYPE_4__* i2ChanStrPtr ;
struct TYPE_12__ {unsigned short room; unsigned short asof; } ;
struct TYPE_11__ {unsigned short tx; } ;
struct TYPE_14__ {unsigned short Obuf_strip; unsigned short Obuf_stuff; unsigned char* Obuf; unsigned short Obuf_char_count; scalar_t__ pTTY; int Obuf_spinlock; TYPE_2__ outfl; TYPE_1__ icount; } ;
struct TYPE_13__ {unsigned short i2Dbuf_strip; int debugInlineCount; int i2eFifoRemains; int i2Dbuf_stuff; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (unsigned char*) ;
 unsigned short FUNC_1 (unsigned short) ;
 unsigned short FUNC_2 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (char*,unsigned char*,unsigned short) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned char*,unsigned short,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,int,int,...) ;
 unsigned short FUNC_10 (unsigned short,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_13(i2eBordStrPtr VAR_10)
{
 i2ChanStrPtr VAR_11;
 unsigned char *VAR_12;
 unsigned short VAR_13;
 unsigned short VAR_14;
 unsigned short VAR_15;
 unsigned short VAR_16 = 1;
 unsigned short VAR_17;
 unsigned long VAR_18;

 int VAR_19 = 1000;
 int VAR_20;

 FUNC_9 (VAR_3, VAR_5, VAR_1, 3, VAR_10->i2eFifoRemains,
   VAR_10->i2Dbuf_strip, VAR_10->i2Dbuf_stuff );



 while ( --VAR_19 && VAR_16 &&
   (((void*)0) != (VAR_11 = FUNC_5(VAR_10,VAR_7))) )
 {
  FUNC_11(&VAR_11->Obuf_spinlock, VAR_18);
  VAR_13 = VAR_11->Obuf_strip;

  FUNC_9 (VAR_0, VAR_5, 3, 2, VAR_13, VAR_11->Obuf_stuff );


  VAR_20 = 1000;
  while ( --VAR_20 && VAR_13 != VAR_11->Obuf_stuff) {
   VAR_12 = &(VAR_11->Obuf[VAR_13]);




   if (FUNC_3(VAR_12) == VAR_9) {
    VAR_17 = FUNC_2(VAR_12);
    VAR_14 = VAR_17 + sizeof(i2DataHeader);
   } else {
    VAR_17 = FUNC_0(VAR_12);
    VAR_14 = VAR_17 + sizeof(i2CmdHeader);
   }
   VAR_17 = FUNC_1(VAR_17);
   VAR_15 = FUNC_10(VAR_14, 2);

   FUNC_9 (VAR_0, VAR_5, 4, 2, VAR_10->i2eFifoRemains, VAR_15 );






    FUNC_9 (VAR_0, VAR_5, 5, 2, VAR_11->outfl.room, VAR_17 );

   if (VAR_11->outfl.room <= VAR_17) {

    FUNC_6(VAR_10, VAR_11, VAR_6);
    VAR_16 = 0;
    break;
   }
   if ( (VAR_15 > 0)
    && ( 0 == FUNC_7(VAR_10, VAR_12, VAR_15, 128))) {

    VAR_16 = 0;
    FUNC_6(VAR_10, VAR_11, VAR_7);
    break;
   }



   VAR_10->debugInlineCount++;

   VAR_11->icount.tx += VAR_17;

   VAR_11->outfl.room -= VAR_17;
   VAR_11->outfl.asof += VAR_17;
   if (FUNC_3(VAR_12) == VAR_9) {
    VAR_11->Obuf_char_count -= FUNC_2(VAR_12);
   }
   VAR_12 += VAR_14;
   VAR_13 += VAR_14;

   FUNC_9 (VAR_0, VAR_5, 6, 2, VAR_13, VAR_11->Obuf_strip);

   if (VAR_13 >= VAR_8) {
    VAR_13 = 0;
    VAR_12 = VAR_11->Obuf;

    FUNC_9 (VAR_0, VAR_5, 7, 1, VAR_13 );

   }
  }
  if ( !VAR_20 ) {
   FUNC_9 (VAR_0, VAR_2, 3, 0 );
  }


  VAR_11->Obuf_strip = VAR_13;
  FUNC_12(&VAR_11->Obuf_spinlock, VAR_18);
  if ( VAR_16 )
  {

   FUNC_9 (VAR_0, VAR_5, 8, 0 );

   if ( VAR_11->pTTY ) {
    FUNC_8(VAR_11->pTTY);
   }
  }
 }

 if ( !VAR_19 ) {
  FUNC_9 (VAR_3, VAR_2, 4, 0 );
 }

 FUNC_9 (VAR_3, VAR_5, VAR_4, 1,VAR_10->i2Dbuf_strip);
}
