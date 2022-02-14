
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int video; int * vsram; int * cram; int * vram; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int,int,void*) ;
 int FUNC_2 (void*,int,int ) ;
 void* FUNC_3 (char const*,int ) ;
 int FUNC_4 (void*) ;

int FUNC_5(const char *VAR_3)
{
  void *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_3(VAR_3, 0);
  if (VAR_4 == ((void*)0))
    return -1;

  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 != 0) {

    FUNC_2(VAR_4, 0x10020, VAR_2);
    FUNC_1(VAR_0.vram, 1, sizeof(VAR_0.vram), VAR_4);
    FUNC_2(VAR_4, 0x2000, VAR_1);
    FUNC_1(VAR_0.cram, 1, sizeof(VAR_0.cram), VAR_4);
    FUNC_1(VAR_0.vsram, 1, sizeof(VAR_0.vsram), VAR_4);
    FUNC_2(VAR_4, 0x221a0, VAR_2);
    FUNC_1(&VAR_0.video, 1, sizeof(VAR_0.video), VAR_4);
  }
  FUNC_0(VAR_4);
  return 0;
}
