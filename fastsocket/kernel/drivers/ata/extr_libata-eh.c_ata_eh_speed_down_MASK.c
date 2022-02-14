
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_link {TYPE_1__* ap; } ;
struct ata_device {int flags; int spdn_cnt; scalar_t__ xfer_shift; scalar_t__ class; int ering; } ;
struct TYPE_2__ {scalar_t__ cbl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;


 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct ata_link* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,char*) ;
 scalar_t__ FUNC_2 (struct ata_device*,int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int*) ;
 unsigned int FUNC_4 (struct ata_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (struct ata_link*,int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct ata_device *VAR_13,
    unsigned int VAR_14, unsigned int VAR_15)
{
 struct ata_link *VAR_16 = FUNC_0(VAR_13);
 int VAR_17 = 0;
 unsigned int VAR_18;
 unsigned int VAR_19 = 0;


 if (FUNC_3(VAR_14, VAR_15, &VAR_17) == 0)
  return 0;


 FUNC_6(&VAR_13->ering, VAR_14, VAR_15);
 VAR_18 = FUNC_4(VAR_13);


 if ((VAR_18 & VAR_9) &&
     (VAR_13->flags & (VAR_4 | VAR_2 |
      VAR_3)) == VAR_2) {
  VAR_13->flags |= VAR_3;
  FUNC_1(VAR_13, VAR_12,
          "NCQ disabled due to excessive errors\n");
  goto done;
 }


 if (VAR_18 & VAR_10) {

  if (FUNC_7(VAR_16, 0) == 0) {
   VAR_19 |= VAR_6;
   goto done;
  }


  if (VAR_13->spdn_cnt < 2) {
   static const int VAR_20[] =
    { 130, 131 };
   static const int VAR_21[] =
    { 128, 129 };
   int VAR_22;

   if (VAR_13->xfer_shift != VAR_11)
    VAR_22 = VAR_20[VAR_13->spdn_cnt];
   else
    VAR_22 = VAR_21[VAR_13->spdn_cnt];

   VAR_13->spdn_cnt++;

   if (FUNC_2(VAR_13, VAR_22) == 0) {
    VAR_19 |= VAR_6;
    goto done;
   }
  }
 }




 if ((VAR_18 & VAR_7) && (VAR_13->spdn_cnt >= 2) &&
     (VAR_16->ap->cbl != VAR_0 || VAR_13->class == VAR_1) &&
     (VAR_13->xfer_shift != VAR_11)) {
  if (FUNC_2(VAR_13, VAR_5) == 0) {
   VAR_13->spdn_cnt = 0;
   VAR_19 |= VAR_6;
   goto done;
  }
 }

 return 0;
 done:

 if (!(VAR_18 & VAR_8))
  FUNC_5(&VAR_13->ering);
 return VAR_19;
}
