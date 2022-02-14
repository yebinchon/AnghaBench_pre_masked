
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1,
     int VAR_2, int VAR_3,
     int VAR_4, int VAR_5,
     int VAR_6, int VAR_7,
     int VAR_8, int VAR_9,
     int VAR_10, int VAR_11,
     int VAR_12, int VAR_13,
     int VAR_14)
{
 int VAR_15;

 FUNC_2();

 if ((VAR_2 > 0) && (VAR_2 <= 64))
  FUNC_1
      ("Warning: %d packet buffers may not be enough for hardware"
       " prefetch. 65 or more is recommended.\n", VAR_2);

 if (VAR_0 >= 0) {
  VAR_15 =
      FUNC_0(VAR_0, VAR_1,
            VAR_2,
            "Packet Buffers");
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_3 >= 0) {
  VAR_15 =
      FUNC_0(VAR_3, VAR_4,
            VAR_5,
            "Work Queue Entries");
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_6 >= 0) {
  VAR_15 =
      FUNC_0(VAR_6, VAR_7,
            VAR_8,
            "PKO Command Buffers");
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_9 >= 0) {
  VAR_15 =
      FUNC_0(VAR_9, VAR_10,
            VAR_11,
            "TIM Command Buffers");
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_12 >= 0) {
  VAR_15 =
      FUNC_0(VAR_12, VAR_13,
            VAR_14,
            "DFA Command Buffers");
  if (VAR_15)
   return VAR_15;
 }

 return 0;
}
