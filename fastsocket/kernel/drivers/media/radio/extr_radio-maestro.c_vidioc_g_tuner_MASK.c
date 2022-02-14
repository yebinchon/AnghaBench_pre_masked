
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rxsubchans; int signal; int audmode; int capability; int rangehigh; int rangelow; int type; int name; } ;
struct maestro {int lock; int tuned; scalar_t__ stereo; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct maestro*) ;
 int FUNC_3 (int ,char*,int) ;
 struct maestro* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_9, void *VAR_10,
     struct v4l2_tuner *VAR_11)
{
 struct maestro *VAR_12 = FUNC_4(VAR_9);

 if (VAR_11->index > 0)
  return -VAR_0;

 FUNC_0(&VAR_12->lock);
 FUNC_2(VAR_12);

 FUNC_3(VAR_11->name, "FM", sizeof(VAR_11->name));
 VAR_11->type = VAR_6;
 VAR_11->rangelow = VAR_2;
 VAR_11->rangehigh = VAR_1;
 VAR_11->rxsubchans = VAR_7 | VAR_8;
 VAR_11->capability = VAR_3;
 if (VAR_12->stereo)
  VAR_11->audmode = VAR_5;
 else
  VAR_11->audmode = VAR_4;
 VAR_11->signal = VAR_12->tuned;
 FUNC_1(&VAR_12->lock);
 return 0;
}
