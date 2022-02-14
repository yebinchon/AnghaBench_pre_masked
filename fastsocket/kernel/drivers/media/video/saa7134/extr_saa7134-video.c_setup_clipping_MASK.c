
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; int width; int top; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;
struct saa7134_dev {int dummy; } ;
struct cliplist {int enable; int disable; void* position; } ;
typedef int row ;
typedef int col ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cliplist*,int ,int) ;
 int FUNC_2 (struct saa7134_dev*,int,struct cliplist*,int,char*) ;
 int FUNC_3 (struct cliplist*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct saa7134_dev *VAR_1, struct v4l2_clip *VAR_2,
     int VAR_3, int VAR_4)
{
 struct cliplist VAR_5[16], VAR_6[16];
 int VAR_7 = 0, VAR_8 = 0, VAR_9;
 int VAR_10 = VAR_4 ? 2 : 1;

 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_6, 0, sizeof(VAR_6));
 for (VAR_9 = 0; VAR_9 < VAR_3 && VAR_9 < 8; VAR_9++) {
  VAR_5[VAR_7].position = FUNC_0(VAR_2[VAR_9].c.left);
  VAR_5[VAR_7].enable = (1 << VAR_9);
  VAR_7++;
  VAR_5[VAR_7].position = FUNC_0(VAR_2[VAR_9].c.left+VAR_2[VAR_9].c.width);
  VAR_5[VAR_7].disable = (1 << VAR_9);
  VAR_7++;
  VAR_6[VAR_8].position = FUNC_0(VAR_2[VAR_9].c.top / VAR_10);
  VAR_6[VAR_8].enable = (1 << VAR_9);
  VAR_8++;
  VAR_6[VAR_8].position = FUNC_0((VAR_2[VAR_9].c.top + VAR_2[VAR_9].c.height)
      / VAR_10);
  VAR_6[VAR_8].disable = (1 << VAR_9);
  VAR_8++;
 }
 FUNC_3(VAR_5, VAR_7, sizeof VAR_5[0], VAR_0, ((void*)0));
 FUNC_3(VAR_6, VAR_8, sizeof VAR_6[0], VAR_0, ((void*)0));
 FUNC_2(VAR_1,0x380,VAR_5,VAR_7,"cols");
 FUNC_2(VAR_1,0x384,VAR_6,VAR_8,"rows");
 return 0;
}
