
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int (* Error ) (int ,char*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1( unsigned *VAR_2, int VAR_3, int VAR_4, unsigned *VAR_5,
       int VAR_6, int VAR_7 ) {
 int VAR_8, VAR_9;
 unsigned *VAR_10, *VAR_11;
 unsigned VAR_12, VAR_13;
 unsigned VAR_14[2048], VAR_15[2048];
 byte *VAR_16, *VAR_17, *VAR_18, *VAR_19;

 if (VAR_6>2048)
  VAR_1.Error(VAR_0, "ResampleTexture: max width");

 VAR_13 = VAR_3*0x10000/VAR_6;

 VAR_12 = VAR_13>>2;
 for ( VAR_8=0 ; VAR_8<VAR_6 ; VAR_8++ ) {
  VAR_14[VAR_8] = 4*(VAR_12>>16);
  VAR_12 += VAR_13;
 }
 VAR_12 = 3*(VAR_13>>2);
 for ( VAR_8=0 ; VAR_8<VAR_6 ; VAR_8++ ) {
  VAR_15[VAR_8] = 4*(VAR_12>>16);
  VAR_12 += VAR_13;
 }

 for (VAR_8=0 ; VAR_8<VAR_7 ; VAR_8++, VAR_5 += VAR_6) {
  VAR_10 = VAR_2 + VAR_3*(int)((VAR_8+0.25)*VAR_4/VAR_7);
  VAR_11 = VAR_2 + VAR_3*(int)((VAR_8+0.75)*VAR_4/VAR_7);
  VAR_12 = VAR_13 >> 1;
  for (VAR_9=0 ; VAR_9<VAR_6 ; VAR_9++) {
   VAR_16 = (byte *)VAR_10 + VAR_14[VAR_9];
   VAR_17 = (byte *)VAR_10 + VAR_15[VAR_9];
   VAR_18 = (byte *)VAR_11 + VAR_14[VAR_9];
   VAR_19 = (byte *)VAR_11 + VAR_15[VAR_9];
   ((byte *)(VAR_5+VAR_9))[0] = (VAR_16[0] + VAR_17[0] + VAR_18[0] + VAR_19[0])>>2;
   ((byte *)(VAR_5+VAR_9))[1] = (VAR_16[1] + VAR_17[1] + VAR_18[1] + VAR_19[1])>>2;
   ((byte *)(VAR_5+VAR_9))[2] = (VAR_16[2] + VAR_17[2] + VAR_18[2] + VAR_19[2])>>2;
   ((byte *)(VAR_5+VAR_9))[3] = (VAR_16[3] + VAR_17[3] + VAR_18[3] + VAR_19[3])>>2;
  }
 }
}
