
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcbit_dev {TYPE_1__* dev_if; int id; } ;
struct TYPE_5__ {int arg; int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct pcbit_dev *VAR_5, char *VAR_6)
{
 int VAR_7;
 isdn_ctrl VAR_8;

 for (VAR_7=VAR_2; VAR_7<FUNC_0(VAR_6); VAR_7++)
 {
  VAR_4[VAR_7]=VAR_6[VAR_7];
  VAR_2 = (VAR_2 + 1) % VAR_1;
  if (VAR_2 == VAR_3)
   VAR_3 = (VAR_3 + 1) % VAR_1;
 }

 VAR_8.command=VAR_0;
 VAR_8.driver=VAR_5->id;
 VAR_8.arg=FUNC_0(VAR_6);
 VAR_5->dev_if->statcallb(&VAR_8);
}
