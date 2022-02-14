
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int debug; } ;
struct ivtv_open_id {int prio; } ;
struct ivtv {int prio; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ivtv_open_id* FUNC_0 (int ) ;
 int VAR_3 ;
 long FUNC_1 (int *,int ) ;
 struct video_device* FUNC_2 (struct file*) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct ivtv *VAR_4, struct file *VAR_5,
  unsigned int VAR_6, unsigned long VAR_7)
{
 struct video_device *VAR_8 = FUNC_2(VAR_5);
 struct ivtv_open_id *VAR_9 = FUNC_0(VAR_5->private_data);
 long VAR_10;


 switch (VAR_6) {
 case 137:
 case 129:
 case 132:
 case 131:
 case 128:
 case 133:
 case 134:
 case 138:
 case 140:
 case 139:
 case 136:
 case 135:
 case 130:
 case 141:
  VAR_10 = FUNC_1(&VAR_4->prio, VAR_9->prio);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_3 & VAR_0)
  VAR_8->debug = VAR_1 | VAR_2;
 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7);
 VAR_8->debug = 0;
 return VAR_10;
}
