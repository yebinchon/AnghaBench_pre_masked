
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_server {int rl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__ const*,int,scalar_t__*,size_t*,scalar_t__*) ;
 int FUNC_1 (struct tlsv1_server*,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct tlsv1_server *VAR_8,
    const u8 *VAR_9, size_t VAR_10,
    u8 *VAR_11, size_t VAR_12)
{
 const u8 *VAR_13, *VAR_14;
 int VAR_15;
 u8 VAR_16, *VAR_17, *VAR_18, VAR_19;
 size_t VAR_20;

 VAR_14 = VAR_9;
 VAR_13 = VAR_9 + VAR_10;
 VAR_18 = VAR_11;
 VAR_17 = VAR_11 + VAR_12;

 while (VAR_14 < VAR_13) {
  VAR_19 = VAR_14[0];
  VAR_20 = VAR_17 - VAR_18;
  VAR_15 = FUNC_0(&VAR_8->rl, VAR_14, VAR_13 - VAR_14,
         VAR_18, &VAR_20, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_0, "TLSv1: Record layer processing "
       "failed");
   FUNC_1(VAR_8, VAR_3, VAR_16);
   return -1;
  }
  if (VAR_15 == 0) {

   FUNC_2(VAR_0, "TLSv1: Partial processing not "
       "yet supported");
   FUNC_1(VAR_8, VAR_3, VAR_16);
   return -1;
  }

  if (VAR_19 == VAR_6) {
   if (VAR_20 < 2) {
    FUNC_2(VAR_0, "TLSv1: Alert "
        "underflow");
    FUNC_1(VAR_8, VAR_3,
         VAR_1);
    return -1;
   }
   FUNC_2(VAR_0, "TLSv1: Received alert %d:%d",
       VAR_18[0], VAR_18[1]);
   if (VAR_18[0] == VAR_4) {

    VAR_14 += VAR_15;
    continue;
   }

   FUNC_1(VAR_8, VAR_3,
        VAR_18[1]);
   return -1;
  }

  if (VAR_19 != VAR_7) {
   FUNC_2(VAR_0, "TLSv1: Unexpected content type "
       "0x%x", VAR_14[0]);
   FUNC_1(VAR_8, VAR_3,
        VAR_5);
   return -1;
  }

  VAR_18 += VAR_20;
  if (VAR_18 > VAR_17) {
   FUNC_2(VAR_0, "TLSv1: Buffer not large enough "
       "for processing the received record");
   FUNC_1(VAR_8, VAR_3,
        VAR_2);
   return -1;
  }

  VAR_14 += VAR_15;
 }

 return VAR_18 - VAR_11;
}
