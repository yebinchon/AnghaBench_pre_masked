
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gspca_dev {int nframes; int memory; int * capt_file; scalar_t__ frsz; TYPE_1__* frame; int * frbuf; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, "frame free");
 if (VAR_2->frbuf != ((void*)0)) {
  FUNC_1(VAR_2->frbuf);
  VAR_2->frbuf = ((void*)0);
  for (VAR_3 = 0; VAR_3 < VAR_2->nframes; VAR_3++)
   VAR_2->frame[VAR_3].data = ((void*)0);
 }
 VAR_2->nframes = 0;
 VAR_2->frsz = 0;
 VAR_2->capt_file = ((void*)0);
 VAR_2->memory = VAR_1;
}
