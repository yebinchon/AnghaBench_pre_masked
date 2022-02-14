
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buffer; int consumed_bits; } ;
typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_3 (int,unsigned int) ;

FLAC__bool FUNC_4(FLAC__BitReader *VAR_0, unsigned VAR_1)
{




 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->buffer);

 if(VAR_1 > 0) {
  const unsigned VAR_2 = VAR_0->consumed_bits & 7;
  unsigned VAR_3;
  FLAC__uint32 VAR_4;

  if(VAR_2 != 0) {
   VAR_3 = FUNC_3(8-VAR_2, VAR_1);
   if(!FUNC_1(VAR_0, &VAR_4, VAR_3))
    return 0;
   VAR_1 -= VAR_3;
  }
  VAR_3 = VAR_1 / 8;
  if(VAR_3 > 0) {
   if(!FUNC_2(VAR_0, VAR_3))
    return 0;
   VAR_1 %= 8;
  }
  if(VAR_1 > 0) {
   if(!FUNC_1(VAR_0, &VAR_4, VAR_1))
    return 0;
  }
 }

 return 1;
}
