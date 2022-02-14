
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct sd*) ;int (* dump ) (struct sd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4;

 FUNC_0(VAR_0, "Initializing camera");



 FUNC_1(250);

 VAR_4 = VAR_3->sensor->init(VAR_3);

 if (VAR_1 && VAR_3->sensor->dump)
  VAR_3->sensor->dump(VAR_3);

 return (VAR_4 < 0) ? VAR_4 : 0;
}
