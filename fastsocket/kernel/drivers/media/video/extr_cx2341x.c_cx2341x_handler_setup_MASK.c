
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx2341x_handler {int height; int width; int port; int hdl; int video_encoding; int is_50hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cx2341x_handler*,int ,int,int,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cx2341x_handler *VAR_4)
{
 int VAR_5 = VAR_4->height;
 int VAR_6 = VAR_4->width;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_2, 2, VAR_4->port, 0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_4, VAR_0, 1, VAR_4->is_50hz);
 if (VAR_7)
  return VAR_7;

 if (FUNC_1(VAR_4->video_encoding) == VAR_3) {
  VAR_6 /= 2;
  VAR_5 /= 2;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_1, 2, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;
 return FUNC_2(&VAR_4->hdl);
}
