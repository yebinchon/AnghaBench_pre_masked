
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned long serial_number; int request; int lun; int target; int channel; } ;
struct mscp {scalar_t__ xdir; struct scsi_cmnd* SCpnt; } ;
struct TYPE_2__ {struct mscp* cp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 unsigned int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned long*,unsigned int*,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_5, unsigned long VAR_6,
                 unsigned int VAR_7, unsigned int VAR_8[], unsigned int VAR_9) {
   struct scsi_cmnd *VAR_10;
   struct mscp *VAR_11;
   unsigned int VAR_12, VAR_13;
   unsigned int VAR_14 = VAR_1, VAR_15 = VAR_2, VAR_16 = VAR_2;
   unsigned int VAR_17 = VAR_2, VAR_18 = VAR_1;
   unsigned long VAR_19[VAR_9], VAR_20[VAR_9], VAR_21[VAR_9];
   unsigned long VAR_22 = 0, VAR_23 = VAR_3, VAR_24 = 0, VAR_25 = 0;
   unsigned long VAR_26 = 0;

   static unsigned int VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
   static unsigned int VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
   static unsigned int VAR_33 = 0, VAR_34 = 0;
   static unsigned long VAR_35 = 0, VAR_36 = 0;

   if (VAR_4 && !(++VAR_27 % VAR_4))
      FUNC_4("fc %d bc %d ic %d oc %d rc %d rs %d sc %d re %d" " av %ldK as %ldK.\n", VAR_27, VAR_28, VAR_32,

             VAR_31, VAR_30, VAR_33, VAR_29, VAR_34,
             VAR_36 / (VAR_30 + 1),
             VAR_35 / (VAR_30 + 1));

   if (VAR_9 <= 1) return VAR_1;

   for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
      VAR_12 = VAR_8[VAR_13]; VAR_11 = &FUNC_0(VAR_5)->cp[VAR_12]; VAR_10 = VAR_11->SCpnt;

      if (!(VAR_11->xdir == VAR_0)) VAR_17 = VAR_1;

      if (FUNC_2(VAR_10->request) < VAR_23)
  VAR_23 = FUNC_2(VAR_10->request);
      if (FUNC_2(VAR_10->request) > VAR_22)
  VAR_22 = FUNC_2(VAR_10->request);

      VAR_19[VAR_13] = FUNC_2(VAR_10->request);
      VAR_26 += FUNC_3(VAR_10->request);

      if (!VAR_13) continue;

      if (VAR_19[VAR_13] < VAR_19[VAR_13 - 1]) VAR_15 = VAR_1;
      if (VAR_19[VAR_13] > VAR_19[VAR_13 - 1]) VAR_16 = VAR_1;

      if (VAR_4) {
         if (VAR_19[VAR_13] > VAR_19[VAR_13 - 1])
            VAR_24 += VAR_19[VAR_13] - VAR_19[VAR_13 - 1];
         else
            VAR_24 += VAR_19[VAR_13 - 1] - VAR_19[VAR_13];
         }

      }

   if (VAR_4) {
      if (VAR_6 > VAR_19[0]) VAR_24 += VAR_6 - VAR_19[0]; else VAR_24 += VAR_19[0] - VAR_6;
      }

   if (VAR_6 > ((VAR_22 + VAR_23) / 2)) VAR_14 = VAR_2;

   if (VAR_26 > ((VAR_22 - VAR_23) / 2)) VAR_14 = VAR_1;

   if (!((VAR_14 && VAR_16) || (!VAR_14 && VAR_15))) FUNC_5(VAR_19, VAR_8, VAR_9, VAR_14);

   if (!VAR_17) for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
      VAR_12 = VAR_8[VAR_13]; VAR_11 = &FUNC_0(VAR_5)->cp[VAR_12]; VAR_10 = VAR_11->SCpnt;
      VAR_21[VAR_13] = FUNC_3(VAR_10->request); VAR_20[VAR_13] = VAR_10->serial_number;

      if (!VAR_13) continue;

      if ((VAR_19[VAR_13] == VAR_19[VAR_13 - 1]) || (!VAR_14 && ((VAR_19[VAR_13 - 1] + VAR_21[VAR_13 - 1]) > VAR_19[VAR_13]))
          || (VAR_14 && ((VAR_19[VAR_13] + VAR_21[VAR_13]) > VAR_19[VAR_13 - 1]))) VAR_18 = VAR_2;
      }

   if (VAR_18) FUNC_5(VAR_20, VAR_8, VAR_9, VAR_1);

   if (VAR_4) {
      if (VAR_6 > VAR_19[0]) VAR_25 = VAR_6 - VAR_19[0]; else VAR_25 = VAR_19[0] - VAR_6;
      VAR_28++; VAR_30 += VAR_9; VAR_36 += VAR_24 / 1024;
      if (VAR_17) VAR_32++;
      if (VAR_18) { VAR_31++; VAR_35 += VAR_25 / 1024; }
      else VAR_35 += (VAR_25 + VAR_22 - VAR_23) / 1024;
      if (VAR_14 && !VAR_16) { VAR_34++; VAR_33 += VAR_9; }
      if (!VAR_14 && !VAR_15) { VAR_29++; VAR_33 += VAR_9; }
      }
   return VAR_18;
}
