
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int chan; int in_bytes; scalar_t__ in; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int* VAR_5 ;
 void* FUNC_1 () ;
 int* VAR_6 ;
 TYPE_1__ VAR_7 ;
 void** VAR_8 ;
 void** VAR_9 ;

__attribute__((used)) static u32 FUNC_2()
{
 u32 VAR_10,VAR_11,VAR_12;
 u32 *VAR_13;
 u32 VAR_14 = VAR_5[14];

 FUNC_0();

 if(VAR_7.chan==-1) return VAR_14;

 VAR_9[VAR_7.chan] = FUNC_1();

 VAR_13 = (u32*)VAR_7.in;
 VAR_11 = (VAR_7.in_bytes/4);
 for(VAR_12=0;VAR_12<VAR_11;VAR_12++) VAR_13[VAR_12] = VAR_5[32+VAR_12];
 if(VAR_7.in_bytes&0x03) {
  VAR_10 = VAR_5[32+VAR_11];
  for(VAR_12=0;VAR_12<(VAR_7.in_bytes&0x03);VAR_12++) ((u8*)VAR_13)[(VAR_11*4)+VAR_12] = (VAR_10>>((3-VAR_12)*8))&0xff;
 }
 if(VAR_5[13]&VAR_0) {
  VAR_14 = (VAR_14>>((3-VAR_7.chan)*8))&0x0f;
  if(VAR_14&VAR_2 && !(VAR_6[VAR_7.chan]&VAR_4)) VAR_6[VAR_7.chan] = VAR_3;
  if(!VAR_14) VAR_14 = VAR_1;
 } else {
  VAR_8[VAR_7.chan] = FUNC_1();
  VAR_14 = 0;
 }

 VAR_7.chan = -1;
 return VAR_14;
}
