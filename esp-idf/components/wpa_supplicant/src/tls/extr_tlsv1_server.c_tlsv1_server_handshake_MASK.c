
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {scalar_t__ state; int alert_description; scalar_t__ alert_level; int rl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,int,int *,size_t*,int *) ;
 int FUNC_3 (struct tlsv1_server*,int ,int ) ;
 int * FUNC_4 (struct tlsv1_server*,size_t*) ;
 scalar_t__ FUNC_5 (struct tlsv1_server*,int ,int *,size_t*) ;
 int * FUNC_6 (struct tlsv1_server*,scalar_t__,int ,size_t*) ;
 int FUNC_7 (int ,char*) ;

u8 * FUNC_8(struct tlsv1_server *VAR_3,
       const u8 *VAR_4, size_t VAR_5,
       size_t *VAR_6)
{
 const u8 *VAR_7, *VAR_8;
 u8 *VAR_9 = ((void*)0), *VAR_10, *VAR_11, *VAR_12, VAR_13, VAR_14;
 size_t VAR_15;
 int VAR_16;

 if (VAR_4 == ((void*)0) || VAR_5 == 0) {
  FUNC_7(VAR_1, "TLSv1: No input data to server");
  return ((void*)0);
 }

 VAR_7 = VAR_4;
 VAR_8 = VAR_4 + VAR_5;
 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 == ((void*)0))
  return ((void*)0);


 while (VAR_7 < VAR_8) {
  VAR_15 = VAR_5;
  VAR_16 = FUNC_2(&VAR_3->rl, VAR_7, VAR_8 - VAR_7,
         VAR_10, &VAR_15, &VAR_13);
  if (VAR_16 < 0) {
   FUNC_7(VAR_1, "TLSv1: Processing received "
       "record failed");
   FUNC_3(VAR_3, VAR_2, VAR_13);
   goto failed;
  }
  if (VAR_16 == 0) {

   FUNC_7(VAR_1, "TLSv1: Partial processing not "
       "yet supported");
   FUNC_3(VAR_3, VAR_2, VAR_13);
   goto failed;
  }
  VAR_14 = VAR_7[0];

  VAR_11 = VAR_10;
  VAR_12 = VAR_10 + VAR_15;



  while (VAR_11 < VAR_12) {
   VAR_15 = VAR_12 - VAR_11;
   if (FUNC_5(VAR_3, VAR_14, VAR_11,
          &VAR_15) < 0)
    goto failed;
   VAR_11 += VAR_15;
  }

  VAR_7 += VAR_16;
 }

 FUNC_0(VAR_10);
 VAR_10 = ((void*)0);

 VAR_9 = FUNC_4(VAR_3, VAR_6);

failed:
 FUNC_0(VAR_10);
 if (VAR_3->alert_level) {
  if (VAR_3->state == VAR_0) {

   FUNC_7(VAR_1, "TLSv1: Drop alert loop");
   FUNC_0(VAR_9);
   return ((void*)0);
  }
  VAR_3->state = VAR_0;
  FUNC_0(VAR_9);
  VAR_9 = FUNC_6(VAR_3, VAR_3->alert_level,
           VAR_3->alert_description,
           VAR_6);
 }

 return VAR_9;
}
