
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int devicename; TYPE_1__* channel; } ;
struct TYPE_3__ {int l2_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,...) ;
 TYPE_2__** VAR_5 ;
 int FUNC_2 (int,int ,int ,int ,int ,unsigned char,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(int VAR_6, unsigned long VAR_7)
{
 int VAR_8 =0;
 int VAR_9,VAR_10;

 if(!FUNC_0(VAR_6)) {
  FUNC_1("Invalid param: %d is not a valid card id\n", VAR_6);
  return -VAR_1;
 }
 VAR_9 = VAR_7 >> 8;
 VAR_10 = VAR_7 & 0xff;
 VAR_5[VAR_6]->channel[VAR_10].l2_proto = VAR_9;




 FUNC_1("%s: Sending GetFrameFormat for channel %d\n",
  VAR_5[VAR_6]->devicename, VAR_10+1);
 VAR_8 = FUNC_2(VAR_6, VAR_0, VAR_4,
     VAR_3,
     VAR_2,
     (unsigned char)VAR_10+1,
     1,
     (unsigned int *) VAR_9);
 if(VAR_8)
  return VAR_8;
 return 0;
}
