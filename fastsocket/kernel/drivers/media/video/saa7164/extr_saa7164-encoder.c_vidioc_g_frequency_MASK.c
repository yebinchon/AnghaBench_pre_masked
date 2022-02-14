
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct saa7164_port {int freq; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
 struct v4l2_frequency *VAR_3)
{
 struct saa7164_encoder_fh *VAR_4 = VAR_1->private_data;
 struct saa7164_port *VAR_5 = VAR_4->port;

 VAR_3->type = VAR_0;
 VAR_3->frequency = VAR_5->freq;

 return 0;
}
