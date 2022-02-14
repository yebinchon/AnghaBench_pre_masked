
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_queryctrl {int id; } ;
struct saa7164_port {int encoder_params; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct file {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct v4l2_queryctrl*) ;
 int FUNC_2 (struct v4l2_queryctrl*,int ,int) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
 struct v4l2_queryctrl *VAR_5)
{
 struct saa7164_encoder_fh *VAR_6 = VAR_4;
 struct saa7164_port *VAR_7 = VAR_6->port;
 int VAR_8, VAR_9;
 u32 VAR_10 = VAR_5->id;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_9 = !!(VAR_10 & VAR_1);
 VAR_5->id = VAR_10 & ~VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_9) {
   if (VAR_5->id < VAR_2[VAR_8])
    VAR_5->id = VAR_2[VAR_8];
   else
    continue;
  }

  if (VAR_5->id == VAR_2[VAR_8])
   return FUNC_1(&VAR_7->encoder_params, VAR_5);

  if (VAR_5->id < VAR_2[VAR_8])
   break;
 }

 return -VAR_0;
}
