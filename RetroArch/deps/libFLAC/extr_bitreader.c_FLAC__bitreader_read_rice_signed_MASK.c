
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buffer; } ;
typedef unsigned int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned int*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int*) ;

FLAC__bool FUNC_3(FLAC__BitReader *VAR_0, int *VAR_1, unsigned VAR_2)
{
 FLAC__uint32 VAR_3 = 0, VAR_4 = 0;
 unsigned VAR_5;

 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->buffer);
 FUNC_0(VAR_2 <= 31);


 if(!FUNC_2(VAR_0, &VAR_4))
  return 0;


 if(!FUNC_1(VAR_0, &VAR_3, VAR_2))
  return 0;


 VAR_5 = (VAR_4 << VAR_2) | VAR_3;
 if(VAR_5 & 1)
  *VAR_1 = -((int)(VAR_5 >> 1)) - 1;
 else
  *VAR_1 = (int)(VAR_5 >> 1);

 return 1;
}
