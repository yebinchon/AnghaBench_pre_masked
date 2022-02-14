
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int model; scalar_t__ sof_read; } ;
struct gspca_dev {TYPE_1__** urb; int dev; } ;
struct TYPE_2__ {int pipe; } ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 switch (VAR_1->model) {
 case 132:
 case 131:
  FUNC_0(VAR_0, 0x0001, 0x0114);

 case 130:
 case 128:
  FUNC_0(VAR_0, 0x00c0, 0x010c);
  FUNC_1(VAR_0->dev, VAR_0->urb[0]->pipe);
  break;
 case 129:
 case 133:
  FUNC_0(VAR_0, 0x0001, 0x0114);
  FUNC_0(VAR_0, 0x00c0, 0x010c);
  FUNC_1(VAR_0->dev, VAR_0->urb[0]->pipe);

  FUNC_0(VAR_0, 0x0001, 0x0113);
  break;
 }

 VAR_1->sof_read = 0;

 return 0;
}
