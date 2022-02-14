
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct firedtv {int device; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct firedtv*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct firedtv*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,int ) ;
 int FUNC_10 (scalar_t__*,scalar_t__) ;

int FUNC_11(struct firedtv *VAR_2, int VAR_3, int VAR_4)
{
 __be32 VAR_5, VAR_6[2];
 u64 VAR_7 = VAR_0 + (VAR_3 << 2);
 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_7, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

repeat:
 if (!FUNC_5(*VAR_6)) {
  FUNC_2(VAR_2->device, "CMP: output offline\n");
  return -VAR_1;
 }

 VAR_5 = *VAR_6;

 if (FUNC_6(*VAR_6)) {
  if (FUNC_4(*VAR_6) != VAR_4) {
   FUNC_2(VAR_2->device, "CMP: cannot change channel\n");
   return -VAR_1;
  }
  FUNC_3(VAR_2->device, "CMP: overlaying connection\n");


 } else {
  FUNC_7(VAR_6, VAR_4);
  FUNC_8(VAR_6, 2);


  FUNC_9(VAR_6, 0);





 }

 FUNC_10(VAR_6, FUNC_6(*VAR_6) + 1);

 VAR_6[1] = *VAR_6;
 VAR_6[0] = VAR_5;

 VAR_9 = FUNC_0(VAR_2, VAR_7, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_5 != *VAR_6) {







  if (++VAR_8 < 6)
   goto repeat;
  return -VAR_1;
 }

 return 0;
}
