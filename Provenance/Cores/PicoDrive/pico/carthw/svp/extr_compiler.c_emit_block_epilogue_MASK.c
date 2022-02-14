
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int iram_context; } ;
struct TYPE_4__ {TYPE_1__ drc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 TYPE_2__* VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void *FUNC_6(int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 void *VAR_13 = ((void*)0);

 if (VAR_9 > 0xff) {
  FUNC_1(VAR_1, "large cycle count: %i\n", VAR_9);
  VAR_9 = 0xff;
 }
 FUNC_0(11,11,0,VAR_9);

 if (VAR_10 < 0 || (VAR_12 >= 0x400 && VAR_11 < 0x400)) {

  FUNC_3(VAR_6);
 }
 else if (VAR_10 == VAR_0) {
  u32 *VAR_14 = (VAR_11 < 0x400) ?
   VAR_5[VAR_3->drc.iram_context * VAR_2 + VAR_11] :
   VAR_4[VAR_11];
  if (VAR_14 != ((void*)0))
   FUNC_3(VAR_14);
  else {
   int VAR_15 = FUNC_3(VAR_6);
   VAR_13 = VAR_8;

   VAR_8 -= VAR_15;
  }
 }
 else {
  u32 *VAR_16 = (VAR_11 < 0x400) ?
   VAR_5[VAR_3->drc.iram_context * VAR_2 + VAR_11] :
   VAR_4[VAR_11];
  u32 *VAR_17 = (VAR_12 < 0x400) ?
   VAR_5[VAR_3->drc.iram_context * VAR_2 + VAR_12] :
   VAR_4[VAR_12];
  if (VAR_16 != ((void*)0))
       FUNC_4(VAR_10, VAR_16);
  if (VAR_17 != ((void*)0))
       FUNC_4(FUNC_5(VAR_10), VAR_17);


  if (VAR_16 == ((void*)0))
   FUNC_2(VAR_10, VAR_7);
  if (VAR_17 == ((void*)0))
   FUNC_2(FUNC_5(VAR_10), VAR_7);





 }

 if (VAR_13 == ((void*)0))
  VAR_13 = VAR_8;

 return VAR_13;
}
