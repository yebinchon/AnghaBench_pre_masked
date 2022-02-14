
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int videosize; scalar_t__ user_data; } ;
struct qcm {size_t size; int height; int width; } ;
struct TYPE_2__ {int height; int width; int cmd; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct uvd*,int ) ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_1)
{
 int VAR_2;
 struct qcm *VAR_3 = (struct qcm *) VAR_1->user_data;

 FUNC_0(VAR_2, FUNC_2(VAR_1, VAR_0[VAR_3->size].cmd));
 VAR_3->width = VAR_0[VAR_3->size].width;
 VAR_3->height = VAR_0[VAR_3->size].height;
 VAR_1->videosize = FUNC_1(VAR_3->width, VAR_3->height);

 return 0;
}
