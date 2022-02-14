
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * FUNC_2 (char*,scalar_t__,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(void)
{
 if (VAR_0 < 8192) {


  VAR_0 = 8192;
 } else if (VAR_0 > 1024*127) {
  VAR_0 = 1024 * 127;
 } else {
  VAR_0 &= 0x1FE00;
 }

 VAR_7 = FUNC_2("cifs_request",
         VAR_0 +
         VAR_2, 0,
         VAR_4, ((void*)0));
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (VAR_5 < 1)
  VAR_5 = 1;
 else if (VAR_5 > 64) {
  VAR_5 = 64;
  FUNC_0(1, "cifs_min_rcv set to maximum (64)");
 }

 VAR_8 = FUNC_4(VAR_5,
        VAR_7);

 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_7);
  return -VAR_1;
 }
 VAR_9 = FUNC_2("cifs_small_rq",
   VAR_3, 0, VAR_4,
   ((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_8);
  FUNC_3(VAR_7);
  return -VAR_1;
 }

 if (VAR_6 < 2)
  VAR_6 = 2;
 else if (VAR_6 > 256) {
  VAR_6 = 256;
  FUNC_1(1, "cifs_min_small set to maximum (256)");
 }

 VAR_10 = FUNC_4(VAR_6,
           VAR_9);

 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_8);
  FUNC_3(VAR_7);
  FUNC_3(VAR_9);
  return -VAR_1;
 }

 return 0;
}
