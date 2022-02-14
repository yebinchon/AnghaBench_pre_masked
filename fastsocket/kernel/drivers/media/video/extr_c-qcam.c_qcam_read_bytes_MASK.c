
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int pport; scalar_t__ bidirectional; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct qcam_device*,int) ;
 scalar_t__ FUNC_3 (struct qcam_device*,int) ;
 int FUNC_4 (struct qcam_device*,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct qcam_device *VAR_1, unsigned char *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;

 FUNC_4(VAR_1, 0);
 if (VAR_1->bidirectional)
 {

  while (VAR_4 < VAR_3)
  {
   unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
   unsigned char VAR_9, VAR_10, VAR_11;

   if (FUNC_3(VAR_1, 1)) return VAR_4;
   VAR_5 = FUNC_0(VAR_1->pport) >> 1;
   VAR_6 = ((FUNC_1(VAR_1->pport) >> 3) & 0x1f) ^ 0x10;
   FUNC_4(VAR_1, 1);
   if (FUNC_3(VAR_1, 0)) return VAR_4;
   VAR_7 = FUNC_0(VAR_1->pport) >> 1;
   VAR_8 = ((FUNC_1(VAR_1->pport) >> 3) & 0x1f) ^ 0x10;
   FUNC_4(VAR_1, 0);
   VAR_9 = (VAR_5 | ((VAR_6 & 1)<<7));
   VAR_10 = ((VAR_6 & 0x1e)<<3) | ((VAR_8 & 0x1e)>>1);
   VAR_11 = (VAR_7 | ((VAR_8 & 1)<<7));
   if (VAR_0) {
    VAR_2[VAR_4++] = VAR_9;
    VAR_2[VAR_4++] = VAR_10;
    VAR_2[VAR_4++] = VAR_11;
   } else {
    VAR_2[VAR_4++] = VAR_11;
    VAR_2[VAR_4++] = VAR_10;
    VAR_2[VAR_4++] = VAR_9;
   }
  }
 }
 else
 {

  int VAR_12 = 0, VAR_13 = VAR_4;
  unsigned char VAR_14[3];

  while (VAR_4 < VAR_3)
  {
   unsigned int VAR_15, VAR_16;

   if (FUNC_2(VAR_1, 1)) return VAR_4;
   VAR_15 = (FUNC_1(VAR_1->pport) & 0xf0);
   FUNC_4(VAR_1, 1);
   if (FUNC_2(VAR_1, 0)) return VAR_4;
   VAR_16 = (FUNC_1(VAR_1->pport) & 0xf0);
   FUNC_4(VAR_1, 0);

   VAR_14[(VAR_12 = VAR_4++ % 3)] = (VAR_15 | (VAR_16 >> 4)) ^ 0x88;
   if (VAR_12 >= 2) {
get_fragment:
    if (VAR_0) {
     VAR_2[VAR_13++] = VAR_14[0];
     VAR_2[VAR_13++] = VAR_14[1];
     VAR_2[VAR_13++] = VAR_14[2];
    } else {
     VAR_2[VAR_13++] = VAR_14[2];
     VAR_2[VAR_13++] = VAR_14[1];
     VAR_2[VAR_13++] = VAR_14[0];
    }
   }
  }
  if (VAR_12) {
   VAR_12 = 0;
   goto get_fragment;
  }
 }
 return VAR_4;
}
