
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (int *) ;
 int * VAR_10 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int *VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14;
 int VAR_15 = VAR_2;
 for (VAR_13 = VAR_14 = 1; VAR_13 < *VAR_11; VAR_13++) {
  if (FUNC_5(VAR_12[VAR_13], "-af80") == 0) {
   VAR_0 = VAR_3;
  }
  else {
    if (FUNC_5(VAR_12[VAR_13], "-help") == 0) {
     VAR_15 = VAR_3;
    FUNC_2("\t-af80            Emulate the Austin Franklin 80 column board");
   }
   VAR_12[VAR_14++] = VAR_12[VAR_13];
  }
 }
 *VAR_11 = VAR_14;

 if (VAR_15)
  return VAR_3;

 if (VAR_0) {
  FUNC_2("Austin Franklin 80 enabled");
  VAR_7 = (UBYTE *)FUNC_3(0x1000);
  if (!FUNC_1(VAR_8, VAR_7, 0x1000)) {
   FUNC_4(VAR_7);
   VAR_7 = ((void*)0);
   VAR_0 = VAR_2;
   FUNC_2("Couldn't load Austin Franklin ROM image");
   return VAR_2;
  }
  else {
   FUNC_2("loaded Austin Franklin rom image");
  }
  VAR_5 = (UBYTE *)FUNC_3(0x1000);
  if (!FUNC_1(VAR_6, VAR_5, 0x1000)) {
   FUNC_4(VAR_5);
   FUNC_4(VAR_7);
   VAR_5 = VAR_7 = ((void*)0);
   VAR_0 = VAR_2;
   FUNC_2("Couldn't load Austin Franklin charset image");
   return VAR_2;
  }
  else {
   FUNC_2("loaded Austin Franklin charset image");
  }
  VAR_9 = (UBYTE *)FUNC_3(0x800);
  VAR_4 = (UBYTE *)FUNC_3(0x800);
  FUNC_0();


  for (VAR_13=0; VAR_13<16; VAR_13++ ) {
   VAR_14=VAR_13;
   VAR_14 = (VAR_14&0x0a) + ((VAR_14&0x01) << 2) + ((VAR_14&0x04) >> 2);
   VAR_1[VAR_13] = VAR_10[VAR_14];
  }
 }

 return VAR_3;
}
