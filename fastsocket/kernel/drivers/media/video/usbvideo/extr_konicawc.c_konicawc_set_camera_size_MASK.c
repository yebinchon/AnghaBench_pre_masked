
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int videosize; scalar_t__ user_data; } ;
struct konicawc {size_t size; int width; int height; int yplanesz; int cur_frame_size; int maxline; } ;
struct TYPE_2__ {int width; int height; int cmd; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct uvd*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uvd *VAR_1)
{
 struct konicawc *VAR_2 = (struct konicawc *)VAR_1->user_data;

 FUNC_1(VAR_1, 0x2, VAR_0[VAR_2->size].cmd, 0x08);
 VAR_2->width = VAR_0[VAR_2->size].width;
 VAR_2->height = VAR_0[VAR_2->size].height;
 VAR_2->yplanesz = VAR_2->height * VAR_2->width;
 VAR_2->cur_frame_size = (VAR_2->yplanesz * 3) / 2;
 VAR_2->maxline = VAR_2->yplanesz / 256;
 VAR_1->videosize = FUNC_0(VAR_2->width, VAR_2->height);
}
