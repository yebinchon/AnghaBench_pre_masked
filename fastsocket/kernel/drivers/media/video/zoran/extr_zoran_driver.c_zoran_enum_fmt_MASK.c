
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zoran {int dummy; } ;
struct v4l2_fmtdesc {int flags; int pixelformat; int description; int index; } ;
struct TYPE_2__ {int flags; int fourcc; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct zoran *VAR_5, struct v4l2_fmtdesc *VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9;

 for (VAR_8 = VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_4[VAR_9].flags & VAR_7 && VAR_8++ == VAR_6->index) {
   FUNC_0(VAR_6->description, VAR_4[VAR_9].name,
    sizeof(VAR_6->description) - 1);

   VAR_6->pixelformat = VAR_4[VAR_9].fourcc;
   if (VAR_4[VAR_9].flags & VAR_3)
    VAR_6->flags |= VAR_2;
   return 0;
  }
 }
 return -VAR_0;
}
