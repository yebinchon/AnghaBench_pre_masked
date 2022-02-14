
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
typedef int i2CmdHeader ;
typedef TYPE_2__* i2ChanStrPtr ;
struct TYPE_10__ {unsigned short Cbuf_strip; unsigned short Cbuf_stuff; unsigned char* Cbuf; int Cbuf_spinlock; } ;
struct TYPE_9__ {int debugBypassCount; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned char*,unsigned short) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned char*,unsigned short,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 unsigned short FUNC_6 (unsigned short,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_9(i2eBordStrPtr VAR_4)
{
 i2ChanStrPtr VAR_5;
 unsigned char *VAR_6;
 unsigned short VAR_7;
 unsigned short VAR_8;
 unsigned short VAR_9;
 unsigned short VAR_10 = 1;
 unsigned long VAR_11;

 int VAR_12 = 1000;



 while ( --VAR_12 && VAR_10 &&
   (((void*)0) != (VAR_5 = FUNC_2(VAR_4,VAR_3))))
 {
  FUNC_7(&VAR_5->Cbuf_spinlock, VAR_11);
  VAR_7 = VAR_5->Cbuf_strip;



  while (VAR_7 != VAR_5->Cbuf_stuff) {
   VAR_6 = &(VAR_5->Cbuf[VAR_7]);
   VAR_8 = FUNC_0(VAR_6) + sizeof(i2CmdHeader);
   VAR_9 = FUNC_6(VAR_8, 2);

   if (VAR_9 > 0) {
    if ( 0 == FUNC_4(VAR_4, VAR_6, VAR_9,0)) {
     VAR_10 = 0;
     FUNC_3(VAR_4, VAR_5, VAR_3);
     break;
    }
   }



   VAR_4->debugBypassCount++;

   VAR_6 += VAR_8;
   VAR_7 += VAR_8;
   if (VAR_7 >= VAR_0) {
    VAR_7 = 0;
    VAR_6 = VAR_5->Cbuf;
   }
  }


  VAR_5->Cbuf_strip = VAR_7;
  FUNC_8(&VAR_5->Cbuf_spinlock, VAR_11);
 }






}
