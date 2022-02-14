
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t nAllocLen; size_t nFilledLen; scalar_t__ nFlags; scalar_t__ nOffset; int pBuffer; } ;
struct TYPE_11__ {size_t inputBufferHeaderCount; TYPE_2__* imageResizer; TYPE_1__* imageDecoder; int * pOutputBufferHeader; TYPE_4__** ppInputBufferHeader; } ;
struct TYPE_10__ {int outPort; int component; int handle; } ;
struct TYPE_9__ {int outPort; int component; int handle; } ;
typedef TYPE_3__ OPENMAX_JPEG_DECODER ;
typedef TYPE_4__ OMX_BUFFERHEADERTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 size_t VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,scalar_t__,int,int ,int) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int) ;
 int VAR_7 ;

int
FUNC_10(OPENMAX_JPEG_DECODER * VAR_8, char *VAR_9,
     size_t VAR_10)
{
    char *VAR_11 = VAR_9;


    size_t VAR_12 = 0;
    VAR_12 += VAR_10;
    int VAR_13 = 0;

    VAR_6 = 0;

    while (VAR_12 > 0) {

 OMX_BUFFERHEADERTYPE *VAR_14 =
     VAR_8->ppInputBufferHeader[VAR_6];


 VAR_6++;
 if (VAR_6 >= VAR_8->inputBufferHeaderCount)
     VAR_6 = 0;


 if (VAR_12 > VAR_14->nAllocLen)
     VAR_14->nFilledLen = VAR_14->nAllocLen;
 else
     VAR_14->nFilledLen = VAR_12;

 VAR_12 = VAR_12 - VAR_14->nFilledLen;


 FUNC_5(VAR_14->pBuffer, VAR_11, VAR_14->nFilledLen);



 VAR_11 = VAR_11 + VAR_14->nFilledLen;
 VAR_14->nOffset = 0;
 VAR_14->nFlags = 0;
 if (VAR_12 <= 0) {
     VAR_14->nFlags = VAR_2;
 }

 int VAR_15 =
     FUNC_0(VAR_8->imageDecoder->handle,
    VAR_14);

 if (VAR_15 != VAR_3) {
     FUNC_6("Empty input buffer");
     FUNC_2(VAR_7, "return code %x\n", VAR_15);
     return VAR_0;
 }

 int VAR_16 = 0;
 while ((VAR_16 == 0) && (VAR_8->pOutputBufferHeader == ((void*)0))) {
     if (VAR_8->pOutputBufferHeader == ((void*)0)) {
  VAR_15 =
      FUNC_4
      (VAR_8->imageDecoder->component,
       VAR_5,
       VAR_8->imageDecoder->outPort, 0, 0, 1, 0, 5);

  if (VAR_15 == 0) {
      VAR_15 = FUNC_7(VAR_8);
      if (VAR_15 != VAR_1)
   return VAR_15;
  }
     } else {
  VAR_15 =
      FUNC_3(VAR_8->imageDecoder->component,
       VAR_5,
       VAR_8->imageDecoder->outPort,
       0, 0, 1);
  if (VAR_15 == 0)
      FUNC_8(VAR_8);

     }


     if (VAR_14->nFilledLen == 0)
  VAR_16 = 1;

     if ((VAR_16 == 0)
  || (VAR_8->pOutputBufferHeader == ((void*)0)))
  FUNC_9(1);
 }


 if ((VAR_13 == 0) && (VAR_8->pOutputBufferHeader != ((void*)0))) {
     VAR_15 = FUNC_1(VAR_8->imageResizer->handle,
         VAR_8->pOutputBufferHeader);
     if (VAR_15 != VAR_3) {
  FUNC_6("Filling output buffer");
  FUNC_2(VAR_7, "Error code %x\n", VAR_15);
  return VAR_0;
     }

     VAR_13 = 1;
 }
    }







    int VAR_17 =
 FUNC_4(VAR_8->imageDecoder->component,
    VAR_4,
    VAR_8->imageDecoder->outPort, 1,
    VAR_2, 1,
    0, 2);
    if (VAR_17 != 0) {
 FUNC_2(VAR_7, "No EOS event on image decoder %d\n", VAR_17);
    }
    VAR_17 = FUNC_4(VAR_8->imageResizer->component,
      VAR_4,
      VAR_8->imageResizer->outPort, 1,
      VAR_2, 1, 0, 2);
    if (VAR_17 != 0) {
 FUNC_2(VAR_7, "No EOS event on image resizer %d\n", VAR_17);
    }
    return VAR_1;
}
