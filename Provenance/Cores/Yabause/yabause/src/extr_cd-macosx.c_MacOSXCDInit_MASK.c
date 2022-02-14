
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ io_object_t ;
typedef int io_iterator_t ;
typedef scalar_t__ CFTypeRef ;
typedef int CFMutableDictionaryRef ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,char*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int ) ;
 size_t FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(const char * VAR_11)
{
 CFMutableDictionaryRef VAR_12;
 io_iterator_t VAR_13;
 io_object_t VAR_14;
 char VAR_15[ VAR_0 ];

 VAR_12 = FUNC_8(VAR_8);
 FUNC_0(VAR_12, FUNC_2(VAR_10),
  VAR_5);
 FUNC_7(VAR_9,
  VAR_12, &VAR_13);

 VAR_14 = FUNC_4(VAR_13);

 if(VAR_14)
 {
  CFTypeRef VAR_16;

  VAR_16 = FUNC_6(VAR_14,
   FUNC_2(VAR_7),
   VAR_4, 0);

  if (VAR_16)
  {
   size_t VAR_17;

   FUNC_11(VAR_15, VAR_2);
   FUNC_10(VAR_15, "r");
   VAR_17 = FUNC_12(VAR_15);

   FUNC_3(VAR_16, VAR_15 + VAR_17,
    VAR_0 - VAR_17, VAR_6);

   FUNC_1(VAR_16);
  }
  FUNC_5(VAR_14);
 }

 if ((VAR_3 = FUNC_9(VAR_15, VAR_1)) == -1)
 {
  return -1;
 }

 return 0;
}
