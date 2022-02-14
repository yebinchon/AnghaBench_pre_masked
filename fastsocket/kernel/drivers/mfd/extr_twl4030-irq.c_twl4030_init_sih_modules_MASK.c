
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sih {int bytes_ixr; TYPE_1__* mask; int module; scalar_t__ set_cor; int name; int control_offset; } ;
struct TYPE_2__ {int isr_offset; int imr_offset; } ;


 int FUNC_0 (struct sih*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*,int,int ,char*) ;
 struct sih* VAR_3 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(unsigned VAR_4)
{
 const struct sih *VAR_5;
 u8 VAR_6[4];
 int VAR_7;
 int VAR_8;


 if (VAR_4 > 1)
  return -VAR_0;

 VAR_2 = VAR_4;


 FUNC_1(VAR_6, 0xff, sizeof VAR_6);
 VAR_5 = VAR_3;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++, VAR_5++) {


  if (!VAR_5->bytes_ixr)
   continue;

  VAR_8 = FUNC_4(VAR_5->module, VAR_6,
    VAR_5->mask[VAR_4].imr_offset, VAR_5->bytes_ixr);
  if (VAR_8 < 0)
   FUNC_2("twl4030: err %d initializing %s %s\n",
     VAR_8, VAR_5->name, "IMR");
  if (VAR_5->set_cor) {
   VAR_8 = FUNC_5(VAR_5->module,
     VAR_1,
     VAR_5->control_offset);
   if (VAR_8 < 0)
    FUNC_2("twl4030: err %d initializing %s %s\n",
      VAR_8, VAR_5->name, "SIH_CTRL");
  }
 }

 VAR_5 = VAR_3;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++, VAR_5++) {
  u8 VAR_9[4];
  int VAR_10;


  if (!VAR_5->bytes_ixr)
   continue;






  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_8 = FUNC_3(VAR_5->module, VAR_9,
    VAR_5->mask[VAR_4].isr_offset, VAR_5->bytes_ixr);
   if (VAR_8 < 0)
    FUNC_2("twl4030: err %d initializing %s %s\n",
     VAR_8, VAR_5->name, "ISR");

   if (!VAR_5->set_cor)
    VAR_8 = FUNC_4(VAR_5->module, VAR_6,
     VAR_5->mask[VAR_4].isr_offset,
     VAR_5->bytes_ixr);



  }
 }

 return 0;
}
