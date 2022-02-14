
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int page_count; scalar_t__* virtual; } ;
struct vino_framebuffer {TYPE_1__ desc_table; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vino_framebuffer *VAR_1) {
 unsigned char *VAR_2;
 unsigned int VAR_3, VAR_4;
 unsigned char VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->desc_table.page_count; VAR_3++) {
  VAR_2 = (unsigned char *)VAR_1->desc_table.virtual[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 4) {
   VAR_5 = VAR_2[0];
   VAR_2[0] = VAR_2[3];
   VAR_2[1] = VAR_2[2];
   VAR_2[2] = VAR_2[1];
   VAR_2[3] = VAR_5;
   VAR_2 += 4;
  }
 }
}
