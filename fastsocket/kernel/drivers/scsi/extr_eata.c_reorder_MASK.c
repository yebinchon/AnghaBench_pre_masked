
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {unsigned long serial_number; int request; } ;
struct mscp {int din; struct scsi_cmnd* SCpnt; } ;
struct hostdata {struct mscp* cp; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_3 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned long,unsigned long) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*,char*,unsigned long,unsigned int,unsigned int,unsigned int,unsigned long,unsigned long,unsigned long,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (unsigned long*,unsigned int*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct hostdata *VAR_3, unsigned long VAR_4,
     unsigned int VAR_5, unsigned int VAR_6[], unsigned int VAR_7)
{
 struct scsi_cmnd *VAR_8;
 struct mscp *VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12 = 0, VAR_13 = 1, VAR_14 = 1;
 unsigned int VAR_15 = 1, VAR_16 = 0;
 unsigned long VAR_17[VAR_7], VAR_18[VAR_7], VAR_19[VAR_7];
 unsigned long VAR_20 = 0, VAR_21 = VAR_1, VAR_22 = 0, VAR_23 = 0;
 unsigned long VAR_24 = 0;

 static unsigned int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 static unsigned int VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;
 static unsigned int VAR_31 = 0, VAR_32 = 0;
 static unsigned long VAR_33 = 0, VAR_34 = 0;

 if (VAR_2 && !(++VAR_25 % VAR_2))
  FUNC_3("fc %d bc %d ic %d oc %d rc %d rs %d sc %d re %d"
         " av %ldK as %ldK.\n", VAR_25, VAR_26,
         VAR_30, VAR_29, VAR_28, VAR_31, VAR_27,
         VAR_32, VAR_34 / (VAR_28 + 1),
         VAR_33 / (VAR_28 + 1));

 if (VAR_7 <= 1)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = VAR_6[VAR_11];
  VAR_9 = &VAR_3->cp[VAR_10];
  VAR_8 = VAR_9->SCpnt;

  if (!VAR_9->din)
   VAR_15 = 0;

  if (FUNC_1(VAR_8->request) < VAR_21)
   VAR_21 = FUNC_1(VAR_8->request);
  if (FUNC_1(VAR_8->request) > VAR_20)
   VAR_20 = FUNC_1(VAR_8->request);

  VAR_17[VAR_11] = FUNC_1(VAR_8->request);
  VAR_24 += FUNC_2(VAR_8->request);

  if (!VAR_11)
   continue;

  if (VAR_17[VAR_11] < VAR_17[VAR_11 - 1])
   VAR_13 = 0;
  if (VAR_17[VAR_11] > VAR_17[VAR_11 - 1])
   VAR_14 = 0;

  if (VAR_2) {
   if (VAR_17[VAR_11] > VAR_17[VAR_11 - 1])
    VAR_22 += VAR_17[VAR_11] - VAR_17[VAR_11 - 1];
   else
    VAR_22 += VAR_17[VAR_11 - 1] - VAR_17[VAR_11];
  }

 }

 if (VAR_2) {
  if (VAR_4 > VAR_17[0])
   VAR_22 += VAR_4 - VAR_17[0];
  else
   VAR_22 += VAR_17[0] - VAR_4;
 }

 if (VAR_4 > ((VAR_20 + VAR_21) / 2))
  VAR_12 = 1;

 if (VAR_24 > ((VAR_20 - VAR_21) / 2))
  VAR_12 = 0;

 if (!((VAR_12 && VAR_14) || (!VAR_12 && VAR_13)))
  FUNC_5(VAR_17, VAR_6, VAR_7, VAR_12);

 if (!VAR_15)
  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   VAR_10 = VAR_6[VAR_11];
   VAR_9 = &VAR_3->cp[VAR_10];
   VAR_8 = VAR_9->SCpnt;
   VAR_19[VAR_11] = FUNC_2(VAR_8->request);
   VAR_18[VAR_11] = VAR_8->serial_number;

   if (!VAR_11)
    continue;

   if ((VAR_17[VAR_11] == VAR_17[VAR_11 - 1])
       || (!VAR_12 && ((VAR_17[VAR_11 - 1] + VAR_19[VAR_11 - 1]) > VAR_17[VAR_11]))
       || (VAR_12 && ((VAR_17[VAR_11] + VAR_19[VAR_11]) > VAR_17[VAR_11 - 1])))
    VAR_16 = 1;
  }

 if (VAR_16)
  FUNC_5(VAR_18, VAR_6, VAR_7, 0);

 if (VAR_2) {
  if (VAR_4 > VAR_17[0])
   VAR_23 = VAR_4 - VAR_17[0];
  else
   VAR_23 = VAR_17[0] - VAR_4;
  VAR_26++;
  VAR_28 += VAR_7;
  VAR_34 += VAR_22 / 1024;
  if (VAR_15)
   VAR_30++;
  if (VAR_16) {
   VAR_29++;
   VAR_33 += VAR_23 / 1024;
  } else
   VAR_33 += (VAR_23 + VAR_20 - VAR_21) / 1024;
  if (VAR_12 && !VAR_14) {
   VAR_32++;
   VAR_31 += VAR_7;
  }
  if (!VAR_12 && !VAR_13) {
   VAR_27++;
   VAR_31 += VAR_7;
  }
 }
 return VAR_16;
}
