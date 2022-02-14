
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int video; int * vsram; int * cram; int * vram; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 unsigned char *VAR_2 = VAR_1;
 FUNC_1(VAR_0.vram, VAR_2, sizeof(VAR_0.vram));
 FUNC_1(VAR_0.cram, VAR_2 + sizeof(VAR_0.vram), sizeof(VAR_0.cram));
 FUNC_1(VAR_0.vsram, VAR_2 + sizeof(VAR_0.vram) + sizeof(VAR_0.cram), sizeof(VAR_0.vsram));
 FUNC_1(&VAR_0.video,VAR_2 + sizeof(VAR_0.vram) + sizeof(VAR_0.cram) + sizeof(VAR_0.vsram), sizeof(VAR_0.video));
 FUNC_0(VAR_1);
}
