
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; TYPE_1__* vsram; TYPE_1__* cram; TYPE_1__* vram; } ;
typedef int Bytef ;


 TYPE_2__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,unsigned long*,void*,unsigned long) ;

__attribute__((used)) static void FUNC_8(int VAR_4)
{
 void *VAR_5 = ((void*)0);

 if (!VAR_3 || ((VAR_0.video.reg[12]&1)^1) != VAR_4)
 {
  extern char VAR_6[], VAR_7[];
  extern int VAR_8, VAR_9;
  void *VAR_10 = VAR_4 ? VAR_6 : VAR_7;
  unsigned long VAR_11 = VAR_4 ? VAR_8 : VAR_9, VAR_12 = 65856;
  int VAR_13;
  VAR_13 = FUNC_7((Bytef *)VAR_1, &VAR_12, VAR_10, VAR_11);
  if (VAR_13 == 0)
  {
   if (VAR_3) VAR_5 = FUNC_1();
   FUNC_3(VAR_0.vram, VAR_1, sizeof(VAR_0.vram));
   FUNC_3(VAR_0.cram, (char *)VAR_1 + 0x10000, 0x40*2);
   FUNC_3(VAR_0.vsram, (char *)VAR_1 + 0x10080, 0x40*2);
   FUNC_3(&VAR_0.video,(char *)VAR_1 + 0x10100, 0x40);
  }
  else
   FUNC_2("uncompress returned %i\n", VAR_13);
 }

 FUNC_4(VAR_2, 0, 512*272*2/4);
 FUNC_0(0);
 FUNC_5(1, 0);

 if (VAR_5) FUNC_6(VAR_5);
}
